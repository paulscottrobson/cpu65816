import re,os,sys

# **********************************************************************************************
#
#										Represents a single opcode.
#
# **********************************************************************************************

class Opcode(object):
	def __init__(self,name,opcode,group):
		self.name = name
		self.opcode = opcode
		self.group = group if name.find("*") >= 0 else None
		self.sections = {}
	#
	def addSection(self,mask,code):
		mask = mask.replace("*",".")
		assert mask not in self.sections,self.name
		self.sections[mask] = code
	#
	def render(self,handle,aConst,xConst,base,usage):
		if self.name.find("*") < 0:
			self.renderOne(handle,self.name,base+self.opcode,aConst,xConst,usage)
		else:
			for p in self.group:
				elements = p.split(":")
				if not(self.name.startswith("st") and elements[0].startswith("#")):
					self.renderOne(handle,self.name.replace("*",elements[0]),base+self.opcode+int(elements[1],16),aConst,xConst,usage)

	def renderOne(self,handle,asm,opcode,aConst,xConst,usage):
		#print("{0:10} {1:03x} {2} {3}".format(asm,opcode,aConst,xConst))
		assert opcode not in usage,"{0:03x} collides with {1}".format(opcode,usage[opcode])
		usage[opcode] = asm
		code = None
		count = 0
		pattern = "A{0}X{0}".format(aConst,xConst)
		for k in self.sections.keys():			
			if re.match(k,pattern) is not None:
				code = self.sections[k]
				count += 1
		assert count == 1
		h.write("case 0x{4:03x}: // {0:10} [${1:02x}] A{2}X{3}\n".format(asm,opcode & 0xFF,aConst,xConst,opcode))
		addrMode = asm.split(" ")[-1].lower().strip()
		if addrMode == "#imma":
			addrMode = "#imm16" if aConst != 0 else "#imm8"
		if addrMode == "#immx":
			addrMode = "#imm16" if xConst != 0 else "#imm8"
		code = self.process(code,addrMode)
		h.write("    {0};break;\n\n".format(code))

	def process(self,code,aMode):
		if code.find("@EAC") >= 0:
			assert aMode.lower() in Opcode.MODES,"Unknown mode "+aMode.lower()
			code = code.replace("@EAC","EAC_"+Opcode.MODES[aMode.lower()].upper().replace(".","_")+"()")
			#code = code.replace("@EAC","")
		return code

Opcode.MODES = { 			
	"#imm8":	"imm.8",
	"#imm16":	"imm.16",
	"abs":		"absolute",					
	"abs,x":	"absolute.idx.x",					
	"abs,y":	"absolute.idx.y",					
	"dir": 		"direct",
	"dir,x": 	"direct.idx.x",
	"dir,y": 	"direct.idx.y",
	"(dir)":	"direct.ind",
	"[dir]":	"direct.ind.far",
	"[dir],y":	"direct.ind.far.idx.y",
	"(dir,x)":	"direct.idx.x.ind",
	"(dir),y":	"direct.ind.idx.y",
	"long":		"long",		
	"long,x":	"long.idx.x",			
	"stk,s":	"stk.idx.s",
	"(stk,s),y":"stk.idx.s.ind.y",
	"rel8":		"relative.8",
	"rel16":	"relative.16",

	"[jabs]":	"jabsolute.ind.far",
	"(jabs)":	"jabsolute.ind",
	"(jabs,x)":	"jabsolute.idx.x.ind"

} 

opcodes = []
src = [x.strip().replace("\t"," ") for x in open("description.txt").readlines()]
src = [x if x.find("//") < 0 else x[:x.find("//")].strip() for x in src]
src = [x for x in src if x != ""]
currentGroup = []

for l in src:
	processed = False
	#
	m = re.match('^\\"([A-Za-z0-9\\#\\s\\*\\[\\]]+)\\"\\s*([0-9A-F]+)\s*$',l)
	if m is not None:
		newOpcode = Opcode(m.group(1).lower(),int(m.group(2),16),[x for x in currentGroup])
		opcodes.append(newOpcode)
		processed = True
	#
	m = re.match("^Group\\:(.*)$",l)
	if m is not None:
		currentGroup = [x.strip() for x in m.group(1).split(" ") if x.strip() != ""]
		processed = True
	#
	m = re.match("^(A[01\\*]X[01\\*])\s*(.*)$",l)
	if m is not None:
		opcodes[-1].addSection(m.group(1),m.group(2).strip())
		processed = True
	#
	assert processed,"Line '{0}'".format(l)

h = open("65816_opcodes.h","w")
usage = {}

for n in range(0,len(opcodes)):
	for aValue in range(0,2):
		for xValue in range(0,2):
			base = (aValue * 2 + xValue) * 256
			opcodes[n].render(h,aValue,xValue,base,usage)
h.close()

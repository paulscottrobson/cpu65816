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
		h.write("case 0x{4:03x}: ; {0:10} [${1:02x}] A{2}X{3}\n".format(asm,opcode & 0xFF,aConst,xConst,opcode))
		code = self.process(code,asm.split(" ")[-1])
		h.write("    {0};break;\n\n".format(code))

	def process(self,code,aMode):
		if code.find("@EAC") >= 0:
			assert aMode.lower() in Opcode.MODES,"Unknown mode "+aMode.lower()
			code = code.replace("@EAC","EAC_"+Opcode.MODES[aMode.lower()].upper()+"()")
		return code

Opcode.MODES = { "(dir,x)":"indexind","stk,s":"stackrel","dir":"direct","[dir]":"dirfarind",	\
				 "#imm":"immdepend","#imm8":"imm8","#imm16":"imm16","abs":"absolute", 			\
				 "long":"far","(dir),y":"indindexy","(dir)":"indirect",							\
				 "(stk,s),y":"stackrelindindex","dir,x":"directx","dir,y":"directy", 			\
				 "[dir],y":"farindindex","abs,y":"absy","abs,x":"absx","long,x":"longx",		\
				 "dir,y":"diry","abs,y":"absy","rel8":"REL8","rel16":"REL16",					\
				 "[abs]":"absfarind","(abs)":"absind","(abs,x)":"indexindabs"
} 

opcodes = []
src = [x.strip().replace("\t"," ") for x in open("description.txt").readlines()]
src = [x if x.find("//") < 0 else x[:x.find("//")].strip() for x in src]
src = [x for x in src if x != ""]
currentGroup = []

for l in src:
	processed = False
	#
	m = re.match('^\\"([A-Za-z0-9\\#\\s\\*]+)\\"\\s*([0-9A-F]+)\s*$',l)
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

h = open("65816.h","w")
usage = {}

for n in range(0,len(opcodes)):
	for aValue in range(0,2):
		for xValue in range(0,2):
			base = (aValue * 2 + xValue) * 256
			opcodes[n].render(h,aValue,xValue,base,usage)
h.close()

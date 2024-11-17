#include <includes.hpp>
#include <tools/gsc_vm.hpp>
#include <tools/gsc.hpp>
#include <tools/gsc_opcodes.hpp>

namespace {
	using namespace tool::gsc::opcode;
	void OpCode() {
		VmInfo* gscbin = RegisterVM(VMI_IW_BIN_MW19, "Call of Duty: Modern Warfare (2019)", "iw8", "mw19", VmFlags::VMF_GSCBIN | VmFlags::VMF_NO_MAGIC);
		gscbin->RegisterVmName("gb_3b");
		gscbin->AddPlatform(PLATFORM_PC);
		// GetOpaqueStringCount / Scr_InitStringConstants =  useReducedSpGoldLimits ? 0xE2C0 : 0x1472F 
		gscbin->SetOpaqueStringCount(0x1472F);
		// VM_Execute: sub_37EA880, seems to be similar to jup without devblockbegin for start
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_CastFieldObject, 0x00);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_SetLocalVariableCached, 0x01);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Plus, 0x02);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_GetThread, 0x09);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_GreaterThan, 0x0A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_ShiftRight, 0x0C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_GetVector, 0x13);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_GetByte, 0x16);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_ShiftLeft, 0x2D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_EvalLocalVariableCached0, 0x3E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_EvalLocalVariableCached1, 0x3F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_EvalLocalVariableCached2, 0x40);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_EvalLocalVariableCached3, 0x41);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_EvalLocalVariableCached4, 0x42);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_EvalLocalVariableCached5, 0x43);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_EvalLocalVariableCached, 0x44);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_GetInteger, 0x49);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Minus, 0x4E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_GetNegByte, 0x51);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Vector, 0x54);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_End, 0x59);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_GetAnimationTree, 0x62);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Modulus, 0x64);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_BoolComplement, 0x73);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Divide, 0x88);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Multiply, 0x8B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Bit_And, 0x90);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IsDefined, 0xA7);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_IW_IsTrue, 0xA8);

		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x03);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x04);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x05);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x06);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x07);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x08);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x0B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x0D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x0E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x0F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x10);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x11);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x12);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x14);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x15);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x17);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x18);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x19);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x1A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x1B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x1C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x1D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x1E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x1F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x20);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x21);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x22);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x23);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x24);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x25);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x26);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x27);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x28);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x29);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x2A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x2B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x2C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x2E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x2F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x30);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x31);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x32);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x33);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x34);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x35);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x36);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x37);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x38);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x39);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x3A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x3B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x3C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x3D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x45);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x46);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x47);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x48);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x4A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x4B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x4C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x4F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x50);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x52);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x53);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x55);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x56);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x57);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x58);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x5A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x5B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x5C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x5D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x5E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x5F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x60);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x61);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x63);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x65);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x66);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x67);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x68);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x69);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x6A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x6B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x6D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x6E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x70);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x71);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x72);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x74);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x75);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x76);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x77);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x78);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x79);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x7A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x7B);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x7C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x7D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x7E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x7F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x80);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x81);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x82);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x83);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x84);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x85);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x86);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x87);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x89);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x8A);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x8C);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x8D);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x8E);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x8F);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x91);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x92);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x93);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x94);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x95);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x96);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x97);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x98);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0x99);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xA0);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xA1);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xA5);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xA6);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xB9);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xBA);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xBB);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xBC);
		gscbin->RegisterOpCode(PLATFORM_PC, OPCODE_Undefined, 0xBD);
	}


}
REGISTER_GSC_VM_OPCODES(gscbin, OpCode);
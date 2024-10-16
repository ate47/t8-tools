#pragma once

namespace tool::lua::opcodes {
	constexpr uint32_t HKS_MAGIC = 0x61754c1b;

	constexpr uint64_t LuaVmOf(uint32_t magic, byte vm) {
		return (((uint64_t)magic << 32) | vm);
	}
	enum LuaVM : uint64_t {
		LVM_Unknown = 0,
		LVM_HKS_51 = LuaVmOf(HKS_MAGIC, 0x51),
	};

	enum HKSInstId : uint64_t {
        LUA_OPCODE_UNDEFINED = 0,
        LUA_OPCODE_GETFIELD,
        LUA_OPCODE_TEST,
        LUA_OPCODE_CALL_I,
        LUA_OPCODE_CALL_C,
        LUA_OPCODE_EQ,
        LUA_OPCODE_EQ_BK,
        LUA_OPCODE_GETGLOBAL,
        LUA_OPCODE_MOVE,
        LUA_OPCODE_SELF,
        LUA_OPCODE_RETURN,
        LUA_OPCODE_GETTABLE_S,
        LUA_OPCODE_GETTABLE_N,
        LUA_OPCODE_GETTABLE,
        LUA_OPCODE_LOADBOOL,
        LUA_OPCODE_TFORLOOP,
        LUA_OPCODE_SETFIELD,
        LUA_OPCODE_SETTABLE_S,
        LUA_OPCODE_SETTABLE_S_BK,
        LUA_OPCODE_SETTABLE_N,
        LUA_OPCODE_SETTABLE_N_BK,
        LUA_OPCODE_SETTABLE,
        LUA_OPCODE_SETTABLE_BK,
        LUA_OPCODE_TAILCALL_I,
        LUA_OPCODE_TAILCALL_C,
        LUA_OPCODE_TAILCALL_M,
        LUA_OPCODE_LOADK,
        LUA_OPCODE_LOADNIL,
        LUA_OPCODE_SETGLOBAL,
        LUA_OPCODE_JMP,
        LUA_OPCODE_CALL_M,
        LUA_OPCODE_CALL,
        LUA_OPCODE_INTRINSIC_INDEX,
        LUA_OPCODE_INTRINSIC_NEWINDEX,
        LUA_OPCODE_INTRINSIC_SELF,
        LUA_OPCODE_INTRINSIC_INDEX_LITERAL,
        LUA_OPCODE_INTRINSIC_NEWINDEX_LITERAL,
        LUA_OPCODE_INTRINSIC_SELF_LITERAL,
        LUA_OPCODE_TAILCALL,
        LUA_OPCODE_GETUPVAL,
        LUA_OPCODE_SETUPVAL,
        LUA_OPCODE_ADD,
        LUA_OPCODE_ADD_BK,
        LUA_OPCODE_SUB,
        LUA_OPCODE_SUB_BK,
        LUA_OPCODE_MUL,
        LUA_OPCODE_MUL_BK,
        LUA_OPCODE_DIV,
        LUA_OPCODE_DIV_BK,
        LUA_OPCODE_MOD,
        LUA_OPCODE_MOD_BK,
        LUA_OPCODE_POW,
        LUA_OPCODE_POW_BK,
        LUA_OPCODE_NEWTABLE,
        LUA_OPCODE_UNM,
        LUA_OPCODE_NOT,
        LUA_OPCODE_LEN,
        LUA_OPCODE_LT,
        LUA_OPCODE_LT_BK,
        LUA_OPCODE_LE,
        LUA_OPCODE_LE_BK,
        LUA_OPCODE_SHIFT_LEFT,
        LUA_OPCODE_SHIFT_LEFT_BK,
        LUA_OPCODE_SHIFT_RIGHT,
        LUA_OPCODE_SHIFT_RIGHT_BK,
        LUA_OPCODE_BITWISE_AND,
        LUA_OPCODE_BITWISE_AND_BK,
        LUA_OPCODE_BITWISE_OR,
        LUA_OPCODE_BITWISE_OR_BK,
        LUA_OPCODE_CONCAT,
        LUA_OPCODE_TESTSET,
        LUA_OPCODE_FORPREP,
        LUA_OPCODE_FORLOOP,
        LUA_OPCODE_SETLIST,
        LUA_OPCODE_CLOSE,
        LUA_OPCODE_CLOSURE,
        LUA_OPCODE_VARARG,
        LUA_OPCODE_TAILCALL_I_R1,
        LUA_OPCODE_CALL_I_R1,
        LUA_OPCODE_SETUPVAL_R1,
        LUA_OPCODE_TEST_R1,
        LUA_OPCODE_NOT_R1,
        LUA_OPCODE_GETFIELD_R1,
        LUA_OPCODE_SETFIELD_R1,
        LUA_OPCODE_NEWSTRUCT,
        LUA_OPCODE_DATA,
        LUA_OPCODE_SETSLOTN,
        LUA_OPCODE_SETSLOTI,
        LUA_OPCODE_SETSLOT,
        LUA_OPCODE_SETSLOTS,
        LUA_OPCODE_SETSLOTMT,
        LUA_OPCODE_CHECKTYPE,
        LUA_OPCODE_CHECKTYPES,
        LUA_OPCODE_GETSLOT,
        LUA_OPCODE_GETSLOTMT,
        LUA_OPCODE_SELFSLOT,
        LUA_OPCODE_SELFSLOTMT,
        LUA_OPCODE_GETFIELD_MM,
        LUA_OPCODE_CHECKTYPE_D,
        LUA_OPCODE_GETSLOT_D,
        LUA_OPCODE_GETGLOBAL_MEM,
        LUA_OPCODE_MAX,
        LUA_OPCODE_DELETE,
        LUA_OPCODE_DELETE_BK,
        LUA_OPCODE_UNK,
	};

    HKSInstId GetOpCode(LuaVM vm, uint64_t val);
    const char* GetOpCodeName(HKSInstId val);
	void RegisterLuaVm(LuaVM vm, const char* name);
	void RegisterOpCode(LuaVM vm, HKSInstId id, uint64_t val);
}
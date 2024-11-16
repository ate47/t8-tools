#pragma once
namespace mw19 {

    enum IW19PoolType : int {
        IW19_ASSETTYPE_PHYSICSLIBRARY = 0, // 0x0
        IW19_ASSETTYPE_PHYSICSSFXEVENTASSET = 1, // 0x1
        IW19_ASSETTYPE_PHYSICSVFXEVENTASSET = 2, // 0x2
        IW19_ASSETTYPE_PHYSICSASSET = 3, // 0x3
        IW19_ASSETTYPE_PHYSICSFXPIPELINE = 4, // 0x4
        IW19_ASSETTYPE_PHYSICSFXSHAPE = 5, // 0x5
        IW19_ASSETTYPE_PHYSICSDEBUGDATA = 6, // 0x6
        IW19_ASSETTYPE_XANIM = 7, // 0x7
        IW19_ASSETTYPE_XMODELSURFS = 8, // 0x8
        IW19_ASSETTYPE_XMODEL = 9, // 0x9
        IW19_ASSETTYPE_MAYHEM = 10, // 0xa
        IW19_ASSETTYPE_MATERIAL = 11, // 0xb
        IW19_ASSETTYPE_COMPUTESHADER = 12, // 0xc
        IW19_ASSETTYPE_LIBSHADER = 13, // 0xd
        IW19_ASSETTYPE_VERTEXSHADER = 14, // 0xe
        IW19_ASSETTYPE_HULLSHADER = 15, // 0xf
        IW19_ASSETTYPE_DOMAINSHADER = 16, // 0x10
        IW19_ASSETTYPE_PIXELSHADER = 17, // 0x11
        IW19_ASSETTYPE_TECHSET = 18, // 0x12
        IW19_ASSETTYPE_IMAGE = 19, // 0x13
        IW19_ASSETTYPE_SOUNDGLOBALS = 20, // 0x14
        IW19_ASSETTYPE_SOUNDBANK = 21, // 0x15
        IW19_ASSETTYPE_SOUNDBANKTRANSIENT = 22, // 0x16
        IW19_ASSETTYPE_COL_MAP = 23, // 0x17
        IW19_ASSETTYPE_COM_MAP = 24, // 0x18
        IW19_ASSETTYPE_GLASS_MAP = 25, // 0x19
        IW19_ASSETTYPE_AIPATHS = 26, // 0x1a
        IW19_ASSETTYPE_NAVMESH = 27, // 0x1b
        IW19_ASSETTYPE_TACGRAPH = 28, // 0x1c
        IW19_ASSETTYPE_MAP_ENTS = 29, // 0x1d
        IW19_ASSETTYPE_FX_MAP = 30, // 0x1e
        IW19_ASSETTYPE_GFX_MAP = 31, // 0x1f
        IW19_ASSETTYPE_GFX_MAP_TRZONE = 32, // 0x20
        IW19_ASSETTYPE_IESPROFILE = 33, // 0x21
        IW19_ASSETTYPE_LIGHTDEF = 34, // 0x22
        IW19_ASSETTYPE_GRADINGCLUT = 35, // 0x23
        IW19_ASSETTYPE_UI_MAP = 36, // 0x24
        IW19_ASSETTYPE_FOGSPLINE = 37, // 0x25
        IW19_ASSETTYPE_ANIMCLASS = 38, // 0x26
        IW19_ASSETTYPE_PLAYERANIM = 39, // 0x27
        IW19_ASSETTYPE_GESTURE = 40, // 0x28
        IW19_ASSETTYPE_LOCALIZE = 41, // 0x29
        IW19_ASSETTYPE_ATTACHMENT = 42, // 0x2a
        IW19_ASSETTYPE_WEAPON = 43, // 0x2b
        IW19_ASSETTYPE_VFX = 44, // 0x2c
        IW19_ASSETTYPE_IMPACTFX = 45, // 0x2d
        IW19_ASSETTYPE_SURFACEFX = 46, // 0x2e
        IW19_ASSETTYPE_AITYPE = 47, // 0x2f
        IW19_ASSETTYPE_MPTYPE = 48, // 0x30
        IW19_ASSETTYPE_CHARACTER = 49, // 0x31
        IW19_ASSETTYPE_XMODELALIAS = 50, // 0x32
        IW19_ASSETTYPE_RAWFILE = 51, // 0x33
        IW19_ASSETTYPE_SCRIPTFILE = 52, // 0x34
        IW19_ASSETTYPE_SCRIPTDEBUGDATA = 53, // 0x35
        IW19_ASSETTYPE_STRINGTABLE = 54, // 0x36
        IW19_ASSETTYPE_LEADERBOARDDEF = 55, // 0x37
        IW19_ASSETTYPE_VIRTUALLEADERBOARDDEF = 56, // 0x38
        IW19_ASSETTYPE_DDL = 57, // 0x39
        IW19_ASSETTYPE_TRACER = 58, // 0x3a
        IW19_ASSETTYPE_VEHICLE = 59, // 0x3b
        IW19_ASSETTYPE_ADDON_MAP_ENTS = 60, // 0x3c
        IW19_ASSETTYPE_NETCONSTSTRINGS = 61, // 0x3d
        IW19_ASSETTYPE_LUAFILE = 62, // 0x3e
        IW19_ASSETTYPE_SCRIPTABLE = 63, // 0x3f
        IW19_ASSETTYPE_EQUIPSNDTABLE = 64, // 0x40
        IW19_ASSETTYPE_VECTORFIELD = 65, // 0x41
        IW19_ASSETTYPE_PARTICLESIMANIMATION = 66, // 0x42
        IW19_ASSETTYPE_STREAMINGINFO = 67, // 0x43
        IW19_ASSETTYPE_LASER = 68, // 0x44
        IW19_ASSETTYPE_TTF = 69, // 0x45
        IW19_ASSETTYPE_SUIT = 70, // 0x46
        IW19_ASSETTYPE_SUITANIMPACKAGE = 71, // 0x47
        IW19_ASSETTYPE_CAMERA = 72, // 0x48
        IW19_ASSETTYPE_HUDOUTLINE = 73, // 0x49
        IW19_ASSETTYPE_SPACESHIPTARGET = 74, // 0x4a
        IW19_ASSETTYPE_RUMBLE = 75, // 0x4b
        IW19_ASSETTYPE_RUMBLEGRAPH = 76, // 0x4c
        IW19_ASSETTYPE_ANIMPKG = 77, // 0x4d
        IW19_ASSETTYPE_SFXPKG = 78, // 0x4e
        IW19_ASSETTYPE_VFXPKG = 79, // 0x4f
        IW19_ASSETTYPE_FOOTSTEPVFX = 80, // 0x50
        IW19_ASSETTYPE_BEHAVIORTREE = 81, // 0x51
        IW19_ASSETTYPE_AIANIMSET = 82, // 0x52
        IW19_ASSETTYPE_AIASM = 83, // 0x53
        IW19_ASSETTYPE_PROCEDURALBONES = 84, // 0x54
        IW19_ASSETTYPE_DYNAMICBONES = 85, // 0x55
        IW19_ASSETTYPE_RETICLE = 86, // 0x56
        IW19_ASSETTYPE_XANIMCURVE = 87, // 0x57
        IW19_ASSETTYPE_COVERSELECTOR = 88, // 0x58
        IW19_ASSETTYPE_ENEMYSELECTOR = 89, // 0x59
        IW19_ASSETTYPE_CLIENTCHARACTER = 90, // 0x5a
        IW19_ASSETTYPE_CLOTHASSET = 91, // 0x5b
        IW19_ASSETTYPE_CINEMATICMOTION = 92, // 0x5c
        IW19_ASSETTYPE_ACCESSORY = 93, // 0x5d
        IW19_ASSETTYPE_LOCDMGTABLE = 94, // 0x5e
        IW19_ASSETTYPE_BULLETPENETRATION = 95, // 0x5f
        IW19_ASSETTYPE_SCRIPTBUNDLE = 96, // 0x60
        IW19_ASSETTYPE_BLENDSPACE2D = 97, // 0x61
        IW19_ASSETTYPE_XCAM = 98, // 0x62
        IW19_ASSETTYPE_CAMO = 99, // 0x63
        IW19_ASSETTYPE_XCOMPOSITEMODEL = 100, // 0x64
        IW19_ASSETTYPE_XMODELDETAILCOLLISION = 101, // 0x65
        IW19_ASSETTYPE_STREAMKEY = 102, // 0x66
        IW19_ASSETTYPE_STREAMTREEOVERRIDE = 103, // 0x67
        IW19_ASSETTYPE_KEYVALUEPAIRS = 104, // 0x68
        IW19_ASSETTYPE_STTERRAIN = 105, // 0x69
        IW19_ASSETTYPE_NATIVESCRIPTPATCH = 106, // 0x6a
        IW19_ASSETTYPE_COLLISIONTILE = 107, // 0x6b
        IW19_ASSETTYPE_EXECUTION = 108, // 0x6c
        IW19_ASSETTYPE_CARRYOBJECT = 109, // 0x6d
        IW19_ASSETTYPE_SOUNDBANKLIST = 110, // 0x6e
        IW19_ASSETTYPE_DECALVOLUMEMATERIAL = 111, // 0x6f
        IW19_ASSETTYPE_DECALVOLUMEMASK = 112, // 0x70
        IW19_ASSETTYPE_DYNENTITYLIST = 113, // 0x71
        IW19_ASSETTYPE_FX_MAP_TRZONE = 114, // 0x72
        IW19_ASSETTYPE_DLOGSCHEMA = 115, // 0x73
        IW19_ASSETTYPE_EDGELIST = 116, // 0x74
        IW19_ASSETTYPE_TRIGGEREFFECT = 117, // 0x75
        IW19_ASSETTYPE_WEAPONTRIGGER = 118, // 0x76
        IW19_ASSETTYPE_DWIDATA = 119, // 0x77
        IW19_ASSETTYPE_COUNT = 120,
    };

    const char* PoolName(IW19PoolType type);
    IW19PoolType PoolId(const char* name);
}
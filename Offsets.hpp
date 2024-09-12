// Game Version: v3.0.79.51
#pragma once
constexpr long OFF_REGION = 0x140000000;    //[Static]->Region
constexpr long OFF_LEVEL = 0x182c554;       //[Miscellaneous]->LevelName
constexpr long OFF_LOCAL_PLAYER = 0x2429238;//[Miscellaneous]->LocalPlayer
constexpr long OFF_ENTITY_LIST = 0x1f55fb8; //[Miscellaneous]->cl_entitylist
constexpr long OFF_GLOBAL_VARS = 0x182c050; //[Miscellaneous]->GlobalVars
constexpr long OFF_NAMELIST = 0xd3c9fd0;    //[Miscellaneous]->NameList

// Buttons
constexpr long OFF_IN_ATTACK = 0x0769b658;  //[Buttons]->in_attack
constexpr long OFF_IN_JUMP = 0x0769b778;    //[Buttons]->in_jump
constexpr long OFF_IN_DUCK = 0x0769b868;    //[Buttons]->in_duck
constexpr long OFFSET_IN_FORWARD = 0x0769b5a8; //[Buttons]->in_forward
constexpr long OFFSET_TRAVERSAL_START_TIME = 0x2b70; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalStartTime
constexpr long OFFSET_TRAVERSAL_PROGRESS = 0x2b6c; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalProgress
constexpr long OFFSET_TRAVERSAL_RELEASE_TIME = 0x2b78; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalReleaseTime
constexpr long OFFSET_WALL_RUN_START_TIME = 0x3614; //[RecvTable.DT_LocalPlayerExclusive]->m_wallRunStartTime
constexpr long OFFSET_WALL_RUN_CLEAR_TIME = 0x3618; //RecvTable.DT_LocalPlayerExclusive]->m_wallRunClearTime

// Player
constexpr long OFF_VIEW_MATRIX = 0x11a350;   //[RecvTable.DT_Player]->ViewMatrix
constexpr long OFF_VIEW_RENDER = 0x76dd0d8;  //[RecvTable.DT_Player]->ViewRender
constexpr long OFF_VIEW_MODELS = 0x2d98;     //[RecvTable.DT_Player]->m_hViewModels
constexpr long OFF_ZOOMING = 0x1be1;         //[RecvTable.DT_Player]->m_bZooming
constexpr long OFF_LOCAL_ORIGIN = 0x017c;    //[DataMap.CBaseViewModel]->m_vecAbsOrigin
constexpr long OFF_ABSVELOCITY = 0x0170;     //[DataMap.C_BaseEntity]->m_vecAbsVelocity
constexpr long OFF_TEAM_NUMBER = 0x0338;     //[RecvTable.DT_BaseEntity]->m_iTeamNum
constexpr long OFF_CURRENT_HEALTH = 0x0328;  //[RecvTable.DT_BaseEntity]->m_iHealth
constexpr long OFF_MAXHEALTH = 0x0470;       //[RecvTable.DT_Player]->m_iMaxHealth
constexpr long OFF_CURRENT_SHIELDS = 0x01a0; //[RecvTable.DT_BaseEntity]->m_shieldHealth
constexpr long OFF_MAXSHIELD = 0x01a4;       //[RecvTable.DT_TitanSoul]->m_shieldHealthMax
constexpr long OFF_NAME = 0x0481;            //[RecvTable.DT_BaseEntity]->m_iName
constexpr long OFF_SIGNIFIER_NAME = 0x0478;  //[RecvTable.DT_BaseEntity]->m_iSignifierName
constexpr long OFF_LIFE_STATE = 0x0690;      //[RecvTable.DT_Player]->m_lifeState
constexpr long OFF_BLEEDOUT_STATE = 0x2760;  //[RecvTable.DT_Player]->m_bleedoutState
constexpr long OFF_LAST_VISIBLE_TIME = 0x199e + 0x2 ; //[RecvTable.DT_BaseCombatCharacter]->CPlayer!lastVisibleTime // m_hudInfo_visibilityTestAlwaysPasses + 0x2
constexpr long OFF_LAST_AIMEDAT_TIME = OFF_LAST_VISIBLE_TIME + 0x8; //[RecvTable.DT_BaseCombatCharacter]->OFF_LAST_VISIBLE_TIME + 0x8 // m_hudInfo_visibilityTestAlwaysPasses + 0x2 + 0x8
constexpr long OFF_VIEW_ANGLES = 0x2534 - 0x14; //[DataMap.C_Player]->m_ammoPoolCapacity - 0x14
constexpr long OFF_PUNCH_ANGLES = 0x2438;    //[DataMap.C_Player]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
constexpr long OFF_BREATH_ANGLES = OFF_VIEW_ANGLES - 0x10; //(OFF_VIEW_ANGLES - 0x10)
constexpr long OFF_STUDIOHDR = 0x1000;       //[Miscellaneous]->CBaseAnimating!m_pStudioHdr
constexpr long OFF_BONES =  0x0db0 + 0x48;   //[RecvTable.DT_BaseAnimating]->m_nForceBone + 0x48
constexpr long OFF_CAMERAORIGIN = 0x1ee0;    //[Miscellaneous]->CPlayer!camera_origin
constexpr long OFF_MODELNAME = 0x0030;       //[DataMap.C_BaseEntity]->m_ModelName
constexpr long OFF_YAW = 0x223c - 0x8;;      //[DataMap.C_Player]=>m_currentFramePlayer.m_ammoPoolCount - 0x8
constexpr long OFF_NAMEINDEX = 0x38;         //[RecvTable.DT_BaseEntity]
constexpr long OFF_XPLEVEL = 0x3724;         //m_xp
constexpr long OFF_SQUAD_ID = 0x0344;        //m_squadID
constexpr long OFF_GAMEMODE = 0x02461290;    //mp_gamemode
constexpr long OFF_SPECTATOR_LIST = 0x1F57FD8; //IDA signtature -> [48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 FF ? ? 48 85 C0 74 ? 48 63 4E 38]
constexpr long OFF_SPECTATOR_LIST_ARRAY = 0x974; 

// Weapon
constexpr long OFF_WEAPON_HANDLE = 0x1944;   //[RecvTable.DT_BaseCombatCharacter]->m_latestPrimaryWeapons
constexpr long OFF_WEAPON_INDEX = 0x1788;    //[RecvTable.DT_WeaponX]->m_weaponNameIndex
constexpr long OFFSET_AMMO = 0x1564;         //[DT_WeaponX_LocalWeaponData]->m_ammoInClip
constexpr long OFF_GRENADE_HANDLE = 0x1954;  //[RecvTable.DT_Player]->m_latestNonOffhandWeapons
constexpr long OFF_SKIN = 0x0d68;            //[RecvTable.DT_BaseAnimating]->m_nSkin
constexpr long OFF_WEAPON_DISCARDED = 0x15a9;//[RecvTable.DT_WeaponX]->m_discarded
constexpr long OFFSET_TIME_BASE = 0x2088;    //[RecvTable.DT_Player]->m_currentFramePlayer.timeBase

constexpr long OFF_PROJECTILESCALE = 0x1EC4 + 0x8; //CWeaponX!m_flProjectileScale //[WeaponSettings]->projectile_gravity_scale + [WeaponSettingsMeta].base
constexpr long OFF_PROJECTILESPEED = 0x1EC4; //CWeaponX!m_flProjectileSpeed //[WeaponSettings]->projectile_launch_speed + [WeaponSettingsMeta].base

// Glow
constexpr long HIGHLIGHT_TYPE_SIZE = 0x34;
constexpr long OFF_GLOW_THROUGH_WALL = 0x26c; //[DT_HighlightSettings].?
constexpr long OFF_GLOW_FIX = 0x268;
constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x29C; //[DT_HighlightSettings].m_highlightServerActiveStates
constexpr long OFF_GLOW_HIGHLIGHTS = 0xb17e220;
constexpr long OFF_GLOW_ENABLE = 0x28c;

#pragma once
// GameVersion=v3.0.56.43
// Updated 03/15/2024 by shook1 // Tested in game and working as of March 15th 2024

// Core
constexpr long OFF_REGION = 0x140000000; //[Static]->Region
constexpr long OFF_LEVEL = 0x16db770; //[Miscellaneous]->LevelName
constexpr long OFF_LOCAL_PLAYER = 0x2166fa8; //[Miscellaneous]->LocalPlayer
constexpr long OFF_ENTITY_LIST = 0x1db8548; //[Miscellaneous]->cl_entitylist
constexpr long OFF_GLOBAL_VARS = 0x16db270; //[Miscellaneous]->GlobalVars

// Buttons
constexpr long OFF_IN_ATTACK = 0x073e1d58; //[Buttons]->in_attack
constexpr long OFF_IN_JUMP = 0x073e1e70; //[Buttons]->in_jump
constexpr long OFF_IN_DUCK = 0x073e1f58; //[Buttons]->in_duck
constexpr long OFFSET_IN_FORWARD = 0x073ce8f0; //[Buttons]->in_forward
constexpr long OFFSET_TRAVERSAL_START_TIME = 0x2ad0; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalStartTime
constexpr long OFFSET_TRAVERSAL_PROGRESS = 0x2acc; //[RecvTable.DT_LocalPlayerExclusive]->m_traversalProgress
constexpr long OFFSET_TRAVERSAL_RELEASE_TIME = 0x2ad8;		   //[RecvTable.DT_LocalPlayerExclusive]->m_traversalReleaseTime
constexpr long OFFSET_WALL_RUN_START_TIME = 0x355c; //[RecvTable.DT_LocalPlayerExclusive]->m_wallRunStartTime
constexpr long OFFSET_WALL_RUN_CLEAR_TIME = 0x3560; //RecvTable.DT_LocalPlayerExclusive]->m_wallRunClearTime

// Player
constexpr long OFF_VIEW_MATRIX = 0x11a350; //[RecvTable.DT_Player]->ViewMatrix 
constexpr long OFF_VIEW_RENDER = 0x73e0ad8; //[RecvTable.DT_Player]->ViewRender
constexpr long OFF_VIEW_MODELS = 0x2cf8; //[RecvTable.DT_Player]->m_hViewModels
constexpr long OFF_ZOOMING = 0x1bb1; //[RecvTable.DT_Player]->m_bZooming
constexpr long OFF_LOCAL_ORIGIN = 0x017c; //[DataMap.CBaseViewModel]->m_vecAbsOrigin
constexpr long OFF_ABSVELOCITY = 0x0170; //[DataMap.C_BaseEntity]->m_vecAbsVelocity
constexpr long OFF_TEAM_NUMBER = 0x0328; //[RecvTable.DT_BaseEntity]->m_iTeamNum
constexpr long OFF_CURRENT_HEALTH = 0x0318; //[RecvTable.DT_BaseEntity]->m_iHealth
constexpr long OFF_CURRENT_SHIELDS = 0x01a0; //[RecvTable.DT_BaseEntity]->m_shieldHealth
constexpr long OFF_NAME = 0x0471; //[RecvTable.DT_BaseEntity]->m_iName
constexpr long OFF_SIGNIFIER_NAME = 0x0468; //[RecvTable.DT_BaseEntity]->m_iSignifierName
constexpr long OFF_LIFE_STATE = 0x0680; //[RecvTable.DT_Player]->m_lifeState
constexpr long OFF_BLEEDOUT_STATE = 0x26c0; //[RecvTable.DT_Player]->m_bleedoutState
constexpr long OFF_LAST_VISIBLE_TIME = 0x196d + 0x3; //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3
constexpr long OFF_LAST_AIMEDAT_TIME = 0x196d + 0x3 + 0x8; //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3 + 0x8
constexpr long OFF_VIEW_ANGLES = 0x2514 - 0x14; //[DataMap.C_Player]->m_ammoPoolCapacity - 0x14
constexpr long OFF_PUNCH_ANGLES = 0x2418; //[DataMap.C_Player]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
constexpr long OFF_BREATH_ANGLES = (OFF_VIEW_ANGLES - 0x10);
constexpr long OFF_STUDIOHDR = 0xfd0; //[Miscellaneous]->CBaseAnimating!m_pStudioHdr
constexpr long OFF_BONES = 0x0d80 + 0x48; //[RecvTable.DT_BaseAnimating]->m_nForceBone + 0x48
constexpr long OFF_CAMERAORIGIN = 0x1eb0; //[Miscellaneous]->CPlayer!camera_origin
constexpr long OFF_MODELNAME = 0x0030; //[DataMap.C_BaseEntity]->m_ModelName
constexpr long OFF_NAMELIST = 0xC5E1150; //[Miscellaneous]->NameList
constexpr long OFF_YAW = 0x221c - 0x8; //[DataMap.C_Player]=>m_currentFramePlayer.m_ammoPoolCount - 0x8
constexpr long OFF_NAMEINDEX = 0x38; //[RecvTable.DT_BaseEntity]->m_instanceNameIndex
constexpr long OFF_XPLEVEL = 0x366c;   //m_xp

// Weapon
constexpr long OFF_WEAPON_HANDLE = 0x1914; //[RecvTable.DT_BaseCombatCharacter]->m_latestPrimaryWeapons
constexpr long OFF_WEAPON_INDEX = 0x1758; //[RecvTable.DT_WeaponX]->m_weaponNameIndex
constexpr long OFFSET_AMMO = 0x1560; //[DataMap.CWeaponX]->m_ammoInClip
constexpr long OFF_GRENADE_HANDLE = 0x1924; //[RecvTable.DT_Player]->m_latestNonOffhandWeapons
constexpr long OFF_SKIN = 0x0d38; //[RecvTable.DT_BaseAnimating]->m_nSkin
constexpr long OFF_WEAPON_DISCARDED = 0x1579; //[RecvTable.DT_WeaponX]->m_discarded
constexpr long OFFSET_TIME_BASE = 0x2068; //[RecvTable.DT_Player]->m_currentFramePlayer.timeBase

constexpr long OFF_PROJECTILESCALE = 0x1e84; //CWeaponX!m_flProjectileScale //[WeaponSettings]->projectile_gravity_scale + [WeaponSettingsMeta].base
constexpr long OFF_PROJECTILESPEED = 0x1e7c; //CWeaponX!m_flProjectileSpeed //[WeaponSettings]->projectile_launch_speed + [WeaponSettingsMeta].base

// Glow
constexpr long HIGHLIGHT_TYPE_SIZE = 0x34;
constexpr long OFF_GLOW_THROUGH_WALL = 0x26c; //[DT_HighlightSettings].?
constexpr long OFF_GLOW_FIX = 0x268;
constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x28C; //[DT_HighlightSettings].m_highlightServerActiveStates
constexpr long OFF_GLOW_HIGHLIGHTS = 0xB944E30; //0xB944E30;
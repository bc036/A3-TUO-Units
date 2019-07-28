class B_Soldier_base_F;
class TUO_soldier_base_blufor: B_Soldier_base_F
{
	author = "bc036,Muronelkaz";         
	scope = 0;
	scopeCurator = 0;
	scopeArsenal = 0;
	faction = "TUO_BLU_F";
	vehicleclass = "TUO";
	identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
	displayName = "TUO_soldier_base_blufor";     
	cost = 100;
	camouflage = 2;
	sensitivity = 2;
	threat[] = {1, 1, 1};
	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	uniformClass = "DualTex_Camo_Cyre";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {};
	canDeactivateMines = 0; 
	engineer = 0;
	attendant = 0;
	icon = "iconMan";
	picture = "";
	backpack = "";
	weapons[] = 
	{
		CUP_arifle_XM8_Carbine,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		CUP_arifle_XM8_Carbine,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] = 
	{
		mag_4(FirstAidKit)
	};
	RespawnItems[] = 
	{
		mag_4(FirstAidKit)
	};
	magazines[] = 
	{
		mag_9(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	respawnMagazines[] = 
	{
		mag_9(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	linkedItems[] = 
	{
	TAC_V_Sheriff_BA_T2,
	rhsusf_opscore_fg,
	G_Bandanna_oli,
	TAC_SG_SK,
	common
	};
	respawnLinkedItems[] = 
	{
	TAC_V_Sheriff_BA_T2,
	rhsusf_opscore_fg,
	G_Bandanna_oli,
	TAC_SG_SK,
	common
	};
};
class TUO_operative_blufor:TUO_soldier_base_blufor
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Operative"
	//rank = "PRIVATE"
};
class TUO_at_operative_blufor:TUO_operative_blufor
{
	displayName = "Operative (AT)";
	icon = "iconManAT";
	backpack = Specter_IDF_pack;
	uniformClass = "DualTex_Camo_Cyre_Tee";
	//rank = "PRIVATE"
	weapons[] = 
	{
		CUP_arifle_XM8_Carbine,
		CUP_hgun_Glock17,
		CUP_launch_Mk153Mod0,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		CUP_arifle_XM8_Carbine,
		CUP_hgun_Glock17,
		CUP_launch_Mk153Mod0,
		Binocular,
		Throw,
		Put
	};
	Items[] = 
	{
		mag_2(FirstAidKit)
	};
	RespawnItems[] = 
	{
	mag_2(FirstAidKit)
	};
	magazines[] = 
	{
	mag_7(CUP_30Rnd_556x45_G36),
	CUP_17Rnd_9x19_glock17,
	mag_2(CUP_SMAW_HEDP_M),
	mag_2(SmokeShellGreen),
	mag_2(HandGrenade),
	MiniGrenade,
	DemoCharge_Remote_Mag
	};
	respawnMagazines[] = 
	{
	mag_7(CUP_30Rnd_556x45_G36),
	CUP_17Rnd_9x19_glock17,
	mag_2(CUP_SMAW_HEDP_M),
	mag_2(SmokeShellGreen),
	mag_2(HandGrenade),
	MiniGrenade,
	DemoCharge_Remote_Mag
	};
	linkedItems[] = 
	{
	TAC_FS_FOL_G,
	rhsusf_opscore_fg,
	G_Bandanna_oli,
	TAC_SG_SK,
	common
	};
	respawnLinkedItems[] = 
	{
	TAC_FS_FOL_G,
	rhsusf_opscore_fg,
	G_Bandanna_oli,
	TAC_SG_SK,
	common
	};
};
class TUO_operative_mg_blufor:TUO_operative_blufor
{
	displayName = "Operative (SAW)";
	icon = "iconManMG";
	backpack = rhs_assault_umbts;
	uniformClass = "DualTex_Camo_Cyre_Tee";
	//rank = "PRIVATE"
	weapons[] =
	{
		CUP_arifle_xm8_SAW,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_xm8_SAW,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
		mag_4(FirstAidKit)
	};
	RepsawnItems[] =
	{
		mag_4(FirstAidKit)
	};
	magazines[] =
	{
		mag_6(CUP_100Rnd_556x45_BetaCMag),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	repsawmMagazines[] =
	{
		mag_6(CUP_100Rnd_556x45_BetaCMag),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	linkedItems[] =
	{
		TAC_PBDFG2D_RG,
		TAC_K6C,
		rhs_balaclava,
		TAC_SG_SK,
		common
	};
	respawnLinkedItems[] =
	{
	  TAC_PBDFG2D_RG,
		TAC_K6C,
		rhs_balaclava,
		TAC_SG_SK,
		common
	};
};
class TUO_sharpshooter_blufor:TUO_operative_blufor
{
	displayName = "Sharpshooter";
	//rank = "PRIVATE"
	weapons[] =
	{
		CUP_arifle_xm8_sharpshooter,
		CUP_hgun_Glock17,
		Rangefinder,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_xm8_sharpshooter,
		CUP_hgun_Glock17,
		Rangefinder,
		Throw,
		Put
	};
	Items[] =
	{
	mag_2(FirstAidKit)
	};
	repsawnItems[] =
	{
	mag_2(FirstAidKit)
	};
	magazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_4(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_4(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TAC_EI_TACV10_CQB_OD,
		VSM_Bowman,
		G_Balaclava_TI_tna_F,
		TRYK_ESS_BLKBLK_NV,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_EI_TACV10_CQB_OD,
		VSM_Bowman,
		G_Balaclava_TI_tna_F,
		TRYK_ESS_BLKBLK_NV,
		common
	};
};
class TUO_grenadier_blufor:TUO_operative_blufor
{
	displayName = "Grenadier";
	backpack = "TAC_LBT_LEGAB_OD";
	//rank = "PRIVATE"
	weapons[] =
	{
		CUP_arifle_XM8_Carbine_GL,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Carbine_GL,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
	mag_2(FirstAidKit)
	};
	repsawnItems[] =
	{
	mag_2(FirstAidKit)
	};
	magazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_11(CUP_1Rnd_HE_M203),
		mag_2(CUP_1Rnd_StarCluster_Green_M203),
		CUP_1Rnd_StarFlare_Green_M203,
		mag_4(CUP_1Rnd_SmokeGreen_M203),
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	repsawmMagazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_11(CUP_1Rnd_HE_M203),
		mag_2(CUP_1Rnd_StarCluster_Green_M203),
		CUP_1Rnd_StarFlare_Green_M203,
		mag_4(CUP_1Rnd_SmokeGreen_M203),
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	linkedItems[] =
	{
		TAC_PBDFG2C_RG_1,
		rhsusf_opscore_fg,
		min_rf_scarf_olive,
		TRYK_Shemagh_G_NV,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_PBDFG2C_RG_1,
		rhsusf_opscore_fg,
		min_rf_scarf_olive,
		TRYK_Shemagh_G_NV,
		common
	};
};
class TUO_medic_blufor:TUO_operative_blufor
{
	displayName = "Medic";
	icon = "iconManMedic";
	attendant = 1;
	uniformClass = "DualTex_Camo_Cyre_Tee";
	backpack = "TRYK_B_Medbag_OD";
	//rank = "CORPORAL"
	Items[] =
	{
	mag_14(FirstAidKit),
	Medikit
	};
	repsawnItems[] =
	{
	mag_14(FirstAidKit),
	Medikit
	};
	magazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_10(SmokeShellGreen),
		mag_4(Chemlight_green),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_10(SmokeShellGreen),
		mag_4(Chemlight_green),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TAC_V_Sheriff_BA_T4,
		rhsusf_opscore_fg,
		G_Aviator,
		TRYK_Shemagh_G_NV,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_V_Sheriff_BA_T4,
		rhsusf_opscore_fg,
		G_Aviator,
		TRYK_Shemagh_G_NV,
		common
	};
};
class TUO_engineer_blufor:TUO_operative_blufor
{
	displayName = "Tech Specialist";
	icon = "iconManEngineer";
	canDeactivateMines = 1; 
	engineer = 1;
	backpack = "TAC_BP_KAR_B";
	//rank = "CORPORAL"
	Weapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
	mag_4(FirstAidKit),
	MineDetector,
	ToolKit
	};
	repsawnItems[] =
	{
	mag_4(FirstAidKit),
	MineDetector,
	ToolKit
	};
	magazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		MiniGrenade,
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		MiniGrenade,
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TAC_EI_RRV21_RG,
		VSM_Bowman_cap_Green,
		rhs_ess_black,
		TRYK_Shemagh_G_NV,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_EI_RRV21_RG,
		VSM_Bowman_cap_Green,
		rhs_ess_black,
		TRYK_Shemagh_G_NV,
		common
	};
};
class TUO_field_commander_blufor:TUO_operative_blufor
{
	displayName = "Field Commander";
	icon = "iconManOfficer";
	uniformClass = "DualTex_Camo_Cyre_Tee";
	//rank = "MAJOR"
	Weapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	Items[] =
	{
	mag_4(FirstAidKit),
	};
	repsawnItems[] =
	{
	mag_4(FirstAidKit),
	};
	magazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(HandGrenade),
		DemoCharge_Remote_Mag,
		Laserbatteries
	};
	repsawmMagazines[] =
	{
		mag_7(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(HandGrenade),
		DemoCharge_Remote_Mag,
		Laserbatteries
	};
	linkedItems[] =
	{
		TAC_FS_FOL_B,
		DualTex_Cap,
		rhs_googles_black,
		TAC_SG_SK,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_FS_FOL_B,
		DualTex_Cap,
		rhs_googles_black,
		TAC_SG_SK,
		common
	};
};
class TUO_teamlead_blufor:TUO_operative_blufor
{
	displayName = "Team Leader";
	icon = "iconManLeader";
	uniformClass = "DualTex_Camo_Cyre_Tee";
	//rank = "SERGEANT"
	Weapons[] =
	{
		CUP_arifle_XM8_Carbine,
		CUP_hgun_Glock17,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Carbine,
		CUP_hgun_Glock17,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	Items[] =
	{
	mag_3(FirstAidKit),
	};
	repsawnItems[] =
	{
	mag_3(FirstAidKit),
	};
	magazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag),
		Laserbatteries
	};
	repsawmMagazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag),
		Laserbatteries
	};
	linkedItems[] =
	{
		TAC_V_Sheriff_BA_T,
		rhsusf_opscore_fg,
		TAC_shoulder_armor_OD,
		TRYK_balaclava_NV,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_V_Sheriff_BA_T,
		rhsusf_opscore_fg,
		TAC_shoulder_armor_OD,
		TRYK_balaclava_NV,
		common
	};
};
class TUO_helipilot_blufor:TUO_operative_blufor
{
	displayName = "Helicopter Pilot";
	uniformClass = "PMC_Uniform_Flightsuit_Black";
	backpack = "CUP_T10_Parachute_backpack";
	//rank = "CAPTAIN"
	Weapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
	mag_4(FirstAidKit),
	};
	repsawnItems[] =
	{
	mag_4(FirstAidKit),
	};
	magazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TAC_V_tacSVDL_BK,
		rhsusf_hgu56p,
		G_Bandanna_blk,
		TAC_SG_SK,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_V_tacSVDL_BK,
		rhsusf_hgu56p,
		G_Bandanna_blk,
		TAC_SG_SK,
		common
	};
};
class TUO_helicrew_blufor:TUO_operative_blufor
{
	displayName = "Helicopter Crew";
	uniformClass = "PMC_Uniform_Flightsuit_Black";
	backpack = "CUP_T10_Parachute_backpack";
	//rank = "CAPTAIN"
	Weapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
	mag_4(FirstAidKit),
	};
	repsawnItems[] =
	{
	mag_4(FirstAidKit),
	};
	magazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TAC_V_tacSVDL_BK,
		rhsusf_hgu56p_mask,
		G_Bandanna_blk,
		TAC_SG_SK,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_V_tacSVDL_BK,
		rhsusf_hgu56p_mask,
		G_Bandanna_blk,
		TAC_SG_SK,
		common
	};
};
class TUO_diver_blufor:TUO_operative_blufor
{
	displayName = "Diver";
	uniformClass = "U_B_Wetsuit";
	//rank = "CORPORAL"
	Weapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		CUP_arifle_XM8_Compact,
		CUP_hgun_Glock17,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
	mag_4(FirstAidKit),
	};
	repsawnItems[] =
	{
	mag_4(FirstAidKit),
	};
	magazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen)
	};
	repsawmMagazines[] =
	{
		mag_6(CUP_30Rnd_556x45_G36),
		CUP_17Rnd_9x19_glock17,
		mag_2(SmokeShellGreen)
	};
	linkedItems[] =
	{
		V_RebreatherB,
		CUP_H_FR_Headset,
		G_B_Diving,
		TRYK_balaclava_BLACK_NV,
		common
	};
	respawnLinkedItems[] =
	{
		V_RebreatherB,
		CUP_H_FR_Headset,
		G_B_Diving,
		TRYK_balaclava_BLACK_NV,
		common
	};
};
class TUO_S_mur:TUO_operative_blufor
{
	Displayname = "Muronelkaz";
	uniformClass = "ABU_Camo_Cyre_TP";
	engineer = 1;
	attendant = 1;
	Icon = "iconManVirtual";
	Picture = "";
	Backpack = "TAC_MTAP_BK";
	//rank = "COLONEL"
	weapons[] = 
	{
		TUO_scar_h_mur,
		rhsusf_weap_m9,
		Rangefinder
	};
	respawnWeapons[] = 
	{
		TUO_scar_h_mur,
		rhsusf_weap_m9,
		Rangefinder
	};
	Items[] = 
	{
		
	};
	RespawnItems[] = 
	{
		
	};
	magazines[] = 
	{
		mag_6(B_762x51_Ball)
	};
	respawnMagazines[] = 
	{
		mag_6(B_762x51_Ball)
	};
	linkedItems[] =
	{
		TAC_PBDFG2CPL_BK,
		ABU_Helmet1,
		G_Balaclava_TI_G_blk_F,
		O_NVGoggles_urb_F,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_PBDFG2CPL_BK,
		ABU_Helmet1,
		G_Balaclava_TI_G_blk_F,
		O_NVGoggles_urb_F,
		common
	};
};
class TUO_S_bc036:TUO_operative_blufor
{
	Displayname = "Bones";
	uniformClass = "DualTex_Camo_Cyre";
	engineer = 1;
	attendant = 1;
	Icon = "iconManVirtual";
	Picture = "";
	Backpack = "TAC_LBT_LEGAB_OD";
	//rank = "COLONEL"
	weapons[] = 
	{
		TUO_m4a1_block2_bc036,
		rhsusf_weap_m9,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] = 
	{
		TUO_m4a1_block2_bc036,
		rhsusf_weap_m9,
		Laserdesignator_01_khk_F
	};
	Items[] = 
	{
		mag_7(FirstAidKit),
		MineDetector,
		common
	};
	RespawnItems[] = 
	{
		mag_7(FirstAidKit),
		MineDetector,
		common
	};
	magazines[] = 
	{
		mag_10(CUP_30Rnd_556x45_G36),
		rhsusf_mag_15Rnd_9x19_JHP,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	respawnMagazines[] = 
	{
		mag_10(CUP_30Rnd_556x45_G36),
		rhsusf_mag_15Rnd_9x19_JHP,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TAC_V_tacv10_OD,
		AOR2_Helmet1,
		TRYK_Shemagh_G,
		TRYK_G_bala_ess_NV,
		common
	};
	respawnLinkedItems[] =
	{
		TAC_V_tacv10_OD,
		AOR2_Helmet1,
		TRYK_Shemagh_G,
		TRYK_G_bala_ess_NV,
		common
	};
};
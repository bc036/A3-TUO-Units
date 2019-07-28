class B_Soldier_base_F;
class TUO_soldier_base_blufor: B_Soldier_base_F
{
	author = "bc036,Muronelkaz";
	dlc="TUO";
	scope = 0;
	scopeCurator = 0;
	scopeArsenal = 0;
	faction = "TUO_BLU_F";
	vehicleclass = "TUO";
	editorSubcategory = "EdSubcat_Personnel";
	identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
	displayName = "TUO_soldier_base_blufor";     
	cost = 100;
	camouflage = 2;
	sensitivity = 2;
	threat[] = {1, 1, 1};
	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	uniformClass = "TUO_Uniform";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {};
	canDeactivateMines = 0; 
	engineer = 0;
	attendant = 0;
	icon = "iconMan";
	picture = "";
	backpack = "";
	role = "Rifleman";
	weapons[] = 
	{
		TUO_CTAR,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		TUO_CTAR,
		hgun_Rook40_F,
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
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_4(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	respawnMagazines[] = 
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_4(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] = 
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] = 
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_operative_blufor:TUO_soldier_base_blufor
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Operative";
	//rank = "PRIVATE"
};
class TUO_recon_operative_blufor:TUO_operative_blufor
{
	displayName = "Recon Operative";
	//rank = "PRIVATE"
	weapons[] = 
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
};
class TUO_paraoperative_blufor:TUO_operative_blufor
{
	displayName = "Paraoperative";
	backpack = "B_Parachute";
	//rank = "PRIVATE"
};
class TUO_at_operative_blufor:TUO_operative_blufor
{
	displayName = "Operative (AT)";
	icon = "iconManAT";
	role = "MissileSpecialist";
	//rank = "PRIVATE"
	weapons[] = 
	{
		TUO_CTAR,
		hgun_Rook40_F,
		rhs_weap_M136,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		TUO_CTAR,
		hgun_Rook40_F,
		rhs_weap_M136,
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
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		rhs_m136_mag,
		mag_4(SmokeShellGreen),
		mag_2(HandGrenade),
		MiniGrenade,
		DemoCharge_Remote_Mag
	};
	respawnMagazines[] = 
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		rhs_m136_mag,
		mag_4(SmokeShellGreen),
		mag_2(HandGrenade),
		MiniGrenade,
		DemoCharge_Remote_Mag
	};
	linkedItems[] = 
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] = 
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_at_operative_blufor:TUO_at_operative_blufor
{
	displayName = "Recon Operative (AT)";
	//rank = "PRIVATE"
	weapons[] = 
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		rhs_weap_M136,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		rhs_weap_M136,
		Binocular,
		Throw,
		Put
	};
};
class TUO_at_paraoperative_blufor:TUO_at_operative_blufor
{
	displayName = "Paraoperative (AT)";
	backpack = "B_Parachute";
	//rank = "PRIVATE"
};
class TUO_operative_mg_blufor:TUO_operative_blufor
{
	displayName = "Operative (LSW)";
	icon = "iconManMG";
	role = "MachineGunner";
	//rank = "PRIVATE"
	weapons[] =
	{
		TUO_CTAR_lsw,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR_lsw,
		hgun_Rook40_F,
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
		mag_6(100Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	repsawmMagazines[] =
	{
		mag_6(100Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_operative_mg_blufor:TUO_operative_mg_blufor
{
	displayName = "Recon Operative (LSW)";
	//rank = "PRIVATE"
	weapons[] =
	{
		TUO_CTAR_lsw_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR_lsw_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
};
class TUO_paraoperative_mg_blufor:TUO_operative_mg_blufor
{
	displayName = "Paraoperative (LSW)";
	backpack = "B_Parachute";
	//rank = "PRIVATE"
};
class TUO_operative_dmr_blufor:TUO_operative_blufor
{
	displayName = "Operative (DMR)";
	role = "Marksman";
	//rank = "PRIVATE"
	weapons[] =
	{
		TUO_Cyrus,
		hgun_Rook40_F,
		Rangefinder,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_Cyrus,
		hgun_Rook40_F,
		Rangefinder,
		Throw,
		Put
	};
	Items[] =
	{
		mag_4(FirstAidKit)
	};
	repsawnItems[] =
	{
		mag_4(FirstAidKit)
	};
	magazines[] =
	{
		mag_6(10Rnd_93x64_DMR_05_Mag),
		30Rnd_9x21_Mag,
		mag_4(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_6(10Rnd_93x64_DMR_05_Mag),
		30Rnd_9x21_Mag,
		mag_4(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_operative_dmr_blufor:TUO_operative_dmr_blufor
{
	displayName = "Recon Operative (DMR)";
	//rank = "PRIVATE"
	weapons[] =
	{
		TUO_Cyrus_snds,
		hgun_Rook40_F,
		Rangefinder,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_Cyrus_snds,
		hgun_Rook40_F,
		Rangefinder,
		Throw,
		Put
	};
};
class TUO_paraoperative_dmr_blufor:TUO_operative_dmr_blufor
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Paraoperative (DMR)";
	backpack = "B_Parachute";
	//rank = "PRIVATE"
};
class TUO_grenadier_blufor:TUO_operative_blufor
{
	displayName = "Operative (Grenadier)";
	backpack = "B_AssaultPack_blk";
	role = "Grenadier";
	//rank = "PRIVATE"
	weapons[] =
	{
		TUO_CTAR_gl,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR_gl,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	Items[] =
	{
		mag_4(FirstAidKit)
	};
	repsawnItems[] =
	{
		mag_4(FirstAidKit)
	};
	magazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_11(1Rnd_HE_Grenade_shell),
		mag_4(UGL_FlareGreen_F),
		mag_4(1Rnd_SmokeGreen_Grenade_shell),
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_11(1Rnd_HE_Grenade_shell),
		mag_4(UGL_FlareGreen_F),
		mag_4(1Rnd_SmokeGreen_Grenade_shell),
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_grenadier_blufor:TUO_grenadier_blufor
{
	displayName = "Recon Operative (Grenadier)";
	//rank = "PRIVATE"
	weapons[] =
	{
		TUO_CTAR_gl_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR_gl_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
};
class TUO_medic_blufor:TUO_operative_blufor
{
	displayName = "Operative (Medic)";
	icon = "iconManMedic";
	attendant = 1;
	backpack = "Rainman_Kitbag_Splinter";
	role = "CombatLifeSaver";
	picture="pictureHeal";
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
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_10(SmokeShellGreen),
		mag_4(Chemlight_green),
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_4(SmokeShell),
		mag_8(SmokeShellGreen),
		mag_4(SmokeShellBlue),
		mag_4(Chemlight_green),
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_medic_blufor:TUO_medic_blufor
{
	displayName = "Recon Operative (Medic)";
	//rank = "CORPORAL"
	weapons[] = 
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] = 
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
};
class TUO_engineer_blufor:TUO_operative_blufor
{
	displayName = "Operative (Demo)";
	icon = "iconManEngineer";
	canDeactivateMines = 1; 
	detectSkill=80;
	engineer = 1;
	backpack = "B_AssaultPack_blk";
	role = "Sapper";
	picture="pictureRepair";
	//rank = "CORPORAL"
	Weapons[] =
	{
		TUO_CTAR,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR,
		hgun_Rook40_F,
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
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_4(SmokeShellGreen),
		MiniGrenade,
		mag_2(DemoCharge_Remote_Mag)
	};
	repsawmMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_4(SmokeShellGreen),
		MiniGrenade,
		mag_2(DemoCharge_Remote_Mag)
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_engineer_blufor:TUO_engineer_blufor
{
	displayName = "Recon Operative (Demo)";
	//rank = "CORPORAL"
	Weapons[] =
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
};
class TUO_field_commander_blufor:TUO_operative_blufor
{
	displayName = "Field Commander";
	icon = "iconManOfficer";
	//rank = "MAJOR"
	Weapons[] =
	{
		TUO_CTAR,
		hgun_Rook40_F,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR,
		hgun_Rook40_F,
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
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		mag_2(HandGrenade),
		DemoCharge_Remote_Mag,
		Laserbatteries
	};
	repsawmMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		mag_2(HandGrenade),
		DemoCharge_Remote_Mag,
		Laserbatteries
	};
	linkedItems[] =
	{
		TUO_Vest,
		H_Beret_blk,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		H_Beret_blk,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_teamlead_blufor:TUO_operative_blufor
{
	displayName = "Team Leader";
	icon = "iconManLeader";
	//rank = "SERGEANT"
	Weapons[] =
	{
		TUO_CTAR,
		hgun_Rook40_F,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR,
		hgun_Rook40_F,
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
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag),
		Laserbatteries
	};
	repsawmMagazines[] =
	{
		mag_6(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		mag_2(DemoCharge_Remote_Mag),
		Laserbatteries
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
};
class TUO_recon_teamlead_blufor:TUO_teamlead_blufor
{
	displayName = "Recon Team Leader";
	//rank = "SERGEANT"
	Weapons[] =
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_CTAR_snds,
		hgun_Rook40_F,
		Laserdesignator_01_khk_F,
		Throw,
		Put
	};
};
class TUO_para_teamlead_blufor:TUO_teamlead_blufor
{
	displayName = "Parateam Leader";
	backpack = "B_Parachute";
	//rank = "PRIVATE"
};
class TUO_operative_uav_blufor:TUO_operative_blufor
{
	displayName = "Operative (UAV)";
	//rank = "CORPORAL"
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		ItemMap,
		ItemCompass,
		ItemWatch,
		ItemRadio,
		B_UavTerminal
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		ItemMap,
		ItemCompass,
		ItemWatch,
		ItemRadio,
		B_UavTerminal
	};
};
class TUO_pilot_blufor:TUO_operative_blufor
{
	displayName = "Pilot";
	role = "Crewman";
	uniformClass = "TUO_Uniform_AirCrew";
	//rank = "CAPTAIN"
	Weapons[] =
	{
		TUO_Sting,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		TUO_Sting,
		hgun_Rook40_F,
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
		mag_6(30Rnd_9x21_Mag_SMG_02),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	repsawmMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	linkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_PilotHelmetFighter_B,
		G_Bandanna_blk,
		NVGogglesB_blk_F,
		common
	};
	respawnLinkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_PilotHelmetFighter_B,
		G_Bandanna_blk,
		NVGogglesB_blk_F,
		common
	};
};
class TUO_helipilot_blufor:TUO_pilot_blufor
{
	displayName = "Helicopter Pilot";
	backpack = "B_Parachute";
	//rank = "CAPTAIN"
	linkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_PilotHelmetHeli_B,
		G_Bandanna_blk,
		NVGogglesB_blk_F,
		common
	};
	respawnLinkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_PilotHelmetHeli_B,
		G_Bandanna_blk,
		NVGogglesB_blk_F,
		common
	};
};
class TUO_helicrew_blufor:TUO_pilot_blufor
{
	displayName = "Helicopter Crew";
	backpack = "B_Parachute";
	//rank = "CAPTAIN"
	linkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_CrewHelmetHeli_B,
		G_Bandanna_blk,
		NVGogglesB_blk_F,
		common
	};
	respawnLinkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_CrewHelmetHeli_B,
		G_Bandanna_blk,
		NVGogglesB_blk_F,
		common
	};
};
class TUO_diver_blufor:TUO_operative_blufor
{
	displayName = "Diver";
	role = "SpecialOperative";
	uniformClass = "U_B_Wetsuit";
	//rank = "CORPORAL"
	Weapons[] =
	{
		arifle_SDAR_F,
		hgun_Rook40_F,
		Binocular,
		Throw,
		Put
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_Rook40_F,
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
		mag_6(20Rnd_556x45_UW_mag),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen)
	};
	repsawmMagazines[] =
	{
		mag_6(20Rnd_556x45_UW_mag),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen)
	};
	linkedItems[] =
	{
		V_RebreatherB,
		G_B_Diving,
		NVGogglesB_blk_F,
		common
	};
	respawnLinkedItems[] =
	{
		V_RebreatherB,
		G_B_Diving,
		NVGogglesB_blk_F,
		common
	};
};
class TUO_S_mur:TUO_operative_blufor
{
	Displayname = "Muronelkaz";
	uniformClass = "TUO_Uniform_AirCrew";
	engineer = 1;
	attendant = 1;
	Icon = "iconManVirtual";
	Picture = "";
	Backpack = "B_AssaultPack_blk";
	//rank = "COLONEL"
	weapons[] = 
	{
		TUO_Cyrus,
		hgun_Rook40_F,
		Rangefinder
	};
	respawnWeapons[] = 
	{
		TUO_Cyrus,
		hgun_Rook40_F,
		Rangefinder
	};
	Items[] = 
	{
		FirstAidKit
	};
	RespawnItems[] = 
	{
		FirstAidKit
	};
	magazines[] = 
	{
		mag_6(10Rnd_93x64_DMR_05_Mag),
		30Rnd_9x21_Mag
	};
	respawnMagazines[] = 
	{
		mag_6(10Rnd_93x64_DMR_05_Mag),
		30Rnd_9x21_Mag
	};
	linkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_PilotHelmetHeli_B,
		G_Balaclava_TI_G_blk_F,
		NVGogglesB_blk_F,
		common
	};
	respawnLinkedItems[] =
	{
		Rainman_PlateCarrier2_Splinter_Urban,
		H_PilotHelmetHeli_B,
		G_Balaclava_TI_G_blk_F,
		NVGogglesB_blk_F,
		common
	};
};
class TUO_S_bc036:TUO_operative_blufor
{
	Displayname = "Bones";
	engineer = 1;
	attendant = 1;
	Icon = "iconManVirtual";
	Picture = "";
	//rank = "COLONEL"
	weapons[] = 
	{
		TUO_CTAR,
		hgun_Rook40_F,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] = 
	{
		TUO_CTAR,
		hgun_Rook40_F,
		Laserdesignator_01_khk_F
	};
	Items[] = 
	{
		mag_7(FirstAidKit),
		MineDetector
	};
	RespawnItems[] = 
	{
		mag_7(FirstAidKit),
		MineDetector
	};
	magazines[] = 
	{
		mag_9(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	respawnMagazines[] = 
	{
		mag_9(30Rnd_580x42_Mag_F),
		30Rnd_9x21_Mag,
		mag_2(SmokeShellGreen),
		DemoCharge_Remote_Mag
	};
	linkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		NVGogglesB_grn_F,
		common
	};
	respawnLinkedItems[] =
	{
		TUO_Vest,
		TUO_Helmet,
		G_Balaclava_TI_G_blk_F,
		NVGogglesB_grn_F,
		common
	};
};
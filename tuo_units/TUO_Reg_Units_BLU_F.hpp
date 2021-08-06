class B_T_TUO_Reg_base_F:B_Soldier_base_F
{
	author="bc036";
	_generalMacro="TUO_Soldier_base";
	cost=250000;
	side=1; //OPF_F=0, BLU_F=1, IND_F=2
	scope=1; //private=0, protected=1, public=2
	scopeArsenal=1; //private=0, protected=1, public=2
	scopeCurator=1; //private=0, protected=1, public=2
	faction="TUO_T_BLU_F";
	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_NATO",
		"G_NATO_default"
	};
	editorSubcategory="EdSubcat_Personnel";
	displayName="TUO Soldier Base";
	icon="iconMan";
	picture="";
	vehicleClass="TUO";
	DLC="TUO";
	accuracy=3;
	threat[]={0.80000001,0.1,0.1};
	camouflage=1;
	minFireTime=7;
	sensitivity = 2;
	canCarryBackPack=1;
	canDeactivateMines=0; 
	engineer=0;
	attendant=0;
	model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
	modelSides[]={1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
	nakedUniform="U_BasicBody";
	uniformClass="TUO_T_Uniform_Reg";
	backpack="";
	role="Rifleman";
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"a3\characters_f_exp\blufor\data\U_B_CTRG_Soldier_F.rvmat",
			"A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat",
			"A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat"
		};
	};
	armor=2;
	armorStructural=3;
	explosionShielding=0.30000001;
	hiddenSelections[]=
	{
		"camo",
		"insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"tuo_units\Data\TUO Uniform\Reg Suit\Tex\tuo_t_uniform_reg.paa"
	};
	weapons[]=
	{
		TUO_T_Promet,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_T_Promet,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
};
class B_A_TUO_Reg_base_F:B_T_TUO_Reg_base_F
{
	uniformClass="TUO_A_Uniform_Reg";
	backpack="";
	_generalMacro="TUO_Soldier_base_Arid";
	faction="TUO_A_BLU_F";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"tuo_units\Data\TUO Uniform\Reg Suit\Tex\tuo_a_uniform_reg.paa"
	};
	weapons[]=
	{
		TUO_A_Promet,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_A_Promet,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
	respawnLinkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
};
class B_T_TUO_Rifleman_F:B_T_TUO_Reg_base_F
{
	scope=2; //private=0, protected=1, public=2
	scopeArsenal=2; //private=0, protected=1, public=2
	scopeCurator=2; //private=0, protected=1, public=2
	displayName="TUO Rifleman";
	//rank="PRIVATE"
};
class B_A_TUO_Rifleman_F:B_A_TUO_Reg_base_F
{
	scope=2; //private=0, protected=1, public=2
	scopeArsenal=2; //private=0, protected=1, public=2
	scopeCurator=2; //private=0, protected=1, public=2
	displayName="TUO Rifleman";
	//rank="PRIVATE"
};
class B_T_TUO_Rifleman_AT_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Rifleman (AT)";
	backpack="TUO_T_Backpack_Assault_AT";
	icon="iconManAT";
	role="MissileSpecialist";
	//rank="PRIVATE"
	weapons[]=
	{
		TUO_T_Promet,
		TUO_T_4five,
		TUO_T_MRAWS,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_T_Promet,
		TUO_T_4five,
		TUO_T_MRAWS,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
};
class B_A_TUO_Rifleman_AT_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Rifleman (AT)";
	backpack="TUO_A_Backpack_Assault_AT";
	icon="iconManAT";
	role="MissileSpecialist";
	//rank="PRIVATE"
	weapons[]=
	{
		TUO_A_Promet,
		TUO_4five,
		TUO_A_MRAWS,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_A_Promet,
		TUO_4five,
		TUO_A_MRAWS,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
	respawnLinkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
};
class B_T_TUO_Mark_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Marksman";
	icon="iconMan";
	role="Marksman";
	//rank="PRIVATE"
	weapons[]=
	{
		TUO_T_Promet_DMR,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_T_Promet_DMR,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
};
class B_A_TUO_Mark_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Marksman";
	icon="iconMan";
	role="Marksman";
	//rank="PRIVATE"
	weapons[]=
	{
		TUO_A_Promet_DMR,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_A_Promet_DMR,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
	respawnLinkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
};
class B_T_TUO_Engineer_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Engineer";
	backpack="TUO_T_Backpack_Assault_Demo";
	icon="iconManEngineer";
	role="Sapper";
	engineer=1;
	canDeactivateMines=1;
	picture = "pictureRepair";
	//rank="CORPORAL"
};
class B_A_TUO_Engineer_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Engineer";
	backpack="TUO_A_Backpack_Assault_Demo";
	icon="iconManEngineer";
	role="Sapper";
	engineer=1;
	canDeactivateMines=1;
	picture = "pictureRepair";
	//rank="CORPORAL"
};
class B_T_TUO_Medic_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Medic";
	backpack="TUO_T_Backpack_Assault_Medic";
	icon="iconManMedic";
	role="CombatLifeSaver";
	attendant=1;
	picture = "pictureHeal";
	//rank="CORPORAL"
};
class B_A_TUO_Medic_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Medic";
	backpack="TUO_A_Backpack_Assault_Medic";
	icon="iconManMedic";
	role="CombatLifeSaver";
	attendant=1;
	picture = "pictureHeal";
	//rank="CORPORAL"
};
class B_T_TUO_Leader_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Squad Leader";
	icon="iconManLeader";
	backpack="TUO_T_Backpack_Radiopack_Leader";
	//rank="SERGEANT"
};
class B_A_TUO_Leader_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Squad Leader";
	icon="iconManLeader";
	backpack="TUO_A_Backpack_Radiopack_Leader";
	//rank="SERGEANT"
};
class B_T_TUO_Autorifleman_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Autorifleman";
	icon="iconManMG";
	role="MachineGunner";
	//rank="CORPORAL"
	weapons[]=
	{
		TUO_LMG,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_LMG,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_2(200Rnd_65x39_cased_Box),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_2(200Rnd_65x39_cased_Box),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
};
class B_A_TUO_Autorifleman_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Autorifleman";
	icon="iconManMG";
	role="MachineGunner";
	//rank="CORPORAL"
	weapons[]=
	{
		TUO_LMG,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_LMG,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_2(200Rnd_65x39_cased_Box),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	respawnMagazines[]=
	{
		mag_2(200Rnd_65x39_cased_Box),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
	respawnLinkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
};
class B_T_TUO_Heavy_Gunner_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Heavy Gunner";
	icon="iconManMG";
	role="MachineGunner";
	//rank="CORPORAL"
	weapons[]=
	{
		TUO_MMG,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_MMG,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_2(130Rnd_338_Mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_2(130Rnd_338_Mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
};
class B_A_TUO_Heavy_Gunner_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Heavy Gunner";
	icon="iconManMG";
	role="MachineGunner";
	//rank="CORPORAL"
	weapons[]=
	{
		TUO_MMG,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_MMG,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_2(130Rnd_338_Mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	respawnMagazines[]=
	{
		mag_2(130Rnd_338_Mag),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
	respawnLinkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
};
class B_T_TUO_Grenadier_F:B_T_TUO_Rifleman_F
{
	displayName="TUO Grenadier";
	role="Grenadier";
	//rank="CORPORAL"
	weapons[]=
	{
		TUO_T_Promet_GL,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_T_Promet_GL,
		TUO_T_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_6(1Rnd_HE_Grenade_shell),
		mag_2(1Rnd_SmokeGreen_Grenade_shell),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_6(1Rnd_HE_Grenade_shell),
		mag_2(1Rnd_SmokeGreen_Grenade_shell),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellGreen),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_T_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
};
class B_A_TUO_Grenadier_F:B_A_TUO_Rifleman_F
{
	displayName="TUO Grenadier";
	role="Grenadier";
	//rank="CORPORAL"
	weapons[]=
	{
		TUO_A_Promet_GL,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	respawnWeapons[]=
	{
		TUO_A_Promet_GL,
		TUO_4five,
		Throw,
		Put,
		Binocular,
	};
	magazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_6(1Rnd_HE_Grenade_shell),
		mag_2(1Rnd_SmokeOrange_Grenade_shell),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_6(1Rnd_HE_Grenade_shell),
		mag_2(1Rnd_SmokeOrange_Grenade_shell),
		11Rnd_45ACP_Mag,
		mag_4(SmokeShellOrange),
	};
	items[]=
	{
		mag_4(FirstAidKit),
	};
	respawnItems[]=
	{
		mag_4(FirstAidKit),
	};
	linkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
	respawnLinkedItems[]=
	{
		TUO_A_Helmet_Reg,
		TUO_A_Vest,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_blk_F,
	};
};
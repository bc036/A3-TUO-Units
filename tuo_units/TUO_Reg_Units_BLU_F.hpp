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
		"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"
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
		mag_2(Chemlight_red),
		mag_4(SmokeShellGreen),
	};
	respawnMagazines[]=
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		11Rnd_45ACP_Mag,
		mag_2(Chemlight_red),
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
		TUO_Vest_Tropic,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
	};
	respawnLinkedItems[]=
	{
		TUO_T_Helmet_Reg,
		TUO_Vest_Tropic,
		G_Balaclava_TI_G_blk_F,
		common,
		NVGogglesB_grn_F,
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
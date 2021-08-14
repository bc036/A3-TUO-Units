class B_Soldier_base_F;
class B_T_TUO_SpecFor_base_F:B_Soldier_base_F
	{
		author="bc036";
		_generalMacro="TUO_SpecOps_base";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_hex_F.jpg";
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
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		displayName="TUO Spec-Ops Base";
		icon="iconMan";
		picture = "";
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
		model="\a3\characters_f_exp\opfor\o_viper.p3d";
		modelSides[]={1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		nakedUniform="U_BasicBody";
		uniformClass="TUO_T_Uniform_SpecOp";
		backpack="TUO_T_Backpack_SpecOp";
		role="Rifleman";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"\a3\characters_f_exp\opfor\data\Suitviperop_suit.rvmat",
				"\a3\characters_f_exp\opfor\data\SuitViperOp_Suit_injury.rvmat",
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\SpecOps Suit\Tex\TUO_T_Uniform_SpecOp.paa"
		};
		weapons[]=
		{
			TUO_T_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_T_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			TUO_T_Helmet_SpecOp,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
		respawnLinkedItems[]=
		{
			TUO_T_Helmet_SpecOp,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
	};
	class B_A_TUO_SpecFor_base_F:B_T_TUO_SpecFor_base_F
	{
		uniformClass="TUO_A_Uniform_SpecOp";
		backpack="TUO_A_Backpack_SpecOp";
		_generalMacro="TUO_SpecOps_base_Arid";
		faction="TUO_A_BLU_F";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\SpecOps Suit\Tex\TUO_A_Uniform_SpecOp.paa"
		};
		weapons[]=
		{
			TUO_A_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_A_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			TUO_A_Helmet_SpecOp,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
		respawnLinkedItems[]=
		{
			TUO_A_Helmet_SpecOp,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
	};
	class B_W_TUO_SpecFor_base_F:B_T_TUO_SpecFor_base_F
	{
		uniformClass="TUO_W_Uniform_SpecOp";
		backpack="TUO_W_Backpack_SpecOp";
		_generalMacro="TUO_SpecOps_base_Woodland";
		faction="TUO_W_BLU_F";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\SpecOps Suit\Tex\TUO_W_Uniform_SpecOp.paa"
		};
		weapons[]=
		{
			TUO_T_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_T_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			TUO_W_Helmet_SpecOp,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
		respawnLinkedItems[]=
		{
			TUO_W_Helmet_SpecOp,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
	};
	class B_T_TUO_Operative_F:B_T_TUO_SpecFor_base_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeArsenal=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Operative";
		backpack="TUO_T_Backpack_Operative";
		role="SpecialOperative";
		//rank="PRIVATE"
	};
	class B_A_TUO_Operative_F:B_A_TUO_SpecFor_base_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeArsenal=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Operative";
		backpack="TUO_A_Backpack_Operative";
		role="SpecialOperative";
		//rank="PRIVATE"
	};
	class B_W_TUO_Operative_F:B_W_TUO_SpecFor_base_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeArsenal=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Operative";
		backpack="TUO_T_Backpack_Operative";
		role="SpecialOperative";
		//rank="PRIVATE"
	};
	class B_T_TUO_Operative_AT_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (AT)";
		icon="iconManAT";
		backpack="TUO_T_Backpack_SpecOp_AT";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_T_Promet_snds,
			TUO_T_MRAWS,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_T_Promet_snds,
			TUO_T_MRAWS,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			MRAWS_HEAT_F,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			MRAWS_HEAT_F,
			Laserbatteries,
		};
	};
	class B_A_TUO_Operative_AT_F:B_A_TUO_Operative_F
	{
		displayName="TUO Operative (AT)";
		icon="iconManAT";
		backpack="TUO_A_Backpack_SpecOp_AT";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_A_Promet_snds,
			TUO_A_MRAWS,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_A_Promet_snds,
			TUO_A_MRAWS,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			MRAWS_HEAT_F,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			MRAWS_HEAT_F,
			Laserbatteries,
		};
	};
	class B_W_TUO_Operative_AT_F:B_W_TUO_Operative_F
	{
		displayName="TUO Operative (AT)";
		icon="iconManAT";
		backpack="TUO_W_Backpack_SpecOp_AT";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_T_Promet_snds,
			TUO_T_MRAWS,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_T_Promet_snds,
			TUO_T_MRAWS,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			MRAWS_HEAT_F,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			MRAWS_HEAT_F,
			Laserbatteries,
		};
	};
	class B_T_TUO_Operative_DMR_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (DMR)";
		icon="iconMan";
		role="Marksman";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_T_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_T_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
	};
	class B_A_TUO_Operative_DMR_F:B_A_TUO_Operative_F
	{
		displayName="TUO Operative (DMR)";
		icon="iconMan";
		role="Marksman";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_A_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_A_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
	};
	class B_W_TUO_Operative_DMR_F:B_W_TUO_Operative_F
	{
		displayName="TUO Operative (DMR)";
		icon="iconMan";
		role="Marksman";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_T_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_T_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		magazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
		respawnMagazines[]=
		{
			30Rnd_65x39_caseless_msbs_mag,
			Laserbatteries,
		};
	};
	class B_T_TUO_Operative_Demo_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (Demo)";
		icon="iconManEngineer";
		backpack="TUO_T_Backpack_SpecOp_Demo";
		engineer=1;
		canDeactivateMines=1;
		picture = "pictureExplosive";
		//rank="CORPORAL"
	};
	class B_A_TUO_Operative_Demo_F:B_A_TUO_Operative_F
	{
		displayName="TUO Operative (Demo)";
		icon="iconManEngineer";
		backpack="TUO_A_Backpack_SpecOp_Demo";
		engineer=1;
		canDeactivateMines=1;
		picture = "pictureExplosive";
		//rank="CORPORAL"
	};
	class B_W_TUO_Operative_Demo_F:B_W_TUO_Operative_F
	{
		displayName="TUO Operative (Demo)";
		icon="iconManEngineer";
		backpack="TUO_W_Backpack_SpecOp_Demo";
		engineer=1;
		canDeactivateMines=1;
		picture = "pictureExplosive";
		//rank="CORPORAL"
	};
	class B_T_TUO_Operative_Medic_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (Medic)";
		icon="iconManMedic";
		backpack="TUO_T_Backpack_SpecOp_Medic";
		attendant=1;
		picture = "pictureHeal";
		//rank="CORPORAL"
	};
	class B_A_TUO_Operative_Medic_F:B_A_TUO_Operative_F
	{
		displayName="TUO Operative (Medic)";
		icon="iconManMedic";
		backpack="TUO_A_Backpack_SpecOp_Medic";
		attendant=1;
		picture = "pictureHeal";
		//rank="CORPORAL"
	};
	class B_W_TUO_Operative_Medic_F:B_W_TUO_Operative_F
	{
		displayName="TUO Operative (Medic)";
		icon="iconManMedic";
		backpack="TUO_W_Backpack_SpecOp_Medic";
		attendant=1;
		picture = "pictureHeal";
		//rank="CORPORAL"
	};
	class B_T_TUO_Operative_Leader_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (Leader)";
		icon="iconManLeader";
		backpack="TUO_T_Backpack_Operative_Leader";
		//rank="SERGEANT"
	};
	class B_A_TUO_Operative_Leader_F:B_A_TUO_Operative_F
	{
		displayName="TUO Operative (Leader)";
		icon="iconManLeader";
		backpack="TUO_A_Backpack_Operative_Leader";
		//rank="SERGEANT"
	};
	class B_W_TUO_Operative_Leader_F:B_W_TUO_Operative_F
	{
		displayName="TUO Operative (Leader)";
		icon="iconManLeader";
		backpack="TUO_W_Backpack_Operative_Leader";
		//rank="SERGEANT"
	};
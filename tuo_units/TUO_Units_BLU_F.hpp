class B_Soldier_base_F;
class B_TUO_SpecFor_base_F:B_Soldier_base_F
	{
		author="bc036";
		_generalMacro="TUO_Soldier_base";
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_hex_F.jpg";
		cost=250000;
		side=1; //OPF_F=0, BLU_F=1, IND_F=2
		scope=1; //private=0, protected=1, public=2
		scopeArsenal=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		faction="TUO_BLU_F";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		displayName="TUO Base";
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
		canDeactivateMines = 0; 
		engineer = 0;
		attendant = 0;
		model="\a3\characters_f_exp\opfor\o_viper.p3d";
		modelSides[]={1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		nakedUniform="U_BasicBody";
		uniformClass="TUO_Uniform_Tropic";
		backpack="TUO_Backpack_Tropic";
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
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=6;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=8;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=8;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=8;
				material=-1;
				name="arms";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitHands: HitArms
			{
				armor=8;
				material=-1;
				name="hands";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=8;
				material=-1;
				name="legs";
				passThrough=0.69999999;
				radius=0.14;
				explosionShielding=0.1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
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
			"tuo_units\Data\TUO Uniform\Suit\Tex\tuo_uniform_tropic.paa"
		};
		weapons[]=
		{
			TUO_Promet_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_Promet_snds,
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
			TUO_Helmet_Tropic,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
		respawnLinkedItems[]=
		{
			TUO_Helmet_Tropic,
			TUO_Diving_Contacts,
			TUO_Rebreather_Module,
			common
		};
	};
	class B_T_TUO_Operative_F:B_TUO_SpecFor_base_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeArsenal=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Operative";
		backpack="TUO_Backpack_Operative";
		role="SpecialOperative";
		//rank="PRIVATE"
	};
	class B_T_TUO_Operative_AT_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (AT)";
		icon="iconManAT";
		backpack="TUO_Backpack_Tropic_AT";
		//rank="PRIVATE"
		weapons[]=
		{
			TUO_Promet_snds,
			TUO_MRAWS_Tropic,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_Promet_snds,
			TUO_MRAWS_Tropic,
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
			TUO_Promet_DMR_snds,
			Throw,
			Put,
			Laserdesignator_03,
		};
		respawnWeapons[]=
		{
			TUO_Promet_DMR_snds,
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
		backpack="TUO_Backpack_Tropic_Demo";
		engineer=1;
		picture = "pictureExplosive";
		//rank="CORPORAL"
	};
	class B_T_TUO_Operative_Medic_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative (Medic)";
		icon="iconManMedic";
		backpack="TUO_Backpack_Tropic_Medic";
		attendant=1;
		picture = "pictureHeal";
		//rank="CORPORAL"
	};
	class B_T_TUO_Operative_Leader_F:B_T_TUO_Operative_F
	{
		displayName="TUO Operative";
		icon="iconManLeader";
		backpack="TUO_Backpack_Operative_Leader";
		//rank="SERGEANT"
	};
	class Bag_Base;
	class TUO_Extra_Pockets:Bag_Base
	{
		author="bc036";
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Extra Pockets";
		model="tuo_units\Data\TUO Uniform\null.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\null_CA.paa"
		};
		maximumLoad=100;
		mass=0;
	};
	class B_ViperLightHarness_ghex_F;
	class TUO_T_Backpack_SpecOp:B_ViperLightHarness_ghex_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Backpack Tropic";
		modelSides[] = {0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\tuo_units\Data\TUO Uniform\Backpack\Tex\tuo_t_backpack_specop.paa"
		};
		maximumLoad=260;
		mass=45;
	};
	class TUO_A_Backpack_SpecOp:TUO_T_Backpack_SpecOp
	{
		displayName="TUO Backpack Arid";
		hiddenSelectionsTextures[]=
		{
			"\tuo_units\Data\TUO Uniform\Backpack\Tex\tuo_a_backpack_specop.paa"
		};
	};
	class TUO_T_Backpack_Operative:TUO_Extra_Pockets
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};		
	};
	class TUO_A_Backpack_Operative:TUO_T_Backpack_Operative
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
		};
	};
	class TUO_T_Backpack_Operative_Leader:TUO_T_Backpack_Operative
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_B_IR_Grenade
			{
				magazine="B_IR_Grenade";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};		
	};
	class TUO_A_Backpack_Operative_Leader:TUO_A_Backpack_Operative
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_B_IR_Grenade
			{
				magazine="B_IR_Grenade";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};		
	};
	class TUO_T_Backpack_SpecOp_AT:TUO_T_Backpack_SpecOp
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=2;
			};
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};		
	};
	class TUO_A_Backpack_SpecOp_AT:TUO_A_Backpack_SpecOp
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=2;
			};
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};		
	};
	class TUO_T_Backpack_SpecOp_Demo:TUO_T_Backpack_SpecOp
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};		
	};
	class TUO_A_Backpack_SpecOp_Demo:TUO_A_Backpack_SpecOp
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};		
	};
	class TUO_T_Backpack_SpecOp_Medic:TUO_T_Backpack_SpecOp
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};		
	};
	class TUO_A_Backpack_SpecOp_Medic:TUO_A_Backpack_SpecOp
	{
		scope=1; //private=0, protected=1, public=2
		scopeCurator=1; //private=0, protected=1, public=2
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine="30Rnd_65x39_caseless_msbs_mag";
				count=4;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};		
	};
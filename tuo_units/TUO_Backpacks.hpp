	class Bag_Base;
	class TUO_Extra_Pockets:Bag_Base
	{
		author="bc036";
		scope=2;
		scopeCurator=2;
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
	class TUO_Backpack_Tropic:B_ViperLightHarness_ghex_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2;
		displayName="TUO Backpack Tropic";
		modelSides[] = {0,1,2,3};
		hiddenSelectionsTextures[]=
		{
			"\tuo_units\Data\TUO Uniform\Backpack\Tex\tuo_backpack_tropic.paa"
		};
		maximumLoad=260;
		mass=45;
	};
	class TUO_Backpack_Operative:TUO_Extra_Pockets
	{
		scope=1;
		scopeCurator=1;
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
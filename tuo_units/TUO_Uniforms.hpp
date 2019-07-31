	class ItemCore;
	class Item_Base_F;
	class UniformItem;
	class Uniform_Base
	{
		class ItemInfo;
	};
	class H_HelmetO_ViperSP_ghex_F;
	class TUO_Helmet_Tropic:H_HelmetO_ViperSP_ghex_F
	{
		scope=2;
		scopeCurator=2;
		displayName="TUO Helmet Tropic";
		modelSides[] = {0,1,2,3};
	};
	class Item_TUO_Uniform_Tropic: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="TUO Uniform Tropic";
		author="bc036,Muronelkaz";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class TUO_Uniform_Tropic
			{
				name="TUO_Uniform_Tropic";
				count=1;
			};
		};
	};
	class TUO_Uniform_Tropic:Uniform_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="TUO Uniform Tropic";
		modelSides[] = {0,1,2,3};
		picture="\a3\characters_f_exp\opfor\data\ui\icon_U_O_Soldier_Viper_ghex_F_ca.paa";
		model="\a3\characters_f_exp\opfor\o_viper.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Suit\tuo_uniform_tropic_test.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="TUO_Soldier_base_F";
			containerClass="Supply20";
			mass=120;
		};
	};
	class V_PlateCarrier1_rgr;
	class TUO_Vest_Tropic:V_PlateCarrier1_rgr
	{
		scope=2;
		scopeCurator=2;
		displayName="TUO Vest Tropic";
		modelSides[] = {0,1,2,3};
	};
	class U_B_PilotCoveralls;
	class TUO_Uniform_AirCrew:U_B_PilotCoveralls
	{
		scope = 3;
		modelSides[] = {0,1,2,3};
	};
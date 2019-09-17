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
	class U_O_V_Soldier_Viper_F;
	class TUO_Uniform_Tropic:U_O_V_Soldier_Viper_F
	{
		scope=2;
		scopeCurator=2;
		displayName="TUO Uniform Tropic";
		modelSides[] = {0,1,2,3};
		chiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Suit\tuo_uniform_tropic_test.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_TUO_Soldier_base_F";
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
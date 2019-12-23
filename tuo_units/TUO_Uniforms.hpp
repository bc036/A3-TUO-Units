	class HeadgearItem;
	class UniformItem;
	class VestItem;
	class H_HelmetO_ViperSP_ghex_F;
	class TUO_Helmet_Tropic:H_HelmetO_ViperSP_ghex_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Helmet Tropic";
		modelSides[] = {0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Headgear\Tex\tuo_helmet_tropic.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\A3\Characters_F_Exp\OPFOR\headgear_o_vipersp.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=8;
					passThrough=0.5;
				};
			};
		};
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
	};
	class U_O_V_Soldier_Viper_F;
	class TUO_Uniform_Tropic:U_O_V_Soldier_Viper_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Uniform Tropic";
		modelSides[] = {0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Suit\Tex\tuo_uniform_tropic.paa"
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
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Vest Tropic";
		modelSides[] = {0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
	};
	class V_RebreatherB;
	class TUO_Rebreather_Module:V_RebreatherB
	{
		author="bc036";
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Rebreather Module";
		picture="\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		model="tuo_units\Data\TUO Uniform\null.p3d";
		modelSides[] = {0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\null_CA.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="tuo_units\Data\TUO Uniform\null.p3d";
			containerClass="Supply0";
			mass=5;
			vestType="Rebreather";
		};
	};
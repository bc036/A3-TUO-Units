	class H_HelmetHBK_chops_F;
	class TUO_T_Helmet_Reg:H_HelmetHBK_chops_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Reg Helmet Tropic";
		modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Reg Headgear\Tex\tuo_t_helmet_reg.paa"
		};
	};
	class TUO_A_Helmet_Reg:TUO_T_Helmet_Reg
	{
		displayName="TUO Reg Helmet Arid";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Reg Headgear\Tex\tuo_a_helmet_reg.paa"
		};
	};
	class TUO_W_Helmet_Reg:TUO_T_Helmet_Reg
	{
		displayName="TUO Reg Helmet Woodland";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Reg Headgear\Tex\tuo_w_helmet_reg.paa"
		};
	};
	class U_B_CTRG_Soldier_F;
	class TUO_T_Uniform_Reg:U_B_CTRG_Soldier_F
	{
		author="bc036";
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Reg Uniform Tropic";
		modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Reg Suit\Tex\tuo_t_uniform_reg.paa"
		};
		DLC="TUO";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_TUO_Reg_base_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TUO_A_Uniform_Reg:TUO_T_Uniform_Reg
	{
		displayName="TUO Reg Uniform Arid";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Reg Suit\Tex\tuo_a_uniform_reg.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_TUO_Reg_base_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TUO_W_Uniform_Reg:TUO_T_Uniform_Reg
	{
		displayName="TUO Reg Uniform Woodland";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Reg Suit\Tex\tuo_w_uniform_reg.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_W_TUO_Reg_base_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class V_PlateCarrier1_rgr_noflag_F;
	class TUO_T_Vest:V_PlateCarrier1_rgr_noflag_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Reg Vest Tropic";
		modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"P:\tuo_units\Data\TUO Uniform\Reg Vest\Tex\tuo_t_vest_reg"
		};
	};
	class TUO_A_Vest:TUO_T_Vest
	{
		displayName="TUO Reg Vest Arid";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"P:\tuo_units\Data\TUO Uniform\Reg Vest\Tex\tuo_a_vest_reg"
		};
	};
	class TUO_W_Vest:TUO_T_Vest
	{
		displayName="TUO Reg Vest Woodland";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"P:\tuo_units\Data\TUO Uniform\Reg Vest\Tex\tuo_w_vest_reg"
		};
	};
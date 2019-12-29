	class H_HelmetHBK_chops_F;
	class TUO_T_Helmet_Reg:H_HelmetHBK_chops_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Reg Helmet Tropic";
		modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
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
			"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"
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
	class V_PlateCarrier1_rgr_noflag_F;
	class TUO_Vest_Tropic:V_PlateCarrier1_rgr_noflag_F
	{
		scope=2; //private=0, protected=1, public=2
		scopeCurator=2; //private=0, protected=1, public=2
		displayName="TUO Reg Vest Tropic";
		modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
	};
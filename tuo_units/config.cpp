class CfgPatches
{
	class PMC_TUO
	{
		author="bc036";
		name="Trans-Universe Operations";
		units[]= 
		{
			//Spec-Ops OPF_F
			"O_T_TUO_Operative_F",
			"O_T_TUO_Operative_AT_F",
			"O_T_TUO_Operative_DMR_F",
			"O_T_TUO_Operative_Demo_F",
			"O_T_TUO_Operative_Medic_F",
			"O_T_TUO_Operative_Leader_F",
			"O_A_TUO_Operative_F",
			"O_A_TUO_Operative_AT_F",
			"O_A_TUO_Operative_DMR_F",
			"O_A_TUO_Operative_Demo_F",
			"O_A_TUO_Operative_Medic_F",
			"O_A_TUO_Operative_Leader_F",
			//Reg OPF_F
			//Spec-Ops BLU_F
			"B_T_TUO_SpecFor_base_F",
			"B_T_TUO_Operative_F",
			"B_T_TUO_Operative_AT_F",
			"B_T_TUO_Operative_DMR_F",
			"B_T_TUO_Operative_Demo_F",
			"B_T_TUO_Operative_Medic_F",
			"B_T_TUO_Operative_Leader_F",
			"B_A_TUO_SpecFor_base_F",
			"B_A_TUO_Operative_F",
			"B_A_TUO_Operative_AT_F",
			"B_A_TUO_Operative_DMR_F",
			"B_A_TUO_Operative_Demo_F",
			"B_A_TUO_Operative_Medic_F",
			"B_A_TUO_Operative_Leader_F",
			//Reg BLU_F
			"B_T_TUO_Reg_base_F",
			"B_T_TUO_Rifleman_F",
			//Spec-Ops IND_F
			"I_T_TUO_Operative_F",
			"I_T_TUO_Operative_AT_F",
			"I_T_TUO_Operative_DMR_F",
			"I_T_TUO_Operative_Demo_F",
			"I_T_TUO_Operative_Medic_F",
			"I_T_TUO_Operative_Leader_F",
			"I_A_TUO_Operative_F",
			"I_A_TUO_Operative_AT_F",
			"I_A_TUO_Operative_DMR_F",
			"I_A_TUO_Operative_Demo_F",
			"I_A_TUO_Operative_Medic_F",
			"I_A_TUO_Operative_Leader_F",
			//Reg IND_F
			//Spec-Ops Backpacks
			"TUO_T_Backpack_SpecOp",
			"TUO_A_Backpack_SpecOp",
			"TUO_T_Backpack_Operative",
			"TUO_A_Backpack_Operative",
			"TUO_T_Backpack_SpecOp_AT",
			"TUO_A_Backpack_SpecOp_AT",
			"TUO_T_Backpack_SpecOp_Demo",
			"TUO_A_Backpack_SpecOp_Demo",
			"TUO_T_Backpack_SpecOp_Medic",
			"TUO_A_Backpack_SpecOp_Medic",
			"TUO_T_Backpack_Operative_Leader",
			"TUO_A_Backpack_Operative_Leader",
			"TUO_Extra_Pockets",
		};
		weapons[]= 
		{
			//Spec-Ops Helmets
			"TUO_T_Helmet_SpecOp",
			"TUO_A_Helmet_SpecOp",
			//Reg Helments
			"TUO_T_Helmet_Reg",
			//Spec-Ops Uniforms
			"TUO_T_Uniform_SpecOp",
			"TUO_A_Uniform_SpecOp",
			//Reg Uniforms
			"TUO_T_Uniform_Reg",
			//Spec-Ops Vests
			"TUO_Rebreather_Module",
			//Reg Vests
			"TUO_Vest_Tropic",
			//Primary
			"TUO_T_Promet",
			"TUO_T_Promet_snds",
			"TUO_T_Promet_DMR",
			"TUO_T_Promet_DMR_snds",
			"TUO_T_Promet_Arid",
			"TUO_A_Promet_snds",
			"TUO_A_Promet_DMR",
			"TUO_A_Promet_DMR_snds",
			//Secondary
			"TUO_T_4five",
			//Launchers
			"TUO_T_MRAWS",
			"TUO_A_MRAWS",
		};
		version=0.31;
		requiredVersion=0.31;
		requiredAddons[]= 
		{
			"A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Characters_F_Exp_Headgear",
			"A3_Characters_F_Exp",
			"A3_Characters_F_BLUFOR",
			"A3_Data_F_Exp",
			"A3_Weapons_F",
		};
	};
};

class CfgMods
{
	class pmc_tuo
	{
		dir="@TUO Units";
		name="TUO";
		tooltip="TUO v0.31-alpha";
		overview="Trans-Universe Operations (TUO) PMC"
		picture="\tuo_units\Data\ui\tuo_logo.paa";
		logo="\tuo_units\Data\ui\tuo_logo.paa";
		logoOver="\tuo_units\Data\ui\tuo_logo.paa";
		logoSmall="\tuo_units\Data\ui\tuo_logo.paa";
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_VTOL
	{
		displayName="VTOL";
	};
};

class CfgFactionClasses
{
	class TUO_T_OPF_F
	{
		displayName="TUO (Tropic)";
		icon="\tuo_units\Data\tuo_logo.paa";
		flag="\tuo_units\Data\tuo_logo.paa";
		priority=1;
		side=0; //OPF_F=0, BLU_F=1, IND_F=2
	};
	class TUO_A_OPF_F
	{
		displayName="TUO (Arid)";
		icon="\tuo_units\Data\tuo_logo.paa";
		flag="\tuo_units\Data\tuo_logo.paa";
		priority=1;
		side=0; //OPF_F=0, BLU_F=1, IND_F=2
	};
	class TUO_T_BLU_F
	{
		displayName="TUO (Tropic)";
		icon="\tuo_units\Data\tuo_logo.paa";
		flag="\tuo_units\Data\tuo_logo.paa";
		priority=1;
		side=1; //OPF_F=0, BLU_F=1, IND_F=2
	};
	class TUO_A_BLU_F
	{
		displayName="TUO (Arid)";
		icon="\tuo_units\Data\tuo_logo.paa";
		flag="\tuo_units\Data\tuo_logo.paa";
		priority=1;
		side=1; //OPF_F=0, BLU_F=1, IND_F=2
	};
	class TUO_T_IND_F
	{
		displayName="TUO (Tropic)";
		icon="\tuo_units\Data\tuo_logo.paa";
		flag="\tuo_units\Data\tuo_logo.paa";
		priority=1;
		side=2; //OPF_F=0, BLU_F=1, IND_F=2
	};
	class TUO_A_IND_F
	{
		displayName="TUO (Arid)";
		icon="\tuo_units\Data\tuo_logo.paa";
		flag="\tuo_units\Data\tuo_logo.paa";
		priority=1;
		side=2; //OPF_F=0, BLU_F=1, IND_F=2
	};
};

class CfgVehicleClasses
{
	class TUO
	{
		displayName="TUO";
	};
};

class CfgVehicles
{
	#define mag_2(a) a, a
	#define mag_4(a) a, a, a, a
	#define mag_5(a) a, a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
	#define common ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS
	
	#include "TUO_Backpacks.hpp"
	#include "TUO_SpecOp_Units_BLU_F.hpp"
	#include "TUO_Reg_Units_BLU_F.hpp"
	#include "TUO_SpecOp_Units_OPF_F.hpp"
	#include "TUO_SpecOp_Units_IND_F.hpp"
	//#include "TUO_Statics_BLU_F.hpp"
	//#include "TUO_Air_BLU_F.hpp"
	//#include "TUO_Land_BLU_F.hpp"
	//#include "TUO_Boats_BLU_F.hpp"
	//#include "TUO_Autonomous_BLU_F.hpp"
};

class CfgGlasses
{
	class G_Diving;
	class TUO_Diving_Contacts:G_Diving
	{
		author="bc036";
		displayname="TUO Diving Contacts";
		modelSides[]={0,1,2,3}; //OPF_F=0, BLU_F=1, IND_F=2
		model="tuo_units\Data\TUO Uniform\null.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\null_CA.paa"
		};
		identityTypes[]={};
		mode=1;
		mass=3;
		scope=2; //private=0, protected=1, public=2
	};
};

class CfgGroups
{
	//#include "TUO_SpecOp_Groups_BLU_F.hpp"
	//#include "TUO_SpecOp_Groups_OPF_F.hpp"
	//#include "TUO_SpecOp_Groups_IND_F.hpp"
};

class CfgWeapons
{
	#include "TUO_SpecOp_Uniforms.hpp"
	#include "TUO_Reg_Uniforms.hpp"
	#include "TUO_Weapons.hpp"
};
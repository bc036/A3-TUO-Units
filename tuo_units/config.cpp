class CfgPatches
{
	class PMC_TUO
	{
		author[]={"bc036"};
		name="Trans-Universe Operations";
		units[]= 
		{
			"B_TUO_Soldier_base_F",
			"TUO_Backpack_Tropic",
		};
		weapons[]= 
		{
			"TUO_Helmet_Tropic",
			"TUO_Uniform_Tropic",
			"TUO_Vest_Tropic",
			"TUO_Promit",
			"TUO_Promit_snds",
		};
		version=2.6;
		requiredVersion=2.6;
		requiredAddons[]= 
		{
			"A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Characters_F_Exp_Headgear",
			"A3_Characters_F_Exp",
			"A3_Characters_F_BLUFOR",
		};
	};
};

class CfgMods
{
	class pmc_tuo
	{
		dir = "@TUO Units";
		name = "TUO";
		tooltip = "TUO v2.6";
		overview = "Trans-Universe Operations (TUO) PMC"
		picture = "\tuo_units\Data\ui\tuo_logo.paa";
		logo = "\tuo_units\Data\ui\tuo_logo.paa";
		logoOver = "\tuo_units\Data\ui\tuo_logo.paa";
		logoSmall = "\tuo_units\Data\ui\tuo_logo.paa";
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_VTOL
	{
		displayName = "VTOL";
	};
};

class CfgFactionClasses
{
	class TUO_BLU_F
	{
		displayName = "TUO";
		icon = "\tuo_units\Data\tuo_logo.paa";
		flag ="\tuo_units\Data\tuo_logo.paa";
		priority = 1;
		side = 1; //OPF_F=0, BLU_F=1, IND_F=2
	};
};

class CfgVehicleClasses
{
	class TUO
	{
		displayName = "TUO";
	};
};

class CfgVehicles
{
	#define mag_2(a) a, a
	#define mag_4(a) a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
	#define common ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS
	
	class B_ViperLightHarness_ghex_F;
	class TUO_Backpack_Tropic:B_ViperLightHarness_ghex_F
	{
		scope=2;
		scopeCurator=2;
		displayName="TUO Backpack Tropic";
		modelSides[] = {0,1,2,3};
	};
	
	#include "TUO_Units_BLU_F.hpp"
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
		displayname="Diving Contacts";
		model="tuo_units\Data\TUO Uniform\Headgear\null.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tuo_units\Data\TUO Uniform\Headgear\null_CA.paa"
		};
		identityTypes[]={};
		mode=1;
		mass=3;
		scope=2;
	};
};

class CfgGroups
{
	//#include "TUO_Groups_BLU_F.hpp"
};

class CfgWeapons
{
	#include "TUO_Uniforms.hpp"
	#include "TUO_Weapons.hpp"
};
class CfgPatches
{
	class PMC_TUO
	{
		Author[] = {"bc036, Muronelkaz"};
		units[] = 
		{
			"TUO_soldier_base_blufor",
			"TUO_operative_blufor",
			"TUO_at_operative_blufor",
			"TUO_operative_mg_blufor",
			"TUO_teamlead_blufor",
			"TUO_sharpshooter_blufor",
			"TUO_medic_blufor",
			"TUO_field_commander_blufor",
			"TUO_engineer_blufor",
			"TUO_grenadier_blufor",
			"TUO_helipilot_blufor",
			"TUO_helicrew_blufor",
			"TUO_diver_blufor",
			"TUO_S_mur",
			"TUO_S_bc036"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_BLUFOR",
			"CUP_weapons_XM8",
			"CUP_weapons_Glock17"
		};
		icon = "TUO Logo.paa";
	};
};

class cfgFactionClasses
{
	class TUO_BLU_F
	{
		displayName = "TUO";
		icon = "TUO Logo.paa";
		priority = 1;
		side = 1;
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
	#define mag_3(a) a, a, a
	#define mag_4(a) a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
	#define common ItemMap, ItemCompass, ItemWatch, ItemRadio, ItemGPS
	
	#include "TUO_Units_BLU_F.hpp"
	#include "TUO_Statics_BLU_F.hpp"
	#include "TUO_Air_BLU_F.hpp"
	#include "TUO_Land_BLU_F.hpp"
	#include "TUO_Boats_BLU_F.hpp"
};

class CfgGroups
{
	#include "TUO_Groups_BLU_F.hpp"
};

class CfgWeapons
{  
	class KA_SCAR_H_Black_Grip;
	class TUO_scar_h_mur:KA_SCAR_H_Black_Grip
	{
		scope = 0;
		class LinkedItems
		{    
			class LinkedItemsOptic
			{     
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
		};
	};
	class rhs_weap_m4a1_blockII_grip2_KAC_wd;
	class TUO_m4a1_block2_bc036:rhs_weap_m4a1_blockII_grip2_KAC_wd
	{
		scope = 0;
		class LinkedItems
		{    
			class LinkedItemsOptic
			{     
				slot = "CowsSlot";
				item = "CUP_optic_CompM2_Woodland2";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_grip2";
			};
		};
	};
 };
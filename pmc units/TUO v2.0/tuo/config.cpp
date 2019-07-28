class CfgPatches
{
	class PMC_TUO
	{
		Author[] = {"bc036, Muronelkaz"};
		name = "Trans-Universe Operations";
		units[] = 
		{
			"TUO_soldier_base_blufor",
			"TUO_operative_blufor",
			"TUO_recon_operative_blufor",
			"TUO_paraoperative_blufor",
			"TUO_at_operative_blufor",
			"TUO_recon_at_operative_blufor",
			"TUO_at_paraoperative_blufor",
			"TUO_operative_mg_blufor",
			"TUO_recon_operative_mg_blufor",
			"TUO_paraoperative_mg_blufor",
			"TUO_teamlead_blufor",
			"TUO_recon_teamlead_blufor",
			"TUO_para_teamlead_blufor",
			"TUO_operative_dmr_blufor",
			"TUO_recon_operative_dmr_blufor",
			"TUO_paraoperative_dmr_blufor",
			"TUO_medic_blufor",
			"TUO_recon_medic_blufor",
			"TUO_field_commander_blufor",
			"TUO_engineer_blufor",
			"TUO_recon_engineer_blufor",
			"TUO_grenadier_blufor",
			"TUO_recon_grenadier_blufor",
			"TUO_pilot_blufor",
			"TUO_helipilot_blufor",
			"TUO_helicrew_blufor",
			"TUO_diver_blufor",
			"TUO_S_mur",
			"TUO_S_bc036",
			"TUO_hmg_blufor",
			"TUO_hmg_high_blufor",
			"TUO_gmg_blufor",
			"TUO_gmg_high_blufor",
			"TUO_mortar_blufor",
			"TUO_aa_blufor",
			"TUO_at_blufor",
			"TUO_pawnee_blufor",
			"TUO_uh60m_blufor",
			"TUO_huron_blufor",
			"TUO_orca_blufor",
			"TUO_taru",
			"TUO_taru_med",
			"TUO_taru_medpod",
			"TUO_taru_trans",
			"TUO_taru_transpod",
			"TUO_taru_boxpod",
			"TUO_taru_fuelpod",
			"TUO_taru_repairpod",
			"TUO_xian_infantry_blufor",
			"TUO_xian_vehicle_blufor",
			"TUO_fighter_blufor",
			"TUO_quad_blufor",
			"TUO_m1025_m2_blufor",
			"TUO_m1025_blufor",
			"TUO_rg33_m2_blufor",
			"TUO_rg33_blufor",
			"TUO_m1232_m2",
			"TUO_m113",
			"TUO_m2a2",
			"TUO_sdv_blufor",
			"TUO_assault_boat_blufor",
			"TUO_speedboat",
			"TUO_darter_blufor",
			"TUO_k40_blufor",
			"TUO_ugv_blufor",
			"TUO_gmg_auto_blufor",
			"TUO_hmg_auto_blufor"
		};
		weapons[] = 
		{
			"TUO_CTAR",
			"TUO_CTAR_snds",
			"TUO_CTAR_gl",
			"TUO_CTAR_gl_snds",
			"TUO_CTAR_lsw",
			"TUO_CTAR_lsw_snds",
			"TUO_Cyrus",
			"TUO_Cyrus_snds",
			"TUO_Sting",
			"TUO_Helmet",
			"TUO_Uniform",
			"TUO_Uniform_AirCrew",
			"TUO_Vest"
		};
		requiredVersion = 2.6;
		requiredAddons[] = 
		{
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_BLUFOR"
		};
	};
};

class CfgMods
{
	class pmc_tuo
	{
		dir = "@TUO";
		name = "TUO";
		tooltip = "TUO v2.6";
		overview = "Trans-Universe Operations (TUO) PMC"
		picture = "tuo\tuo_logo.paa";
		logo = "tuo\tuo_logo.paa";
		logoOver = "tuo\tuo_logo.paa";
		logoSmall = "tuo\tuo_logo.paa";
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
		icon = "\tuo\tuo_logo.paa";
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
	#define mag_4(a) a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
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
	#include "TUO_Autonomous_BLU_F.hpp"
};

class CfgGroups
{
	#include "TUO_Groups_BLU_F.hpp"
};

class CfgWeapons
{
	class arifle_CTAR_blk_F;
	class TUO_CTAR:arifle_CTAR_blk_F
	{
		scope = 3;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class TUO_CTAR_snds:TUO_CTAR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_58_blk_F";
			};
		};
	};
	class arifle_CTAR_GL_blk_F;
	class TUO_CTAR_gl:arifle_CTAR_GL_blk_F
	{
		scope = 3;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class TUO_CTAR_gl_snds:TUO_CTAR_gl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_58_blk_F";
			};
		};
	};
	class arifle_CTARS_blk_F;
	class TUO_CTAR_lsw:arifle_CTARS_blk_F
	{
		scope = 3;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class TUO_CTAR_lsw_snds:TUO_CTAR_lsw
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_58_blk_F";
			};
		};
	};
	class srifle_DMR_05_blk_F;
	class TUO_Cyrus:srifle_DMR_05_blk_F
	{
		scope = 3;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
					slot = "CowsSlot";
					item = "optic_Arco_blk_F";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class TUO_Cyrus_snds:TUO_Cyrus
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Arco_blk_F";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_93mmg";
			};
		};
	};
	class SMG_02_F;
	class TUO_Sting:SMG_02_F
	{
		scope = 3;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class Rainman_HelmetIA_Splinter;
	class TUO_Helmet:Rainman_HelmetIA_Splinter
	{
		scope = 3;
		modelSides[] = {0,1,2,3};
	};
	class Rainman_Combat_Fatigues_Splinter;
	class TUO_Uniform:Rainman_Combat_Fatigues_Splinter
	{
		scope = 3;
		modelSides[] = {0,1,2,3};
	};
	class Rainman_PlateCarrier2_Splinter;
	class TUO_Vest:Rainman_PlateCarrier2_Splinter
	{
		scope = 3;
		modelSides[] = {0,1,2,3};
	};
	class U_B_PilotCoveralls;
	class TUO_Uniform_AirCrew:U_B_PilotCoveralls
	{
		scope = 3;
		modelSides[] = {0,1,2,3};
	};
};
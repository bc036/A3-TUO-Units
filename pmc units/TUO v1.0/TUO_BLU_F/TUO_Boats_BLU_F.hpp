class B_SDV_01_F;
class TUO_sdv_blufor:B_SDV_01_F
{
	faction = "TUO_BLU_F";
	vehicleclass = "TUO";
	crew = "TUO_diver_blufor";
	author="bc036, Muronelkaz";
};
class B_T_Boat_Transport_01_F;
class TUO_assault_boat_blufor:B_T_Boat_Transport_01_F
{
	faction = "TUO_BLU_F";
	vehicleclass = "TUO";
	crew = "TUO_operative_blufor";
	author="bc036, Muronelkaz";
};
class CUP_B_RHIB_USMC;
class TUO_rhib_blufor:CUP_B_RHIB_USMC
{
	faction = "TUO_BLU_F";
	vehicleclass = "TUO";
	crew = "TUO_operative_blufor";
	author="bc036, Muronelkaz";
};
class rhsusf_mkvsoc;
class TUO_mkv:rhsusf_mkvsoc
{
	faction = "TUO_BLU_F";
	vehicleclass = "TUO";
	crew = "TUO_operative_blufor";
	author="bc036, Muronelkaz";
	class Turrets
	{
		class MainTurret
		{
			gunnerType = "TUO_operative_blufor";
			class camera_b_gunTurret
			{
				gunnerType = "TUO_operative_blufor";
			};
			class rem_spotL_gunTurret
			{
				gunnerType = "TUO_operative_blufor";
			};
		};
	};
};
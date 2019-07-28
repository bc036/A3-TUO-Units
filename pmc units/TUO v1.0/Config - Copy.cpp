enum {
     //  = 2,
    DESTRUCTENGINE = 2,
    DESTRUCTDEFAULT = 6,
    DESTRUCTWRECK = 7,
    DESTRUCTTREE = 3,
    DESTRUCTTENT = 4,
    STABILIZEDINAXISX = 1,
    STABILIZEDINAXESXYZ = 4,
    STABILIZEDINAXISY = 2,
    STABILIZEDINAXESBOTH = 3,
    DESTRUCTNO = 0,
    STABILIZEDINAXESNONE = 0,
    DESTRUCTMAN = 5,
    DESTRUCTBUILDING = 1,
	};
 
	class CfgPatches {
    class Your_Unique_Mod_Name {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_Common", "A3_Characters_F", "A3_Characters_F_Beta", "A3_Characters_F_BLUFOR"};
    };
	};
 
	class cfgFactionClasses
	{
	class Faction_name_short //Faction Calling Name, this line will be used to define your faction for units
	{
	displayName = "You can write something here"; //Faction name in-game
	icon = "Your\Path\Your_flag.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
	priority = 2; //How far down it is on the menu
	side = 0; // 1 Blufor 2 opfor 3 independant I think.
	};
	};
 
 
	class CfgVehicleClasses
	{
	class Your_Infanrty_name //Name of unit group e.g Air, Infantry, Armour (You see this name in the ingame dropdown menu)
	{
    displayName = "Infantry"; //In-game name
    priority = 2; // How far down it is on the menu
	};
	};
 
class CfgVehicles {
 
    class I_Soldier_base_F; 
    class I_soldier_F; 
	class I_Sniper_F;
	class I_Soldier_AR_F;
	class I_Soldier_M_F;
	class I_Soldier_lite_F;
	class I_Soldier_TL_F;
	class I_crew_F;
	class I_Soldier_A_F;
	class I_Soldier_GL_F;
	class I_medic_F;
	class I_Soldier_LAT_F;
	class I_Soldier_AT_F;
	class I_engineer_F;
	class I_officer_F;
	class I_Soldier_exp_F;
	class I_Soldier_SL_F;
	class I_Soldier_AA_F;
	class I_support_AMort_F;
	class I_support_Mort_F;
	class I_support_AMG_F;
	class I_support_MG_F;
	class I_support_GMG_F;
	class I_Soldier_AAA_F;
	class I_Spotter_F;
	class I_soldier_UAV_F;
	class B_Carryall_oli;
	class FlagCarrier;
 
	class Your_rifleman : I_soldier_F { //You may use anything you want, just make sure it's unique
        _generalMacro = "B_Soldier_F"; //Don't change this line!
        scope = 2; //This means whether you'll be able to see the unit in the dropdown menu or not
		side = 0; //0 Means Opfor
        faction = "Faction_name_short"; //Your Faction
        vehicleclass = "ASTR_Infanrty"; //Unit Group
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody";
        uniformClass = "ASTR_Uniform";
        hiddenSelections[] = {"Camo"};	//You can get rid of this line if you're not creating a new uniform
        hiddenSelectionsTextures[] = {"\Your\Path\ASTR_uniform_v2.paa"};	//You can get rid of this line if you're not creating a new uniform
		genericnames = "AfroMen";	//Right now your soldiers will have African names, you can get rid of this line
		identitytypes[] = {"Head_African"};	//Right now your soldiers will look African, you can get rid of this line
 
        //backpack = "B_Parachute";	//You can use this line to add a backpack to your unit (delete "//" those first)
        linkedItems[] = {"V_TacVest_brn", "ASTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; //Helmets, vests and small items go here
        respawnLinkedItems[] = {"V_TacVest_brn", "ASTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		Weapons[] = {"RH_m16a1","Throw","Put"}; // only add rifle & / pistol classname, leave throw and put they are used for explosives and grenades 
        respawnWeapons[] = {"RH_m16a1","Throw","Put"};  
        Magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};  //Ammo goes here
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
.    };
	//Below you'll see an example config
	class ASTR_supp_AAA_Example_SOHO : I_Soldier_AAA_F {
        _generalMacro = "B_Soldier_F";
        scope = 2;
		side = 0; //Opfor
        faction = "ASTR"; //Your Faction
        vehicleclass = "ASTR_Infanrty_Support"; //Unit Group
        displayName = "Asst. Missile Specialist (AA)";
        nakedUniform = "U_BasicBody";
        uniformClass = "ASTR_Uniform";
		genericnames = "AfroMen";
		identitytypes[] = {"Head_African"};
 
        linkedItems[] = {"V_Chestrig_rgr", "ASTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_Chestrig_rgr", "ASTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		Weapons[] = {"RH_m16a1","Throw","Put"}; // only add rifle & / pistol classname, leave throw and put they are used for explosives and grenades 
        respawnWeapons[] = {"RH_m16a1","Throw","Put"};  
        Magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};  
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    };
	};
	
	class CfgGroups
{
    class East
    {
        class ASTR //Your short faction name goes here again
        {
            name = "African Soho Tato Rebels"; //Full faction name
            class Infantry
            {
                name = "Infantry"; //Group name (Description)
                class ASTR_InfSentry //Group name short
                {
                    name = "Sentry";  // name = "Sentry";
                    side = 0; //0 = Opfor
                    faction = "ASTR";
                    rarityGroup = 0.3; //How often will this group show up?
                    class Unit0 //First unit!
                   {
                        side = 0;
                        vehicle = "ASTR_Grenadier"; // < Unit type (Use short unit name)
                        rank = "CORPORAL"; //Unit rank
                        position[] = {0,0,0};
.                    };
                    class Unit1 //Second unit
                    {
                        side = 0;
                        vehicle = "ASTR_rifleman"; // < Second unit
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
				class ASTR_Sma_Pat_Team //Another example
                {
                    name = "Small Patrol Team";  // name = "Small Patrol Team";
                    side = 0;
                    faction = "ASTR";
                    rarityGroup = 0.5;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "ASTR_Marksman";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "ASTR_rifleman_light";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
					class Unit2
                    {
                        side = 0;
                        vehicle = "ASTR_rifleman_light";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "ASTR_rifleman_light";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                };
			};
        };

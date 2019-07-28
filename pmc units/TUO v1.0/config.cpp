class CfgPatches
02.{
03.    class TEST_UNITS
04.    {
05.        units[] = {};
06.        weapons[] = {};
07.        requiredVersion = 0.1;
08.        requiredAddons[] = {a3_characters_F, a3_characters_f_beta, a3_characters_f_gamma};
09.    };
10.};
11.class cfgFactionClasses
12.{
13. class TEST_FACTION //Faction Calling Name
14. {
15.  displayName = "Test"; //Faction name in-game
16.  icon = "TEST\img.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
17.  priority = 1; //How far down it is on the menu
18.  side = 1; // 1 Blufor 2 opfor 3 independant i think.
19. };
20.};
21.class CfgVehicleClasses
22.{
23. class TEST_Units //Name of unit group e.g Air, Infantry, Armour
24. {
25.    displayName = "Infantry"; //In-game name
26.    priority = 2; // How far down it is on the menu
27. };
28.};
29. 
30.class CfgVehicles
31.{
32.    class B_Soldier_base_F; //Blufor Soldier
33.        
34.    class TEST_Marksman: B_Soldier_base_F //Unit Class name: Class getting info from
35.    {
36.        side = 1; //Blufor
37.        faction = "TEST_FACTION"; //Your Faction
38.        backpack = "TEST_Backpack"; //Backpack
39.        vehicleclass = "TEST_Units"; //Unit Group
40.        author = "Delta 1 Actual"; 
41.        _generalMacro = "TEST_Marksman"; //Class Name
42.        scope = 2;
43.        displayName = "Marksman"; //In-Game Name
44.        weapons[] = {"TEST_GUN","hgun_Pistol_heavy_01_MRD_F","Throw","Put"}; 
45.        respawnWeapons[] = {"TEST_GUN","hgun_Pistol_heavy_01_MRD_F","Throw","Put"}; 
46.        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","HandGrenade"};
47.        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","HandGrenade"};
48.        cost = 300000;
49.        threat[] = {1,0.7,0.3};
50.        linkedItems[] = {"TEST_Vest","TEST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
51.        respawnLinkedItems[] = {"TEST_Vest","TEST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
52.        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d"; //Path to model
53.        uniformClass = "TEST_Uniform"; //uniform you are using
54.        camouflage = 1.6;
55.        hiddenSelections[] = {"camo"};
56.        HiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"};    //Uniform textures
57.    };
58.    
59.};

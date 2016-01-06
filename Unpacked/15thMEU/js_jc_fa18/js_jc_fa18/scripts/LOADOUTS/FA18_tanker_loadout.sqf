//dynamic loadout selection/rearming script for FA18 E/F
//created by John_Spartan
//to execute use followning examples for various weapon presets, call this script via unit init line in editor or via instance of mission script
//
//fa18loadoutscript = [this,_station_1,_station_2,_station_3,_station_4,_station_5,_station_6,_station_7,_station_8,_station_9,_station_10,_station_11,_station_12,_station_13,_station_14,_station_15,_station_16,_station_17,_station_18,_station_19] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//MR:  fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//CAS; fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1","js_m_fa18_wing_tank_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//CAP: fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//F TANKER: fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_wing_tank_x1","js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_altflir_pod_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_buddypod_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";


sleep 0.5;
_FA18 = _this;		//name of the unit we are playing with

_FA18 animate ["rearming_done_switch",0];
_FA18 selectWeapon "js_w_master_arms_safe";
	
//remove any default loadout weapons and magazines first
_fa18 removeWeapon "js_w_fa18_aim9xLaucher"; 
_fa18 removeWeapon "js_w_fa18_aim120cLaucher"; 
_fa18 removeWeapon "js_w_fa18_GBU12LGBLaucher";
_fa18 removeWeapon "js_w_fa18_Mk82BombLauncher";  
_fa18 removeWeapon "js_w_fa18_MaverickLauncher"; 
_fa18 removeWeapon "js_w_fa18_fueltank_holder"; 
_fa18 removeWeapon "js_w_fa18_HarpoonLauncher";
_fa18 removeWeapon "js_w_fa18_GBU31BombLauncher";
_fa18 removeWeapon "js_w_fa18_GBU32BombLauncher";
_fa18 removeWeapon "js_w_fa18_GBU38BombLauncher";
_fa18 removeWeapon "Laserdesignator_mounted";


_fa18 removeMagazines "js_m_fa18_aim9x_x1";
_fa18 removeMagazines "js_m_fa18_aim120c_x1"; 
_fa18 removeMagazines "js_m_fa18_bombrack_x1";
_fa18 removeMagazines "js_m_fa18_GBU12_x1";
_fa18 removeMagazines "js_m_fa18_MK82_x1";
_fa18 removeMagazines "js_m_fa18_GBU38_JDAM_x1";
_fa18 removeMagazines "js_m_fa18_GBU32_JDAM_x1"; 
_fa18 removeMagazines "js_m_fa18_GBU31_JDAM_x1";
_fa18 removeMagazines "js_m_fa18_Maverick_x1";   
_fa18 removeMagazines "js_m_fa18_Harpoon_x1";
_fa18 removeMagazines "js_m_fa18_wing_tank_x1";
_fa18 removeMagazines "js_m_fa18_altflir_pod_x1";  
_fa18 removeMagazines "js_m_fa18_empty"; 
_fa18 removeMagazines "js_m_fa18_fake_empty";
_fa18 removeMagazines "js_m_fa18_buddypod_x1";
_fa18 removeMagazines "Laserbatteries";

//add new weapons and magazines
_FA18 addMagazine "js_m_fa18_aim9x_x1";
_FA18 addMagazine "js_m_fa18_aim9x_x1";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_wing_tank_x1";
_FA18 addMagazine "js_m_fa18_wing_tank_x1";
_FA18 addMagazine "js_m_fa18_wing_tank_x1";
_FA18 addMagazine "js_m_fa18_wing_tank_x1";
_FA18 addMagazine "js_m_fa18_aim120c_x1";
_FA18 addMagazine "js_m_fa18_altflir_pod_x1";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_empty";
_FA18 addMagazine "js_m_fa18_buddypod_x1";

_FA18 animate ["auxtank_switch",1];
_FA18 animate ["rearming_done_switch",1];

Exit;
//dynamic loadout selection/rearming script for FA18 E/F
//created by John_Spartan
//to execute use followning examples for various weapon presets, call this script via unit init line in editor or via instance of mission script
//
//fa18loadoutscript = [this,_station_1,_station_2,_station_3,_station_4,_station_5,_station_6,_station_7,_station_8,_station_9,_station_10,_station_11,_station_12,_station_13,_station_14,_station_15,_station_16,_station_17,_station_18,_station_19] execvm "js_jc_fa18\scripts\LOADOUTS\FA18_instant_loadouts.sqf";
//MR:  fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//CAS; fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1","js_m_fa18_wing_tank_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//CAP: fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";
//F TANKER: fa18_dynamic_loadoutscript = [_FA18, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_wing_tank_x1","js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_altflir_pod_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_buddypod_x1"] execvm "js_fa18\scripts\FA18_dynamic_loadouts.sqf";

_FA18 = _this select 0;		//name of the unit we are playing with
	

_FA18 selectWeapon "js_w_master_arms_safe";
_FA18 animate ["rearming_done_switch",0];
	
_station_1 = _this select 1;
_station_2 = _this select 2;
_station_3 = _this select 3;
_station_4 = _this select 4;
_station_5 = _this select 5;
_station_6 = _this select 6;
_station_7 = _this select 7;
_station_8 = _this select 8;
_station_9 = _this select 9;
_station_10 = _this select 10;
_station_11 = _this select 11;
_station_12 = _this select 12;
_station_13 = _this select 13;
_station_14 = _this select 14;
_station_15 = _this select 15;
_station_16 = _this select 16;
_station_17 = _this select 17;
_station_18 = _this select 18;
_station_19 = _this select 19;

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

//add new magazines first and in right sequence so the proxies are loaded properly for specified loadout


_FA18 addMagazine _station_1;
_FA18 addMagazine _station_2;
_FA18 addMagazine _station_3;
_FA18 addMagazine _station_4;
_FA18 addMagazine _station_5;
_FA18 addMagazine _station_6;
_FA18 addMagazine _station_7;
_FA18 addMagazine _station_8;
_FA18 addMagazine _station_9;
_FA18 addMagazine _station_10;
_FA18 addMagazine _station_11;
_FA18 addMagazine _station_12;
_FA18 addMagazine _station_13;
_FA18 addMagazine _station_14;
_FA18 addMagazine _station_15;
_FA18 addMagazine _station_16;
_FA18 addMagazine _station_17;
_FA18 addMagazine _station_18;
_FA18 addMagazine _station_19;

//add new weapons depending on selected loadout
_loadout = magazines _FA18;
sleep 0.5;
if (("js_m_fa18_aim9x_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_aim9xLaucher";};
if (("js_m_fa18_aim120c_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_aim120cLaucher";};
if (("js_m_fa18_GBU12_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_GBU12LGBLaucher";};
if (("js_m_fa18_MK82_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_Mk82BombLauncher";};
if (("js_m_fa18_GBU38_JDAM_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_GBU38BombLauncher";};
if (("js_m_fa18_GBU32_JDAM_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_GBU32BombLauncher";};
if (("js_m_fa18_GBU31_JDAM_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_GBU31BombLauncher";};
if (("js_m_fa18_Maverick_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_MaverickLauncher";};
if (("js_m_fa18_Harpoon_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_HarpoonLauncher";};
if (("js_m_fa18_wing_tank_x1" in _loadout)) then {_FA18 addWeapon "js_w_fa18_fueltank_holder";};
if (("js_m_fa18_altflir_pod_x1" in _loadout)) then {_FA18 addWeapon "Laserdesignator_mounted"; _FA18 addMagazine "Laserbatteries"};

_FA18 setVehicleAmmo 1;
_Fuel_tank_count = {_x == "js_m_fa18_wing_tank_x1"} count magazines _FA18;

If (_Fuel_tank_count < 1) Then 
{	
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	_FA18 animate ["auxtank_switch",0];
};

If (_Fuel_tank_count == 1) Then 
{	
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.2)) Then 
	{
		_FA18 animate ["auxtank_switch",(_External_fuel + (0.2 - _External_fuel))];
	};
	If ((_External_fuel > 0.2)) Then 
	{
		_FA18 animate ["auxtank_switch",0.2];
	};
};

If (_Fuel_tank_count == 2) Then 
{	
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.4)) Then 
	{
		_FA18 animate ["auxtank_switch",(_External_fuel + (0.4 - _External_fuel))];
	};
	If ((_External_fuel > 0.4)) Then 
	{
		_FA18 animate ["auxtank_switch",0.4];
	};
};

If (_Fuel_tank_count == 3) Then 
{	
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.6)) Then 
	{
		_FA18 animate ["auxtank_switch",(_External_fuel + (0.6 - _External_fuel))];
	};
	If ((_External_fuel > 0.6)) Then 
	{
		_FA18 animate ["auxtank_switch",0.6];
	};
};

If (_Fuel_tank_count == 4) Then 
{	
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.8)) Then 
	{
		_FA18 animate ["auxtank_switch",(_External_fuel + (0.8 - _External_fuel))];
	};
	If ((_External_fuel > 0.8)) Then 
	{
		_FA18 animate ["auxtank_switch",0.8];
	};
};

If (_Fuel_tank_count == 5) Then 
{	
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	If ((_External_fuel < 0.99)) Then 
	{
		_FA18 animate ["auxtank_switch",(_External_fuel + (1.0 - _External_fuel))];
	};
	If ((_External_fuel >= 1.0)) Then 
	{
		_FA18 animate ["auxtank_switch",1.0];
	};
};

sleep 0.05;
_External_fuel = _FA18 animationPhase "auxtank_switch";

If (("js_m_fa18_buddypod_x1" in _loadout)) Then 
{	
	
	If (_Fuel_tank_count > 1) Then 
	{	
		_FA18 animate ["auxtank_switch",(_External_fuel + 0.2)];
	};
	If (_Fuel_tank_count < 1) Then 
	{	
		_FA18 animate ["auxtank_switch",0.2];
	};

};


_FA18 selectWeapon "js_w_master_arms_safe";
_FA18 animate ["rearming_done_switch",1];
Exit;
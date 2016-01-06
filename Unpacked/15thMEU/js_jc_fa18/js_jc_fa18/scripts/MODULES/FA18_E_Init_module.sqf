private ["_logic", "_units", "_activated", "_Paintscheme_init", "_Weapon_station_1", "_Weapon_station_2", "_Weapon_station_3", "_Weapon_station_4", "_Weapon_station_5", "_Weapon_station_6", "_Weapon_station_7", "_Weapon_station_8", "_Weapon_station_9", "_Weapon_station_10", "_Weapon_station_11", "_Weapon_station_12", "_Weapon_station_13", "_Weapon_station_14", "_Weapon_station_15", "_Weapon_station_16", "_Weapon_station_17", "_Weapon_station_18", "_Weapon_station_19", "_Wings_Fold_status"];

_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_units = [_this,1,[],[[]]] call BIS_fnc_param;
_activated = [_this,2,true,[true]] call BIS_fnc_param;
_Paintscheme_init = _logic getVariable "Paintscheme_init";

_Weapon_station_1 = _logic getVariable "Weapon_station_1_init";

_Weapon_station_2 = _logic getVariable "Weapon_station_2_init";

_Weapon_station_3 = _logic getVariable "Weapon_station_3_init";

_Weapon_station_4 = _logic getVariable "Weapon_station_4_init";

_Weapon_station_5 = _logic getVariable "Weapon_station_5_init";

_Weapon_station_6 = _logic getVariable "Weapon_station_6_init";

_Weapon_station_7 = _logic getVariable "Weapon_station_7_init";

_Weapon_station_8 = _logic getVariable "Weapon_station_8_init";

_Weapon_station_9 = _logic getVariable "Weapon_station_9_init";

_Weapon_station_10 = _logic getVariable "Weapon_station_10_init";

_Weapon_station_11 = _logic getVariable "Weapon_station_11_init";

_Weapon_station_12 = _logic getVariable "Weapon_station_12_init";

_Weapon_station_13 = _logic getVariable "Weapon_station_13_init";

_Weapon_station_14 = _logic getVariable "Weapon_station_14_init";
_Weapon_station_15 = _logic getVariable "Weapon_station_15_init";

_Weapon_station_16 = _logic getVariable "Weapon_station_16_init";
_Weapon_station_17 = _logic getVariable "Weapon_station_17_init";

_Weapon_station_18 = _logic getVariable "Weapon_station_18_init";
_Weapon_station_19 = _logic getVariable "Weapon_station_19_init";

_Wings_Fold_status = _logic getVariable "Wings_Fold_status_init";



if (_activated) then 
{
	{[_x,_Paintscheme_init,_Weapon_station_1,_Weapon_station_2,_Weapon_station_3,_Weapon_station_4,_Weapon_station_5,_Weapon_station_6,_Weapon_station_7,_Weapon_station_8,_Weapon_station_9,_Weapon_station_10,_Weapon_station_11,_Weapon_station_12,_Weapon_station_13,_Weapon_station_14,_Weapon_station_15,_Weapon_station_16,_Weapon_station_17,_Weapon_station_18,_Weapon_station_19,_Wings_Fold_status] Spawn JS_JC_fnc_FA18E_Exec_module;} foreach _units;	 
};

true


/* 
fn_vehicleLoadout
fight9
version 2

params:
_this select 0: vehicle or array of vehicles
_this select 1: Array of classnames or array of sub-arrays with classname and count
_this select 2: bool: true to clear cargo, false to keep
_this select 3: bool: true to show notification, false to not

*/

// params
params [
	["_unit",objNull,[objNull,[]]],
	["_gear",[],[[],""]],
	["_clear",false,[false]],
	["_note",false,[false]]
];

// if unit is array, self call for each
if (typeName _unit == typeName []) exitWith {
	{
		private "_run";
		_run = [_x,_gear,_clear,_note] spawn meu_fnc_vehicleLoadout;
	} forEach _unit;
	true
};

// if man unit, get vehicle instead
if (_unit isKindOf "Man") then {_unit = vehicle _unit;};

// if not a vehicle, exit
if !(_unit in vehicles) exitWith {
	["Unit is not a vehicle: %1",_unit] call BIS_fnc_logFormat;
	false
};

// if clearing
if _clear then {
	clearItemCargoGlobal _unit;
	clearMagazineCargoGlobal _unit;
	clearBackpackCargoGlobal _unit;
	clearWeaponCargoGlobal _unit;	
};

// add gear based on type
{
	_x params [
		["_item","",[""]],
		["_count",1,[0]]
	];	
	if (_item != "") then {
		private ["_group","_class","_type"];
		_type = _item call BIS_fnc_itemType; // returns ["group","class"]
		_group = toLower (_type select 0);
		_class = toLower (_type select 1);
		if (_group == "weapon") exitWith { _unit addWeaponCargoGlobal [_item,_count]; }; 
		if (_group in ["magazine","mine"]) exitWith { _unit addMagazineCargoGlobal [_item,_count]; }; 
		if (_group in ["equipment","item"]) exitWith {
			if (_class == "backpack") exitWith { _unit addBackpackCargoGlobal [_item,_count]; };
			_unit addItemCargoGlobal [_item,_count];
		};
	};
} forEach _gear;


if _note then {
	private ["_startText","_cfgVeh","_picture","_name","_text"];
	
	// get text based on usage
	_startText = call {
		if (count _gear > 0) exitWith {"New Gear Added To"};
		if (_clear) exitWith {"Cargo Cleared From"};
		if true exitWith {""};
	};
	
	// get data for notification
	if (_startText != "") then {
		_cfgVeh = configFile >> "cfgVehicles" >> (typeOf _unit);	
		_picture = (getText (_cfgVeh >> "picture")) call bis_fnc_textureVehicleIcon;
		_name = getText (_cfgVeh >> "displayName");
		_text = _startText + " " + _name;
		["meu_vicCrates",[_picture,_text]] call bis_fnc_showNotification;
	};
};

true

// Init.sqf - for USS Nimitz by JDog
//Spawns Nimitz and initializes other scripted systems
// Modified by TeTeT

private ["_Nim", "_NimDir", "_Nimpoint", "_parts", "_carrier", "_part",
	 "_nimspots", "_engine"];

//Exit now if client
if (!isServer) exitWith {};

_Nim = _this select 0;
_NimDir = getDir _Nim;
_Nim setPos [getPos _Nim select 0, getPos _Nim select 1, 0];
_Nimpoint = [getPos _Nim select 0, getPos _Nim select 1, 0];

// useful for debugging
_Nim setVariable ["test", format ["This is a Nimitz class carrier named %1", vehicleVarName _Nim] , true];

//Assemble carrier
_parts =
[
	"JDG_carrier_nimspots",
	"JDG_carrier_nimlights",
    "JDG_carrier_island",
	"JDG_carrier_deck_0",
	"JDG_carrier_deck_1",
	"JDG_carrier_deck_2",
	"JDG_carrier_deck_3",
	"JDG_carrier_deck_4",
	"JDG_carrier_deck_5",
	"JDG_carrier_deck_6",
	"JDG_carrier_deck_7",
	"JDG_carrier_deck_8",
	"JDG_carrier_deck_9",
	"JDG_carrier_deck_10",
	"JDG_carrier_deck_11",
	"JDG_carrier_deck_12",
	"JDG_carrier_deck_13",
	"JDG_carrier_deck_14",
	"JDG_carrier_ele_1",
	"JDG_carrier_ele_2",
	"JDG_carrier_ele_3",
	"JDG_carrier_ele_4",
	"JDG_carrier_hangar_0",
	"JDG_carrier_hangar_1",
	"JDG_carrier_hangar_2",
	"JDG_carrier_hangar_3",
	"JDG_carrier_hangar_4"
];

{
   _carrier = _x createVehicle _Nimpoint;
   // tie the part to the carrier spawner
   _Nim setVariable [_x, _carrier, true];
   _carrier setDir _NimDir;
   _carrier setPos _Nimpoint;
   _carrier allowDamage false;
} foreach _parts;

// Compatibility with old Nimitz functions
// nimHang4 is used in a lot of scripts and means that the carrier has been assembled
// nimCar2, nimCar3, nimCar4 are the locations of the JBD
_carrier = _Nim getVariable "JDG_carrier_hangar_4";
_Nim setVariable ["nimHang4", _carrier, true];
_carrier = _Nim getVariable "JDG_carrier_deck_4";
_Nim setVariable ["nimCar3", _carrier, true];
_carrier = _Nim getVariable "JDG_carrier_deck_10";
_Nim setVariable ["nimCar4", _carrier, true];
// aliases
_Nim setVariable ["fuelspot", _Nim getVariable "JDG_carrier_deck_7", true];
_Nim setVariable ["nimspots", _Nim getVariable "JDG_carrier_nimspots", true];


// wires usage
_Nim setVariable ["nimCableReady", 1, true];

_nimspots = _Nim getVariable "nimspots";
_pos = getPos _nimspots;
_jdgNimArrestor = "Land_HelipadEmpty_F" createVehicle _pos;
_jdgNimArrestor setPosASL (_nimspots modeltoworld (_nimspots selectionposition "WireCenter"));
_jdgNimArrestor setPosASL [getPos _jdgNimArrestor select 0, getPos _jdgNimArrestor select 1, 18];
_Nim setVariable ["jdgNimArrestor", _jdgNimArrestor, true];

// Backward compatibility for F/A-18 tailhook script
_carrier = "JDG_carrier_4" createVehicle (_nimspots modeltoworld (_nimspots selectionPosition "WireCenter"));
_carrier setPosASL [getPos _carrier select 0, getPos _carrier select 1, 18];

// steam effects
_Nim setVariable ["JDG_steamFX", 0, true];
_Nim setVariable ["JDG_steamFXShot", 0, true];

// add a vehicle for engine sounds, currenly a car
_engine = "JDG_Carrier_soundVeh" createVehicle _Nimpoint;
_engine setPosASL [_Nimpoint select 0, _Nimpoint select 1, 8];
_engine attachTo [_Nim];
_engine allowDamage false;
_Nim setVariable ["engine", _engine, true];


// evil global useful for scripting
if (isNil "TTT_NimitzCarriers") then {
  TTT_NimitzCarriers = [ _Nim ];
} else {
  TTT_NimitzCarriers = TTT_NimitzCarriers + [ _Nim ];
};
publicVariable "TTT_NimitzCarriers";

// enable the cat 4 all function and hook 4 all function
// a bit racy with multiple carriers ...
if (isNil "TTT_builtin") then {
	TTT_builtin = true;
};
publicVariable "TTT_builtin";
[] spawn {
    while {TTT_builtin} do {
	  	sleep 5;
	  	// not convinced of the use of this call and it's efficiency
	  	private ["_planes"];
	  	_planes = [];
	  	{
	  		_planes = _planes + (nearestObjects [ _x, ["Plane"], 2000]);
	    } forEach TTT_NimitzCarriers;
	    {
		  	private ["_catHook", "_plane"];
		  	_plane = _x;
		  	_catHook = _plane getVariable "TTT_catHook";
		  	if (isNil "_catHook") then {
			  	[_plane] spawn TTT_fnc_syncCatapult;
			  	[_plane] spawn TTT_fnc_syncTailhook;
			  	_plane setVariable ["TTT_catHook", true, true];
			};
		} forEach _planes;
    };
};

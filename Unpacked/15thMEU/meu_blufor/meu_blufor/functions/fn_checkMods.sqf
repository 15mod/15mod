// fn_checkMods
// depreciated - now a module
// fight9

params [
	["_mode","warn",[""]],
	["_toCheck",[],[[]]],
	["_toBlack",[],[[]]]
];

diag_log parseText ("[MEU] WARNING: meu_fnc_checkMods is depreciated - use the module instead." call BIS_fnc_error);

_logic = "logic" createVehicleLocal [0,0,0];
_logic setVariable ["meu_fnc_moduleCheckMods_main",_mode];

if (count _toCheck > 0) then {
	_logic setVariable ["meu_fnc_moduleCheckMods_ckMode","replace"];
	_logic setVariable ["meu_fnc_moduleCheckMods_check",str _toCheck];
};
if (count _toBlack > 0) then {
	_logic setVariable ["meu_fnc_moduleCheckMods_blMode","replace"];
	_logic setVariable ["meu_fnc_moduleCheckMods_black",str _toBlack];
};

_logic spawn meu_fnc_moduleCheckMods;

true 
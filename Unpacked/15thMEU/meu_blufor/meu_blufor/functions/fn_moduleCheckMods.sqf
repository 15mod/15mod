/* fn_moduleCheckMods
* fight9
*
*
* better module version of fn_checkMods
*
* REQUIRES TESTING
*/

#define DEFAULT_MODS_CHECK 	["cba_main","task_force_radio","meu_blufor","meu_opfor","meu_ammoBoxes","ace_main"]
#define DEFAULT_MODS_NAMES 	["CBA","TFAR","15thMEU","15thOPFOR","15thAMMO","ACE"]
#define DEFAULT_BLACKLIST	["mcc_sandbox","Blastcore_VEP","TracersWAR","MRF_Rangefinder","JSRS2LITE_4Five45","JSRS2_4Five45","DragonFyre_4Five45","DragonFyre_LITE_4Five45","speedofsound_pure_4five"]

// params & option variables
params ["_logic","_units","_activated"];
private ["_mode","_checkAdj","_ckMode","_blackAdj","_blMode","_return"];
_mode = _logic getVariable ["meu_fnc_moduleCheckMods_main","warn"];
//_checkAdj = call compile (_logic getVariable ["meu_fnc_moduleCheckMods_check","[]"]); // to remove
_checkAdj = _logic getVariable ["meu_fnc_moduleCheckMods_check","[]"];
_ckMode = _logic getVariable ["meu_fnc_moduleCheckMods_ckMode","none"];
//_blackAdj = call compile (_logic getVariable ["meu_fnc_moduleCheckMods_black","[]"]); // to remove
_blackAdj = _logic getVariable ["meu_fnc_moduleCheckMods_black","[]"];
_blMode = _logic getVariable ["meu_fnc_moduleCheckMods_blMode","none"];
_return = true;

// checks - to remove
/* if (isNil "_checkAdj" || {typeName _checkAdj != "ARRAY"}) then {_m = "[MEU] CheckMods: Mods to check is not an array. Defaults used instead." call BIS_fnc_error; _checkAdj = []; _ckMode = "none";};
if (isNil "_blackAdj" || {typeName _blackAdj != "ARRAY"}) then {_m = "[MEU] CheckMods: Mods to blacklist is not an array. Defaults used instead." call BIS_fnc_error; _blackAdj = []; _blMode = "none";};
 */ 
// format arrays of classes to check
private ["_toCheck","_toBlack"];
_toCheck = [];
_toBlack = [];
{
	_x params ["_array","_mode","_default","_mods"];
	if (_mode != "none") then {
		if (_mods find "[" == 0 && {_mods find "]" == count _mods - 1}) then {
			_mods = call compile _mods;
		} else {
			diag_log parseText (["[MEU] CheckMods: Mods to adjust %1 is not a correct array type. Defaults used instead.",(["CHECKLIST","BLACKLIST"] select _forEachIndex)] call BIS_fnc_error);
			_mods = []; _mode = "none";
		};
	};
	switch _mode do {
		case "replace": {_array append _mods;};
		case "add": {_array append _default;_array append _mods;};
		case "remove": {_array append _default - _mods;};
		default {_array append _default;};
	};
} forEach [
	[_toCheck,_ckMode,DEFAULT_MODS_CHECK,_checkAdj],
	[_toBlack,_blMode,DEFAULT_BLACKLIST,_blackAdj]
]; 

// create array of version numbers
#define CFG_CLASS (configFile >> "CfgPatches" >> _current)

private "_versions";
_versions = [];
{
	_x params [["_current","bad",[""]]];
	_versions pushBack call {
		if (_current isEqualTo "bad") exitWith {
			diag_log parseText (['[MEU] CheckMods: "%1" - type %2, Must be a STRING ("").',_x,typeName _x] call BIS_fnc_error); 
			"Bad Format"
		};
		if !(isClass CFG_CLASS) exitWith {"Not Found"};
		if (getText (CFG_CLASS >> "version") != "") exitWith {getText (CFG_CLASS >> "version")};
		if (getText (CFG_CLASS >> "requiredVersion") != "") exitWith {getText (CFG_CLASS >> "requiredVersion")};
		"No Version"
	};
} forEach _toCheck;

if isServer then {
	// braodcast to clients
	_logic setVariable ["meu_fnc_moduleCheckMods_data",_versions,true];
	
} else {
	// wait for server data
	private ["_server","_errors","_bad","_errorNames"];
	waitUntil { !isNil {_logic getVariable "meu_fnc_moduleCheckMods_data"} };
	_server = _logic getVariable "meu_fnc_moduleCheckMods_data";
		
	// cross check data
	_errorNames = [];
	_errors = [];
	for "_i" from 0 to (count _toCheck - 1) do {
		if (_server select _i != _versions select _i) then {
			_errors pushBack [
				_toCheck select _i,
				_versions select _i,
				_server select _i
			];
			_errorNames pushBack (_toCheck select _i);
		};
	};
	
	// check for blacklisted mods
	_bad = [];
	{
		_x params [["_current","bad",[""]]];
		if (_current isEqualTo "bad") then {
			diag_log parseText (['[MEU] CheckMods: "%1" - type %2, Must be a STRING ("").',_x,typeName _x] call BIS_fnc_error);
		};
		if (isClass CFG_CLASS) then {
			_bad pushBack _current;
		};
	} forEach _toBlack;
	_errorNames append _bad;
	
	// process any errors
	if (count _errorNames > 0) then {
		// punish that little jerk
		if (_mode in ["warn","kick"]) then {
			waitUntil { !isNull (findDisplay 46) };
			
			// create array of strings - mismatched
			private "_textArray";
			_textArray = [];
			{
				_x params ["_class","_local","_server"];
				_name = if (DEFAULT_MODS_CHECK find _class > -1) then [
					{DEFAULT_MODS_NAMES select (DEFAULT_MODS_CHECK find _class)},
					{_class}
				];
				_textArray pushBack (parseText format [
					"<t size='1'>%1 | Server: %2 | You: %3</t>",
					_name,
					_server,
					_local
				]);
			} forEach _errors;
			
			// - blacklisted
			if (count _bad > 0) then {
				_textArray pushBack (parseText format ["<t size='1'>Blacklisted Mods: %1</t>",_bad joinString " | "]);
			};
					
			// warning
			private "_warning";
			_warning = [
				"You have been warned - fix your mods!",
				"You will be kicked - fix your mods before returning!"
			] select (_mode isEqualTo "kick");
			_textArray pushBack (parseText format ["<t size='1' color='#ff0000'>%1</t>",_warning]);
			
			// show cadet hint
			"WARNING! Mod Version Mismatch!" hintC _textArray;
			
			// if kicking, add DEH
			if (_mode isEqualTo "kick") then {
				meu_fnc_moduleCheckMods_kickEH = findDisplay 72 displayAddEventHandler ["unload",{
					findDisplay 72 displayRemoveEventHandler ["unload",meu_fnc_moduleCheckMods_kickEH];
					["LOSER",false,false] call BIS_fnc_endMission;
				}];
			};
		};
		
		// report to server/local RPT
		private "_rpt";
		_rpt = format ["[MEU] VERSION MISMATCH | %1 | [%2]", profileName, _errorNames joinString ", "];
		_null = (parseText _rpt) remoteExec ["diag_log",2,false];
		diag_log parseText _rpt;
		
		_return = false;
	} else {
		// Alls good
		diag_log parseText "[MEU] CheckMods: All Mod Versions Consistant With Server And Approved.";
	};
};

_return

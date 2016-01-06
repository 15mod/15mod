#include "constants.hpp"

private [
	"_stgName",
	"_actualValue",
	"_stgConfig",
	"_settings",
	"_stgText",
	"_cfgSettings"
];

smgrToolbarAction_0 = { ["MainMenu"] call smgr_fnc_displayPage; };
smgrToolbarAction_1 = {};
smgrToolbarAction_2 = {};
smgrToolbarAction_3 = { ["EditSetting"] call smgr_fnc_displayPage; };

_settings = [];

_cfgSettings = SMGR_CONFIG >> "CfgSettings";
for "_i" from 0 to ((count _cfgSettings)-1) do
{
	_stgConfig = _cfgSettings select _i;

	_stgName = configName _stgConfig;
	_stgText = getText(_stgConfig >> "text");

	_actualValue = GETVAR( getText(_stgConfig >> "variable") );

	[ _settings, [_stgName,_stgText,_actualValue] ] call bis_fnc_arrayPush;
};

["Settings", _settings] call smgr_fnc_updateView;
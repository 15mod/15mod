#include "constants.hpp"

if(isDedicated) exitWith {};

// Register HUD layer
SmgrRscLayer = "SmgrRscLayer" call BIS_fnc_rscLayer;

// define map grid settings
[] call smgr_fnc_setMapGridParameters;

// keyboard input handling
[] spawn
{
	waitUntil {!isNull player && player == player};
	waitUntil{!isNil "BIS_fnc_init"};
	waitUntil {!(isNull (findDisplay 46))};

	smgrKeyOpenDlg = getText (configFile >> "CfgSettings" >> "KeySMGR" >> "SMGR_Key_Settings" >> "keyOpenDlg" >> "actionKey");
	smgrKeyOpenHud = getText (configFile >> "CfgSettings" >> "KeySMGR" >> "SMGR_Key_Settings" >> "keyOpenHud" >> "actionKey");

	SETVAR("smgrDlgOpened",false);
	SETVAR("smgrHudOpened",false);

	(findDisplay 46) displayAddEventHandler ["KeyDown","_this call smgr_fnc_keyPressed"];
};
class Background : RscSmgrPicture
{
	idc = SMGR_IDC_BACKGROUND;
	moving = 1;
	x = 0
	y = 0;
	w = SMGR_W;
	h = SMGR_H;
	text = SMGR_BACKGROUND;
};

class PowerButton : RscSmgrShortcutButton 
{
	idc = SMGR_IDC_POWER;
	text = ""; //--- ToDo: Localize;
	x = 0.75*SMGR_W;
	y = 0.075*SMGR_H;
	w = 0.008 * safezoneW;
	h = 0.01 * safezoneH;
	tooltip = "Power";
	action = "[] spawn smgr_fnc_powerOnOff";
};

class BatteryButton : RscSmgrShortcutButton 
{
	idc = SMGR_IDC_F1;
	text = ""; //--- ToDo: Localize;
	x = 0.18*SMGR_W;
	y = 0.075*SMGR_H;
	w = 0.008 * safezoneW;
	h = 0.01 * safezoneH;
	tooltip = "Replace batteries";
	action = "[] spawn smgr_fnc_replaceBattery";
};

class MarkButton : RscSmgrShortcutButton 
{
	idc = SMGR_IDC_F3;
	text = "b"; //--- ToDo: Localize;
	x = 0.78*SMGR_W;
	y = 0.625*SMGR_H;
	w = 0.008 * safezoneW;
	h = 0.01 * safezoneH;
	tooltip = "Mark";
	action = "[] spawn smgr_fnc_mark";
};

class AutoCycleButton : RscSmgrShortcutButton 
{
	idc = SMGR_IDC_F4;
	text = ""; //--- ToDo: Localize;
	x = 0.685*SMGR_W;
	y = 0.625*SMGR_H;
	w = 0.008 * safezoneW;
	h = 0.01 * safezoneH;
	tooltip = "AutoCycle WP";
	action = "[] spawn smgr_fnc_switchAutoCycle";
};

#include "RscSmgrToolbar.hpp"
#include "RscSmgrInfobar.hpp"

#include "RscSmgrBootScreen.hpp"
#include "RscSmgrMainMenu.hpp"
#include "RscSmgrNavigation.hpp"
#include "RscSmgrWpList.hpp"
#include "RscSmgrEditWp.hpp"
#include "RscSmgrSettings.hpp"
#include "RscSmgrEditSetting.hpp"
#include "RscSmgrDatalink.hpp"
#include "RscSmgrP2Plink.hpp"
#include "RscSmgrLDlink.hpp"
#include "RscSmgrStatus.hpp"

#include "RscSmgrPopup.hpp"
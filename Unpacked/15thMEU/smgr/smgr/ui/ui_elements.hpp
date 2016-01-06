// BASE CONTROLS

class RscSmgrPicture : RscPicture{};
class RscSmgrControlsGroup : RscControlsGroup {};
class RscSmgrButton : RscButton {};
class RscSmgrShortcutButton : RscShortcutButton {
	shadow = 0;
	colorBackground[] = COLOR_TRANSPARENT;
	colorBackground2[] = COLOR_TRANSPARENT;
	colorBackgroundFocused[] = COLOR_TRANSPARENT;
	animTextureDefault = "";
	animTextureNormal = "";
	animTextureDisabled = "";
	animTextureOver = "";
	animTextureFocused = "";
	animTexturePressed = "";
};
class RscSmgrCombo : RscCombo {
	sizeEx = SMGR_FONT_SIZE;
	wholeHeight = 5*SMGR_LINE_H;
};
class RscSmgrEdit : RscEdit {
	style = "0x00 + 0x40 + 0x200";
	font = SMGR_FONT_FAMILY;
	shadow = SMGR_FONT_SHADOW;
	size = SMGR_LINE_H;
	sizeEx = SMGR_FONT_SIZE;
	colorBackground[] = COLOR_HALFWHITE; 
	colorText[] = COLOR_YELLOW;
	colorSelection[] = COLOR_BLACK;
};
class RscSmgrText : RscStructuredText {
	size = SMGR_FONT_SIZE;
	class Attributes
	{
		font = SMGR_FONT_FAMILY;
		color = SMGR_FONT_COLOR_HEX;
		shadow = SMGR_FONT_SHADOW;
		align = SMGR_FONT_ALIGN;
	};
};
class RscSmgrList : RscListBox {
	x = 0.02*SMGR_PAGE_W;
	y = 0.10*SMGR_PAGE_H;
	w = 0.96*SMGR_PAGE_W;
	h = 0.89*SMGR_PAGE_H;
	colorText[] = SMGR_FONT_COLOR_RGB;
	colorSelect[] = SMGR_FONT_SELECTED_COLOR_RGB;
	colorSelect2[] = SMGR_FONT_SELECTED_COLOR_RGB;
	font = SMGR_FONT_FAMILY;
	shadow = SMGR_FONT_SHADOW;
	colorBackground[] = SMGR_LIST_BACKGROUND_RGB;
	colorSelectBackground[] = {1,1,1,0.2};
	colorSelectBackground2[] =  {1,1,1,0.2};
	period = SMGR_LIST_PERIOD;
	rowHeight = SMGR_LINE_H;
	sizeEx = SMGR_FONT_SIZE;
};

class RscSmgrListN : RscSmgrList {
	type = 102;
	columns[] = {};
	drawSideArrows = 0;
  	idcLeft = -1; 
  	idcRight = -1;
};

// CUSTOM CONTROLS


class RscSmgrTitle : RscSmgrText {
	size = 0.5*SMGR_LINE_H;
};

class RscSmgrMenuList : RscSmgrList {
	style = "0x02 + 0x200";
};

class RscSmgrBackgroundPicture : RscPicture 
{
	x = SMGR_X;
	y = SMGR_Y;
	w = SMGR_W;
	h = SMGR_H;
	moving = 1;
	text = "#(argb,8,8,3)color(0.3,0.3,0.3,1)";
};

class RscSmgrScreen : RscSmgrControlsGroup
{
	x = SMGR_SCREEN_X;
	y = SMGR_SCREEN_Y;
	w = SMGR_SCREEN_W;
	h = SMGR_SCREEN_H;
};

class RscSmgrPage : RscSmgrControlsGroup
{
	x = SMGR_PAGE_X;
	y = SMGR_PAGE_Y;
	w = SMGR_PAGE_W;
	h = SMGR_PAGE_H;
};
class RscSmgrPageFrame : RscSmgrTitle {
	x = 0; y = 0;
	w = 0.99*SMGR_PAGE_W;
	h = 0.15*SMGR_PAGE_H;
};
class RscSmgrToolbarButton : RscButton
{
	x = 0;
	y = 0;
	w = 0.25*SMGR_TOOLBAR_W;
	h = SMGR_TOOLBAR_H;
	colorBackground[] = COLOR_TRANSPARENT;
	colorBackgroundActive[] = COLOR_TRANSPARENT;
	colorFocused[] = COLOR_TRANSPARENT;
	colorShadow[] = COLOR_TRANSPARENT;
	sizeEx = 0.50*SMGR_TOOLBAR_H;
	shadow = 0;
	font = SMGR_FONT_FAMILY;
};

class RscSmgrSettingsLine : RscSmgrControlsGroup
{
	x = 0; y = 0;
	w = SMGR_PAGE_W;
	h = SMGR_LINE_H;
};
class RscSmgrSettingsLabel : RscSmgrText
{
	x = 0; y = 0;
	w = 0.50*SMGR_PAGE_W;
	h = SMGR_LINE_H;
};
class RscSmgrSettingsCombo : RscSmgrCombo
{
	x = 0.50*SMGR_PAGE_W; 
	y = 0;
	w = 0.50*SMGR_PAGE_W;
	h = 0.90*SMGR_LINE_H;
};

class RscSmgrNavText : RscSmgrText 
{
	class Attributes {
		font = "EtelkaMonospaceProBold";
		color = SMGR_FONT_COLOR_HEX;
		shadow = SMGR_FONT_SHADOW;
    	align = "left";
    	valign = "middle";
	};
};

class RscSmgrPopupText : RscSmgrText {
	size = 0.8*SMGR_FONT_SIZE;
	class Attributes {
		font = "EtelkaMonospaceProBold";
		color = SMGR_FONT_COLOR_HEX;
		shadow = SMGR_FONT_SHADOW;
    	align = "center";
	};
};

class RscSmgrEditWpLine : RscSmgrControlsGroup 
{
	x = 0;
	y = 0;
	w = SMGR_PAGE_W;
	h = SMGR_LINE_H;
};
class RscSmgrEditWpLabel : RscSmgrText
{
	x = 0;
	y = 0;
	w = 0.50*SMGR_PAGE_W;
	h = SMGR_LINE_H;
};
class RscSmgrEditWpField : RscSmgrEdit 
{
	x = 0.50*SMGR_PAGE_W;
	y = 0;
	w = 0.48*SMGR_PAGE_W;
	h = 0.90*SMGR_LINE_H;
};
class RscSmgrEditWpFieldBg : RscSmgrPicture
{
	x = 0.50*SMGR_PAGE_W;
	y = 0;
	w = 0.48*SMGR_PAGE_W;
	h = 0.90*SMGR_LINE_H;
	text = "#(argb,8,8,3)color(1,1,1,0.2)";
};

class RscSmgrInfobarText : RscSmgrText {
	x = 0;
	y = 0.05*SMGR_INFOBAR_H;
	w = 0;
	h = 0.60*SMGR_INFOBAR_H;
	size = 0.55*SMGR_INFOBAR_H;
};

class RscSmgrProgressBar
{
	access = 0;
	type = 8;
	style = 0;
	idc= -1;

	x = 0;
	y = 0;
	w = 0;
	h = 0;

	colorFrame[] = COLOR_TRANSPARENT;
	colorBar[] = COLOR_WHITE;
	texture = "";
};


// MAIN CONTROLS

class RscSmgrTexture : RscSmgrPicture
{
	idc = SMGR_IDC_BACKGROUND;
	moving = 1;
	x = 0;
	y = 0;
	w = SMGR_W;
	h = SMGR_H;
	text = SMGR_BACKGROUND;
};

class RscSmgrPowerButton : RscSmgrShortcutButton 
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

class RscSmgrBatteryButton : RscSmgrShortcutButton 
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

class RscSmgrMarkButton : RscSmgrShortcutButton 
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

class RscSmgrAutoCycleButton : RscSmgrShortcutButton 
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
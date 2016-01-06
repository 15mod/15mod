////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Oct 04 20:37:39 2015 : Created on Sun Oct 04 20:37:39 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CHVD : config.bin{
class BIS_AddonInfo
{
	author = "76561198038763662";
	timepacked = "1431811449";
};
class CfgPatches
{
	class CHVD
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		version = "1.07";
		author = "Champ";
	};
};
class CfgFunctions
{
	class CHVD
	{
		tag = "CHVDAddon";
		class addon
		{
			file = "\CHVD\functions";
			class onCheckedChanged{};
			class onSliderChange{};
			class onLBSelChanged{};
			class onEBinput{};
			class onEBterrainInput{};
			class selTerrainQuality{};
			class updateTerrain{};
			class updateSettings{};
			class openDialog{};
			class localize{};
			class addonInit
			{
				postInit = 1;
			};
		};
	};
};
class CHVD_rscXSliderH
{
	style = "0x400	+ 0x10";
	shadow = 0;
	x = 0;
	y = 0;
	h = 0.029412;
	w = 0.4;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};
class CHVD_rscCheckbox
{
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = {1,1,1,0.7};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	colorBackground[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	textureChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
};
class CHVD_rscButton
{
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	font = "PuristaLight";
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "(6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
};
class CHVD_rscText
{
	type = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	linespacing = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	text = "";
};
class CHVD_rscTextRight
{
	type = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 1;
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	linespacing = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	text = "";
};
class CHVD_rscFrame
{
	type = 0;
	idc = -1;
	style = 0;
	shadow = 1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = 0.02;
	text = "";
};
class CHVD_rscXListBox
{
	deletable = 0;
	fade = 0;
	idc = -1;
	type = 42;
	x = 0.1;
	y = 0.1;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorText[] = {1,1,1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictudeDisabled[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	style = "0x400 + 0x02 +	0x10";
	shadow = 2;
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	w = 0.14706;
	h = 0.039216;
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorPictureDisabled[] = {1,1,1,1};
};
class CHVD_rscEdit
{
	type = 2;
	style = "0x40";
	autocomplete = "";
	font = "PuristaMedium";
	shadow = 2;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorBackground[] = {0,0,0,1};
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	canModify = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	text = "";
};
class CHVD_dialog
{
	idd = 2900;
	movingEnable = "false";
	moving = 1;
	onLoad = "[_this] call CHVDAddon_fnc_localize";
	onUnload = "";
	class controlsBackground
	{
		class CHVD_rscBackground: CHVD_rscFrame
		{
			idc = 1800;
			x = "7 * 	(0.025) + 	(0)";
			y = "1.6 * 	(0.04) + 	(0)";
			w = "24.5 * 	(0.025)";
			h = "19.7 * 	(0.04)";
			colorBackground[] = {0,0,0,0.7};
		};
		class CHVD_rscTitle: CHVD_rscText
		{
			idc = 1000;
			text = "VIEW DISTANCE SETTINGS";
			x = "7 * 	(0.025) + 	(0)";
			y = "0.5 * 	(0.04) + 	(0)";
			w = "24.5 * 	(0.025)";
			h = "1 * 	(0.04)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class CHVD_rscFootHeaderText: CHVD_rscTextRight
		{
			idc = 1001;
			text = "ON FOOT";
			x = "7 * 	(0.025) + 	(0)";
			y = "2 * 	(0.04) + 	(0)";
			w = "7 * 	(0.025)";
			h = "1 * 	(0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class CHVD_rscFootViewText: CHVD_rscTextRight
		{
			idc = 1002;
			text = "VIEW:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "3.5 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootObjText: CHVD_rscTextRight
		{
			idc = 1003;
			text = "OBJECT:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "5 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootTerrainText: CHVD_rscTextRight
		{
			idc = 1005;
			text = "TERRAIN:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "6.5 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarHeaderText: CHVD_rscTextRight
		{
			idc = 1008;
			text = "IN CAR";
			x = "7 * 	(0.025) + 	(0)";
			y = "8.5 * 	(0.04) + 	(0)";
			w = "7 * 	(0.025)";
			h = "1 * 	(0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class CHVD_rscCarSyncText: CHVD_rscTextRight
		{
			idc = 1009;
			text = "Sync object with view";
			x = "17 * 	(0.025) + 	(0)";
			y = "8.5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarViewText: CHVD_rscTextRight
		{
			idc = 1010;
			text = "VIEW:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "10 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirObjText: CHVD_rscTextRight
		{
			idc = 1011;
			text = "OBJECT:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "18 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarTerrainText: CHVD_rscTextRight
		{
			idc = 1012;
			text = "TERRAIN:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "13 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootSyncText: CHVD_rscTextRight
		{
			idc = 1004;
			text = "Sync object with view";
			x = "17 * 	(0.025) + 	(0)";
			y = "2 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirHeaderText: CHVD_rscTextRight
		{
			idc = 1015;
			text = "IN AIR";
			x = "7 * 	(0.025) + 	(0)";
			y = "15 * 	(0.04) + 	(0)";
			w = "7 * 	(0.025)";
			h = "1 * 	(0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class CHVD_rscAirViewText: CHVD_rscTextRight
		{
			idc = 1016;
			text = "VIEW:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "16.5 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirTerrainText: CHVD_rscTextRight
		{
			idc = 1019;
			text = "TERRAIN:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "19.5 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirSyncText: CHVD_rscTextRight
		{
			idc = 1020;
			text = "Sync object with view";
			x = "17 * 	(0.025) + 	(0)";
			y = "15 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarObjText: CHVD_rscTextRight
		{
			idc = 1021;
			text = "OBJECT:";
			x = "7.5 * 	(0.025) + 	(0)";
			y = "11.5 * 	(0.04) + 	(0)";
			w = "6.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
	};
	class controls
	{
		class CHVD_rscFootViewSlider: CHVD_rscXSliderH
		{
			idc = 1900;
			type = 43;
			onSliderPosChanged = "['CHVD_foot', _this select 0, _this select 1, 1006, 'CHVD_footObj', 1901, 1007, 'CHVD_footSyncObj'] call CHVDAddon_fnc_onSliderChange";
			x = "14 * 	(0.025) + 	(0)";
			y = "3.5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootObjSlider: CHVD_rscXSliderH
		{
			idc = 1901;
			type = 43;
			onSliderPosChanged = "['CHVD_footObj', _this select 0, _this select 1, 1007] call CHVDAddon_fnc_onSliderChange";
			x = "14 * 	(0.025) + 	(0)";
			y = "5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarViewSlider: CHVD_rscXSliderH
		{
			idc = 1902;
			type = 43;
			onSliderPosChanged = "['CHVD_car', _this select 0, _this select 1, 1013, 'CHVD_carObj', 1903, 1014, 'CHVD_carSyncObj'] call CHVDAddon_fnc_onSliderChange";
			x = "14 * 	(0.025) + 	(0)";
			y = "10 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarObjSlider: CHVD_rscXSliderH
		{
			idc = 1903;
			type = 43;
			onSliderPosChanged = "['CHVD_carObj', _this select 0, _this select 1, 1014] call CHVDAddon_fnc_onSliderChange";
			x = "14 * 	(0.025) + 	(0)";
			y = "11.5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirViewSlider: CHVD_rscXSliderH
		{
			idc = 1904;
			type = 43;
			onSliderPosChanged = "['CHVD_air', _this select 0, _this select 1, 1017, 'CHVD_airObj', 1905, 1018, 'CHVD_airSyncObj'] call CHVDAddon_fnc_onSliderChange";
			x = "14 * 	(0.025) + 	(0)";
			y = "16.5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirObjSlider: CHVD_rscXSliderH
		{
			idc = 1905;
			type = 43;
			onSliderPosChanged = "['CHVD_airObj', _this select 0, _this select 1, 1018] call CHVDAddon_fnc_onSliderChange";
			x = "14 * 	(0.025) + 	(0)";
			y = "18 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootViewDistance: CHVD_rscEdit
		{
			idc = 1006;
			onKeyDown = "['CHVD_foot', 1900, _this select 0, 'CHVD_footObj', 1901, 1007, 'CHVD_footSyncObj'] call CHVDAddon_fnc_onEBinput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "3.5 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootObjDistance: CHVD_rscEdit
		{
			idc = 1007;
			onKeyDown = "['CHVD_footObj', 1901, _this select 0] call CHVDAddon_fnc_onEBinput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "5 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarViewDistance: CHVD_rscEdit
		{
			idc = 1013;
			onKeyDown = "['CHVD_car', 1902, _this select 0, 'CHVD_carObj', 1903, 1014, 'CHVD_carSyncObj'] call CHVDAddon_fnc_onEBinput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "10 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscCarObjDistance: CHVD_rscEdit
		{
			idc = 1014;
			onKeyDown = "['CHVD_carObj', 1903, _this select 0] call CHVDAddon_fnc_onEBinput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "11.5 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirViewDistance: CHVD_rscEdit
		{
			idc = 1017;
			onKeyDown = "['CHVD_air', 1904, _this select 0, 'CHVD_airObj', 1905, 1018, 'CHVD_airSyncObj'] call CHVDAddon_fnc_onEBinput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "16.5 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscAirObjDistance: CHVD_rscEdit
		{
			idc = 1018;
			onKeyDown = "['CHVD_airObj', 1905, _this select 0] call CHVDAddon_fnc_onEBinput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "18 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscClose: CHVD_rscButton
		{
			idc = 1612;
			onButtonClick = "closeDialog 2900";
			text = "Close";
			x = "7 * 	(0.025) + 	(0)";
			y = "21.4 * 	(0.04) + 	(0)";
			w = "24.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_rscFootSyncCheckbox: CHVD_rscCheckbox
		{
			idc = 2800;
			onCheckedChanged = "[_this select 1, 'CHVD_footSyncObj', 1901, 1007, 1900, 'CHVD_footObj'] call CHVDAddon_fnc_onCheckedChanged";
			x = "29.2 * 	(0.025) + 	(0)";
			y = "1.88 * 	(0.04) + 	(0)";
			w = "1.45 * 	(0.025)";
			h = "1.25 * 	(0.04)";
			sizeEx = "0 * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04)";
		};
		class CHVD_rscCarSyncCheckbox: CHVD_rscCheckbox
		{
			idc = 2801;
			onCheckedChanged = "[_this select 1, 'CHVD_carSyncObj', 1903, 1014, 1902, 'CHVD_carObj'] call CHVDAddon_fnc_onCheckedChanged";
			x = "29.2 * 	(0.025) + 	(0)";
			y = "8.39 * 	(0.04) + 	(0)";
			w = "1.45 * 	(0.025)";
			h = "1.25 * 	(0.04)";
			sizeEx = "0 * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04)";
		};
		class CHVD_rscAirSyncCheckbox: CHVD_rscCheckbox
		{
			idc = 2802;
			onCheckedChanged = "[_this select 1, 'CHVD_airSyncObj', 1905, 1018, 1904, 'CHVD_airObj'] call CHVDAddon_fnc_onCheckedChanged";
			x = "29.2 * 	(0.025) + 	(0)";
			y = "14.85 * 	(0.04) + 	(0)";
			w = "1.45 * 	(0.025)";
			h = "1.25 * 	(0.04)";
			sizeEx = "0 * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04)";
		};
		class CHVD_footTerrainListbox: CHVD_rscXListBox
		{
			idc = 1500;
			x = "14 * 	(0.025) + 	(0)";
			y = "6.5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_carTerrainListbox: CHVD_rscXListBox
		{
			idc = 1501;
			x = "14 * 	(0.025) + 	(0)";
			y = "13 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_airTerrainListbox: CHVD_rscXListBox
		{
			idc = 1502;
			x = "14 * 	(0.025) + 	(0)";
			y = "19.5 * 	(0.04) + 	(0)";
			w = "12.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_footTerrainEdit: CHVD_rscEdit
		{
			idc = 1400;
			onKeyDown = "['CHVD_footTerrain', _this select 0, 1500] call CHVDAddon_fnc_onEBterrainInput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "6.5 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_carTerrainEdit: CHVD_rscEdit
		{
			idc = 1401;
			onKeyDown = "['CHVD_carTerrain', _this select 0, 1501] call CHVDAddon_fnc_onEBterrainInput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "13 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
		class CHVD_airTerrainEdit: CHVD_rscEdit
		{
			idc = 1402;
			onKeyDown = "['CHVD_airTerrain', _this select 0, 1502] call CHVDAddon_fnc_onEBterrainInput";
			maxChars = 5;
			x = "27 * 	(0.025) + 	(0)";
			y = "19.5 * 	(0.04) + 	(0)";
			w = "3.5 * 	(0.025)";
			h = "1 * 	(0.04)";
		};
	};
};
class cfgMods
{
	author = "76561198094995794";
	timepacked = "1443994659";
};
//};

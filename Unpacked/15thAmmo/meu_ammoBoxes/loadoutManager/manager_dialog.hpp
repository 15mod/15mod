// 15TH LOADOUT MANAGER 2
// fight9
// built on Riouken's framework

#include "manager_macros.hpp"

#define HEADER_BG_COLOR		COLOR_MU_BG_CONFIG
#define LIST_TEXT_COLORS	COLOR_WARNING_CONFIG
#define MAIN_BG_COLOR		{0,0,0,0.8}

#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(-0.1)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class meu_loadoutManager
{
	idd = 5555555;
	movingEnable = true;
	onLoad = "uiNamespace setVariable ['meu_managerGUI',(_this select 0)];";
	onUnLoad = "missionNamespace setVariable ['meu_managerBOX',nil];";
	objects[] = {};
	
	class Controls
	{	
		////////////////////////////
		//// FRAMES
		////////////////////////////
		class meu_LOHeader_Box_base // base class BOX
		{
			idc = -1;
            x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 2.9 * GUI_GRID_H + GUI_GRID_Y;
            w = 39 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			colorBackground[] = HEADER_BG_COLOR;
			style = 0x02;
			type = 0;
			shadow = 2;
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = 0.02;
			text = "";
		};
 		class meu_LOBoxPic: meu_LOHeader_Box_base // base class BOX2
		{
			idc = -1;
			x = 12.1 * GUI_GRID_W + GUI_GRID_X; 
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.8 * GUI_GRID_W;
			h = 9 * GUI_GRID_H;
			colorBackground[] = MAIN_BG_COLOR;
		}; 
		class meu_LOBoxSaved: meu_LOBoxPic
		{
			idc = -1;
			text = "";
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;
		};
		class meu_LOBoxGear: meu_LOBoxPic
		{
			idc = -1;
			text = "";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;
		};
		class meu_LOBoxLower: meu_LOBoxPic
		{
			idc = -1;
			x = 12.1 * GUI_GRID_W + GUI_GRID_X; 
			y = 13.07 * GUI_GRID_H + GUI_GRID_Y;
			w = 8.8 * GUI_GRID_W;
			h = 10.9 * GUI_GRID_H;
		};
		////////////////////////////
		//// MAIN LISTS
		////////////////////////////
		class meu_LOListSaved_RscListBox_base // base class RscListBox
		{
			idc = MEU_CTRL_SAVEDLIST;
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 18 * GUI_GRID_H; 
			
			onMouseButtonDblClick = STR_CALL_FUNC("buttons",_this);
			onSetFocus = STR_CALL_FUNC("listDefault",[]);
			
			deletable = 0;
			fade = 0;
			access = 0;
			type = 5;
			rowHeight = 0;
			//colorText[] = {1,0.5,0,1};
			colorText[] = LIST_TEXT_COLORS;
			colorDisabled[] = {1,1,1,0.25};
			colorScrollbar[] = {1,0,0,0};
			colorSelect[] = {0,0,0,1};
			colorSelect2[] = {0,0,0,1};
			colorSelectBackground[] = 
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
			};
			colorSelectBackground2[] = 
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
			};
			colorBackground[] = {0,0,0,0.3};
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
			autoScrollSpeed = -1;
			autoScrollDelay = 5;
			autoScrollRewind = 0;
			arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
			arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
			colorPicture[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
			colorPictureDisabled[] = {1,1,1,0.25};
			colorPictureRight[] = {1,1,1,1};
			colorPictureRightSelected[] = {1,1,1,1};
			colorPictureRightDisabled[] = {1,1,1,0.25};
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				autoScrollEnabled = 1;
			};
			style = 16;
			font = "PuristaMedium";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 32) * 1)";
			shadow = 0;
			colorShadow[] = {0,0,0,0.5};
			period = 1.2;
			maxHistoryDelay = 1;
		};
		class meu_LOListGear_RscTree_base  // base class RscTree
		{
			idc = MEU_CTRL_GEARTREE;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;
			//////////////
			access = 0; 
			type = 12; 
			style = 0x00; 
			default = 0; 
			blinkingPeriod = 0; 
			colorBorder[] = {0,0,0,0}; 
			colorBackground[] = {0,0,0,0.3}; 
			colorSelect[] = {0,0,0,0}; 
			colorMarked[] = {1,0.5,0,0.5};
			colorMarkedSelected[] = {1,0.5,0,1}; 
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 32) * 1)";
			font = "PuristaMedium";  
			shadow = 1; 
			colorText[] = LIST_TEXT_COLORS; 
			//colorText[] = {1,0.5,0,1}; 
			colorSelectText[] = {1,0.5,0,1}; 
			colorMarkedText[] = {1,1,1,1};
			tooltip = "";
			tooltipColorShade[] = {0,0,0,1}; 
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			multiselectEnabled = 0;
			expandOnDoubleclick = 1;
			hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa"; 
			expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa"; 
			maxHistoryDelay = 1;
			class ScrollBar { 
				width = 0;
				height = 0;
				scrollSpeed = 0.1;
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				color[] =  
				{
					"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
					"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
					"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
					"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
				};
			}; 
			colorDisabled[] = {1,1,1,0.25};
			colorArrow[] =  
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
			};
		};
		class meu_LOListDefault: meu_LOListSaved_RscListBox_base 
		{
			idc = MEU_CTRL_DEFAULTLIST;
			x = 12.6 * GUI_GRID_W + GUI_GRID_X; 
			y = 14.07 * GUI_GRID_H + GUI_GRID_Y;
			w = 7.8 * GUI_GRID_W;
			h = 8.9 * GUI_GRID_H;
			
			onSetFocus = STR_CALL_FUNC("listSaved",[-1]);
			onMouseButtonDblClick = STR_CALL_FUNC("loadDefault",_this);
		};
		////////////////////////////
		//// TEXT
		////////////////////////////
		class meu_LO_rscPicture_base // base class RscPicture
		{
			idc = -1;
			text = "\meu_ammoBoxes\loadoutManager\logo256.paa";
			/* x = 11.7 * GUI_GRID_W + GUI_GRID_X; // new logo
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 10 * GUI_GRID_H; */
			x = 11.6 * GUI_GRID_W + GUI_GRID_X; // ega logo
			y = 3.6 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;
			style = 0x30 + 0x800;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "puristaMedium";
			sizeEx = 0;
			lineSpacing = 0;
			fixedWidth = 0;
			shadow = 0;
			deletable = 0;
			fade = 0;
			access = 0;
			type = 0;
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
		};
		class meu_LOTextHeader_RscText_base // base class RscText
		{
			idc = -1;
            x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 2.9 * GUI_GRID_H + GUI_GRID_Y; //1
            w = 39 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			text = "15TH LOADOUT MANAGER 2";
			shadow = 0;
			deletable = 0;
			fade = 0;
			access = 0;
			type = 0;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			fixedWidth = 0;
			style = 0;
			colorShadow[] = {0,0,0,0.5};
			font = "PuristaMedium";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			linespacing = 1;
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
		};
		class meu_LOTextGear: meu_LOTextHeader_RscText_base
		{
			idc = -1;
            x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y; //1
            w = 10 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			text = "Current Gear";
			shadow = 0;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1)";
		};
		class meu_LOTextSaved: meu_LOTextHeader_RscText_base
		{
			idc = -1;
            x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y; //1
            w = 10 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			text = "Saved Gear";
			shadow = 0;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1)";
		};
		class meu_LOTextDefault: meu_LOTextHeader_RscText_base
		{
			idc = -1;
            x = 12.6 * GUI_GRID_W + GUI_GRID_X;
			y = 13.07 * GUI_GRID_H + GUI_GRID_Y; //1
            w = 10 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			text = "Default Gear";
			shadow = 0;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1)";
		};
		////////////////////////////
		//// MAIN BUTTONS
		////////////////////////////
		class meu_LOXClose_RscActiveText_base // base class RscActiveText
		{
			idc = -1;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			tooltip = "Exit";
			action = "closeDialog 0;";
			
			x = 38 * GUI_GRID_W + GUI_GRID_X;
			y = 3.05 * GUI_GRID_H + GUI_GRID_Y;
			w = 0.76 * GUI_GRID_W;
			h = 0.7 * GUI_GRID_H;
			
			style = 48;
			default = false;
			access = 0;
			type = 11;
			color[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			colorText[] = {1,1,1,0.7};
			colorDisabled[] = {1,1,1,0.4};
			
			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
			
			font = "PuristaMedium";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
		};
		class meu_LOXTip: meu_LOXClose_RscActiveText_base
		{
			idc = MEU_CTRL_HELPTIP;
			text = ICON_HELPTIPS;
			tooltip = "Double Click On A Saved Loadout To See The Items.";
			action = "";
			
			/* x = 19 * GUI_GRID_W + GUI_GRID_X; // new logo
			y = 4.2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1 * GUI_GRID_W;
			h = 0.9 * GUI_GRID_H; */
			x = 19.8 * GUI_GRID_W + GUI_GRID_X; // ega logo
			y = 4.2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1 * GUI_GRID_W;
			h = 0.9 * GUI_GRID_H;
		};
		class meu_LOFav: meu_LOXClose_RscActiveText_base
		{
			idc = MEU_CTRL_FAVORITE;
			text = ICON_FAVORITE;
			tooltip = "Set Selected As Favorite.";
			action = "";
			
			/* x = 13 * GUI_GRID_W + GUI_GRID_X; // new logo
			y = 4.2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H; */
			x = 12.2 * GUI_GRID_W + GUI_GRID_X; // ega logo
			y = 4.2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.2 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOButton_RscButton_base // base class RscButton
		{
			idc = MEU_CTRL_BUTTONLOAD;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 24.03 * GUI_GRID_H + GUI_GRID_Y;
			action = STR_CALL_FUNC("loadSaved",[]);
			text = "LOAD";
			toolTip = "Load Selected";
			
			w = 5 * GUI_GRID_W;
			h = 0.039216;
			
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
			textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
			
			color2[] = {0,0,0,1};
			color2Secondary[] = {0,0,0,1};
			color[] = {1,1,1,1};
			colorBackground2[] = {0.75,0.75,0.75,1};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundFocused[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.25};
			colorDisabledSecondary[] = {1,1,1,0.25};
			colorFocused[] = {0,0,0,1};
			colorFocusedSecondary[] = {0,0,0,1};
			colorSecondary[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			
			deletable = 0;
			default = 0;
			fade = 0;
			type = 16;
			style = "0x02 + 0xC0";
			
			shadow = 0;
			font = "PuristaLight";
			fontSecondary = "PuristaLight";
			textSecondary = "";	
			sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";

			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};

			period = 1.2;
			periodFocus = 1.2;
			periodOver = 1.2;
			shortcuts[] = {};
			
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};	
			
			class KeyHints {
				class A {
					hint = "";
					key = "0x00050000 + 0";
				};
			};
			class TextPos {
				left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
				top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
				right = 0.005;
				bottom = 0;
			};
			class Attributes {
				font = "PuristaLight";
				color = "#E5E5E5";
				align = "left";
				shadow = "false";
			};	
			class AttributesImage {
				align = "left";
				color = "#E5E5E5";
				font = "PuristaMedium";	
			};
			class ShortcutPos {
				left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
				top = 0.005;
				w = 0.0225;
				h = 0.03;
			};
			class HitZone {
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
		};
		class meu_LOButtonDelete: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_BUTTONDELETE;
			x = 5.03 * GUI_GRID_W + GUI_GRID_X;
			y = 24.03 * GUI_GRID_H + GUI_GRID_Y;
			text = "DELETE";
			toolTip = "Delete Selected";
			action = "";
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOButtonDefault: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_BUTTONDEFAULT;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 24.03 * GUI_GRID_H + GUI_GRID_Y;
			action = STR_CALL_FUNC("loadDefault",[]);
			text = "DEFAULT";
			toolTip = "Load Default";
		};
		class meu_LOButtonSave: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_BUTTONSAVE;
			/* x = 28.97 * GUI_GRID_W + GUI_GRID_X;
			y = 24.03 * GUI_GRID_H + GUI_GRID_Y; */
			x = 34 * GUI_GRID_W + GUI_GRID_X;
			y = 24.03 * GUI_GRID_H + GUI_GRID_Y;
			text = "SAVE";
			toolTip = "Save Current";
			action = "";
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOButtonClose: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_BUTTONCLOSE;
			x = 34 * GUI_GRID_W + GUI_GRID_X;
			y = 24.03 * GUI_GRID_H + GUI_GRID_Y;
			action = "closeDialog 0;";
			text = "CLOSE";
			toolTip = "Exit";
		};
		////////////////////////////
		//// SAVING CONTROLS
		//////////////////////////// 
		class meu_LOSaveBG: meu_LOBoxPic
		{
			idc = MEU_CTRL_SAVEBG;
			x = 6 * GUI_GRID_W + GUI_GRID_X; 
			y = 10.95 * GUI_GRID_H + GUI_GRID_Y;
			w = 28 * GUI_GRID_W;
			h = 3 * GUI_GRID_H;
			colorBackground[] = {0,0,0,1};
		};
		class meu_LOSaveEdit_RscEdit_base // base class RscEdit
		{
			idc = MEU_CTRL_SAVEEDIT;
			text = "";
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 13.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 32) * 1)";
			colorText[] = {1,0.5,0,1}; 
			// return: 28  num enter: 156
			onKeyDown = "if ( _this select 1 in [28,156] ) then { ['buttons',_this] call meu_fnc_manager; };";
			
			deletable = 0;
			fade = 0;
			access = 0;
			type = 2;
			colorBackground[] = {0,0,0,1};
			colorDisabled[] = {1,1,1,0.25};
			colorSelection[] = 
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
				1
			};
			autocomplete = "";
			style = "0x00 + 0x40";
			font = "PuristaMedium";
			shadow = 2;
			canModify = 1;
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
		};	
		class meu_LOSaveSave: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_SAVESAVE;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 12.25 * GUI_GRID_H + GUI_GRID_Y;
			text = "SAVE";
			action = "";
			toolTip = "";
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOSaveRename: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_SAVERENAME;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 12.25 * GUI_GRID_H + GUI_GRID_Y;
			text = "SAVE";
			action = "";
			toolTip = "";
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOSaveCancel: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_SAVECANCEL;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 12.25 * GUI_GRID_H + GUI_GRID_Y;
			text = "CANCEL";
			action = "";
			toolTip = "";
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOSaveText: meu_LOTextHeader_RscText_base
		{
			idc = MEU_CTRL_SAVETEXT;
            x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y; //1
            w = 10 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			text = "Loadout Name";
			shadow = 0;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1)";
		};
		class meu_LOSaveClear: meu_LOXClose_RscActiveText_base
		{
			idc = MEU_CTRL_SAVECLEAR;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			tooltip = "Clear";
			action = "((uiNamespace getVariable 'meu_managerGUI') displayCtrl  15061) ctrlSetText ''; ctrlSetFocus ((uiNamespace getVariable 'meu_managerGUI') displayCtrl  15061);";
			
			x = 6.3 * GUI_GRID_W + GUI_GRID_X;
			y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 0.57 * GUI_GRID_W;
			h = 0.525 * GUI_GRID_H;
		};
		////////////////////////////
		//// SAVED PREVIEW
		////////////////////////////
		class meu_LOPrevBG: meu_LOBoxPic
		{
			idc = MEU_CTRL_PREVBG;
			x = 22 * GUI_GRID_W + GUI_GRID_X; 
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 16 * GUI_GRID_W; // 14
			h = 19 * GUI_GRID_H;
			colorBackground[] = {0,0,0,1};
		};
		class meu_LOPrevTree: meu_LOListGear_RscTree_base 
		{
			idc = MEU_CTRL_PREVTREE;
			x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 16 * GUI_GRID_H;
			colorBackground[] = {0,0,0,1};
			colorBorder[] = {1,0.5,0,1};
		};
		class meu_LOPrevClose: meu_LOButton_RscButton_base
		{
			idc = MEU_CTRL_PREVCLOSE;
			x = 27.5 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			text = "CLOSE";
			action = "";
			toolTip = "";
			
			onMouseButtonClick = STR_CALL_FUNC("buttons",_this);
		};
		class meu_LOPrevText: meu_LOTextHeader_RscText_base
		{
			idc = MEU_CTRL_PREVTEXT;
            x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y; //1
            w = 10 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
			text = "Loadout Name";
			shadow = 0;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1)";
		};
	};
};

class cfgHints
{
	class meu_manager
	{
		displayname = "[15th] Ammo Boxes";
		class meu_usage
		{
			displayName = "15th Loadout Manager 2";
			displayNameShort = "The Best In The Business.";
			description = "15th AmmoBoxes come with a loadout manager. There are a few things you should know.%1%1Make your loadouts exactly how you want them. Including your radio frequencies.%1%1%3Double Click%4 - View gear in saved loadout.%1%3CTRL + Double Click%4 - Rename Loadout.%1%3SHFT + Double Click%4 - Add to favorites.%1%3CTRL + Click Save%4 - Quick save loadout with the same name%1%3DEL%4 - Delete Loadout.%1%1Enjoy!";
			tip = "Please report any problems on the forums.";
			arguments[] = {};
			image = "\meu_ammoBoxes\loadoutManager\logo256.paa";
			noImage = false;
		};
		class meu_other
		{
			displayName = "Other Info";
			displayNameShort = "";
			description = "Other Info:%1- Packed weapons have thier attachments saved but loaded seperately.%1- To save loaded designator batteries, have an extra in your inventory.%1- GUI colors are set from your Arma profile.%1- Mission Makers can disabled the ""gear in box"" check with %3box setVariable [""meu_boxRestrictions"",false]%4%1- You can add the LOM to any object with %3[""init"",[_crate]] call meu_fnc_manager;%4";
			tip = "Riouken Created The Original Loadout Manager.";
			arguments[] = {};
			image = "\meu_ammoBoxes\loadoutManager\logo256.paa";
			noImage = false;
		};
	};
};

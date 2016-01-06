// DIMENSIONS

#define SMGR_X (0.50*safezoneW + safezoneX) - (0.075*safezoneW)
#define SMGR_Y (0.50*safezoneH + safezoneY) - (0.26*safezoneH)
#define SMGR_W 0.15*safezoneW
#define SMGR_H 0.52*safezoneH

#define SMGR_SCREEN_X (0.15*SMGR_W)
#define SMGR_SCREEN_Y (0.13*SMGR_H)
#define SMGR_SCREEN_W (0.69*SMGR_W)
#define SMGR_SCREEN_H (0.45*SMGR_H)

#define SMGR_INFOBAR_X SMGR_SCREEN_X
#define SMGR_INFOBAR_Y SMGR_SCREEN_Y
#define SMGR_INFOBAR_W SMGR_SCREEN_W
#define SMGR_INFOBAR_H 0.09*SMGR_SCREEN_H

#define SMGR_PAGE_X 0.01*SMGR_SCREEN_W + SMGR_SCREEN_X
#define SMGR_PAGE_Y 0.10*SMGR_SCREEN_H + SMGR_SCREEN_Y 
#define SMGR_PAGE_W 0.98*SMGR_SCREEN_W
#define SMGR_PAGE_H 0.78*SMGR_SCREEN_H

#define SMGR_TOOLBAR_X SMGR_SCREEN_X
#define SMGR_TOOLBAR_Y 0.88*SMGR_SCREEN_H + SMGR_SCREEN_Y
#define SMGR_TOOLBAR_W SMGR_SCREEN_W
#define SMGR_TOOLBAR_H 0.12*SMGR_SCREEN_H

#define SMGR_LINE_H	0.10*SMGR_PAGE_H

#define SMGR_POPUP_X 0.10*SMGR_PAGE_W + SMGR_PAGE_X
#define SMGR_POPUP_Y 0.20*SMGR_PAGE_H + SMGR_PAGE_Y
#define SMGR_POPUP_W 0.80*SMGR_PAGE_W
#define SMGR_POPUP_H 0.60*SMGR_PAGE_H

// STYLES

#define COLOR_TRANSPARENT 	{0,0,0,0}
#define COLOR_WHITE			{1,1,1,1}
#define COLOR_HALFWHITE		{1,1,1,0.3}
#define COLOR_WHITE_HEX		"#ffffff"
#define COLOR_BLACK 		{0,0,0,1}
#define COLOR_BLACK_HEX		"#000000"
#define COLOR_NEUTRALGREY	{0.5,0.5,0.5,1}
#define COLOR_YELLOW 		{1,0.9,0,1}
#define COLOR_YELLOW_HEX	"#FFEF00"
#define COLOR_HALFYELLOW 	{1,0.9,0,0.5}

#define SMGR_FONT_FAMILY "PuristaMedium"
#define SMGR_FONT_ALIGN "left"
#define SMGR_FONT_COLOR_HEX COLOR_WHITE_HEX
#define SMGR_FONT_COLOR_RGB COLOR_WHITE
#define SMGR_FONT_SELECTED_COLOR_RGB COLOR_YELLOW
#define SMGR_FONT_SHADOW 0
#define SMGR_FONT_SIZE	0.8*SMGR_LINE_H

#define SMGR_LIST_BACKGROUND_RGB COLOR_TRANSPARENT
#define SMGR_LIST_PERIOD 0

// FILES

#define SMGR_BACKGROUND		"smgr\data\smgr_background.paa"
#define SMGR_WALLPAPER 		"smgr\data\wallpaper.paa"
#define SMGR_WALLPAPER_BOOT "smgr\data\wallpaper_boot.paa"
#define SMGR_GMSLOGO		"smgr\data\logo_gms.paa"
#define SMGR_MODEL			"p:\smgr\smgr.p3d"
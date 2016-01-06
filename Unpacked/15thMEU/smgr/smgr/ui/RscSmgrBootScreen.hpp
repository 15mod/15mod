class RscSmgrBootScreen : RscSmgrScreen
{
	idc = SMGR_IDC_BOOT_SCREEN;

	class Controls
	{

		class logo : RscSmgrPicture {
			x = 0;
			y = 0.15*SMGR_SCREEN_H;
			h = 0.40*SMGR_SCREEN_H;
			w = SMGR_SCREEN_W;
			text = SMGR_GMSLOGO;
		};

		class counterText : RscSmgrText {
			idc = SMGR_IDC_PROGRESS_TEXT;
			x = 0.25*SMGR_SCREEN_W;
			y = 0.52*SMGR_SCREEN_H;
			w = 0.50*SMGR_SCREEN_W;
			h = 0.10*SMGR_SCREEN_H;	
			class Attributes {
				font = "EtelkaMonospaceProBold";
				color = SMGR_FONT_COLOR_HEX;
				shadow = SMGR_FONT_SHADOW;
		    	align = "center";
			};
			text = "Loading OS";
		};
		class counterBg : RscSmgrPicture {
			x = 0.15*SMGR_SCREEN_W;
			y = 0.60*SMGR_SCREEN_H;
			w = 0.70*SMGR_SCREEN_W;
			h = 0.06*SMGR_SCREEN_H;
			text = "#(argb,8,8,3)color(1,1,1,0.2)";
		};
		class counter : RscSmgrProgressBar {
			idc = SMGR_IDC_PROGRESS_CTRL;
			x = 0.15*SMGR_SCREEN_W;
			y = 0.60*SMGR_SCREEN_H;
			w = 0.70*SMGR_SCREEN_W;
			h = 0.06*SMGR_SCREEN_H;
		};


		class label : RscSmgrText {
			x = 0.15*SMGR_SCREEN_W;
			y = 0.72*SMGR_SCREEN_H;
			w = 0.70*SMGR_SCREEN_W;
			h = 0.15*SMGR_SCREEN_H;
			size = 	0.9*SMGR_FONT_SIZE;
			class Attributes {
				font = "EtelkaMonospaceProBold";
				color = SMGR_FONT_COLOR_HEX;
				shadow = SMGR_FONT_SHADOW;
		    	align = "center";
			};
			text = "AN/PNC-212 SMGR<br/>HW:v2 SW:v1.6.887";
		};

		class site : RscSmgrText {
			x = 0.15*SMGR_SCREEN_W;
			y = 0.05*SMGR_SCREEN_H;
			w = 0.70*SMGR_SCREEN_W;
			h = 0.09*SMGR_SCREEN_H;
			size = 	0.8*SMGR_FONT_SIZE;
			class Attributes {
				font = "EtelkaMonospaceProBold";
				color = SMGR_FONT_COLOR_HEX;
				shadow = SMGR_FONT_SHADOW;
		    	align = "center";
			};
			text = "www.clan-gid.fr";

		};
	};
};
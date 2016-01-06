class RscSmgrNavigation : RscSmgrPage
{
	idc = SMGR_IDC_NAVIGATION;

	class Controls
	{

		class posText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_POS;
			x = 0.02*SMGR_PAGE_W;
			y = 0.07*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.20*SMGR_PAGE_H;
			size = 1.3*SMGR_FONT_SIZE;
			class Attributes {
				font = "EtelkaMonospaceProBold";
				color = COLOR_YELLOW_HEX;
				shadow = SMGR_FONT_SHADOW;
		    	align = "left";
		    	valign = "middle";
			};
			text = "n/a";
		};
		class strText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_STR;
			x = 0.02*SMGR_PAGE_W;
			y = 0.24*SMGR_PAGE_H;
			w = 0.60*SMGR_PAGE_W;
			h = 0.10*SMGR_PAGE_H;
			text = "n/a";
		};
		class eleText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_ELE;
			x = 0.02*SMGR_PAGE_W;
			y = 0.41*SMGR_PAGE_H;
			w = 0.60*SMGR_PAGE_W;
			h = 0.10*SMGR_PAGE_H;
			text = "n/a";
		};
		class modeText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_MODE;
			x = 0.64*SMGR_PAGE_W;
			y = 0.24*SMGR_PAGE_H;
			w = 0.34*SMGR_PAGE_W;
			h = 0.10*SMGR_PAGE_H;
			text = "n/a";
		};
		class fomText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_FOM;
			x = 0.64*SMGR_PAGE_W;
			y = 0.41*SMGR_PAGE_H;
			w = 0.34*SMGR_PAGE_W;
			h = 0.10*SMGR_PAGE_H;
			text = "n/a";
		};
		class wpText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_WP;
			x = 0.02*SMGR_PAGE_W;
			y = 0.63*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.20*SMGR_PAGE_H;
			class Attributes {
				font = "EtelkaMonospaceProBold";
				color = COLOR_YELLOW_HEX;
				shadow = SMGR_FONT_SHADOW;
		    	align = "left";
		    	valign = "middle";
			};
			text = "n/a";
		};
		class wpAzText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_WPAZ;
			x = 0.02*SMGR_PAGE_W;
			y = 0.82*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.10*SMGR_PAGE_H;
			text = "n/a";
		};
		class wpDistText : RscSmgrNavText {
			idc = SMGR_IDC_NAVIGATION_WPDIST;
			x = 0.51*SMGR_PAGE_W;
			y = 0.82*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.10*SMGR_PAGE_H;
			text = "n/a";
		};


		class posFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0;
			w = 0.96*SMGR_PAGE_W;
			h = 0.20*SMGR_PAGE_H;
			text = "LAST FIX POSITION";
		};
		class strFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.19*SMGR_PAGE_H;
			w = 0.60*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "STEERING";
		};
		class eleFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.36*SMGR_PAGE_H;
			w = 0.60*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "ELEVATION";
		};
		class modeFrame : RscSmgrTitle {
			x = 0.64*SMGR_PAGE_W;
			y = 0.19*SMGR_PAGE_H;
			w = 0.34*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "MODE";
		};
		class fomFrame : RscSmgrTitle {
			x = 0.64*SMGR_PAGE_W;
			y = 0.36*SMGR_PAGE_H;
			w = 0.34*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "FOM";
		};
		class wpFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.58*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.20*SMGR_PAGE_H;
			text = "CURRENT WAYPOINT";
		};
		class wpAzFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.77*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "WP AZIMUTH";
		};
		class wpDistFrame : RscSmgrTitle {
			x = 0.51*SMGR_PAGE_W;
			y = 0.77*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "WP DIST";
		};
	};
};
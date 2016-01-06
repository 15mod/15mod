class RscSmgrLDlink : RscSmgrPage
{
	idc = SMGR_IDC_LDLINK;

	class Controls
	{

		class posText : RscSmgrNavText {
			idc = SMGR_IDC_LDLINK_POS;
			x = 0.02*SMGR_PAGE_W;
			y = 0.41*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.20*SMGR_PAGE_H;
			text = "---- ----";
			class Attributes {
				font = "EtelkaMonospaceProBold";
				color = COLOR_YELLOW_HEX;
				shadow = SMGR_FONT_SHADOW;
		    	align = "left";
		    	valign = "middle";
			};
		};
		class azText : RscSmgrNavText {
			idc = SMGR_IDC_LDLINK_AZ;
			x = 0.02*SMGR_PAGE_W;
			y = 0.58*SMGR_PAGE_H;
			w = 0.49*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "---";
		};
		class eleText : RscSmgrNavText {
			idc = SMGR_IDC_LDLINK_ELE;
			x = 0.51*SMGR_PAGE_W;
			y = 0.58*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "---";
		};
		class distText : RscSmgrNavText {
			idc = SMGR_IDC_LDLINK_DIST;
			x = 0.02*SMGR_PAGE_W;
			y = 0.75*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "---";
		};


		class posFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.35*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.20*SMGR_PAGE_H;
			text = "GRID";
		};
		class azFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.52*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "AZIMUTH";
		};
		class eleFrame : RscSmgrTitle {
			x = 0.51*SMGR_PAGE_W;
			y = 0.52*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "ELEVATION";
		};
		class distFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.69*SMGR_PAGE_H;
			w = 0.47*SMGR_PAGE_W;
			h = 0.15*SMGR_PAGE_H;
			text = "DISTANCE";
		};

		class statusFrame : RscSmgrTitle {
			x = 0.02*SMGR_PAGE_W;
			y = 0.00*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.30*SMGR_PAGE_H;
			text = "STATUS";
		};

		class connectionInfo : RscSmgrNavText {
			x = 0.02*SMGR_PAGE_W;
			y = 0.06*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.30*SMGR_PAGE_H;
			text = "LINK Established <br/>RATE 28800 baud";
		};

		class status : RscSmgrNavText {
			idc = SMGR_IDC_LDLINK_STATUS;
			x = 0.02*SMGR_PAGE_W;
			y = 0.23*SMGR_PAGE_H;
			w = 0.96*SMGR_PAGE_W;
			h = 0.30*SMGR_PAGE_H;
			text = "";
		};
	};
};


class RscSmgrPopup : RscSmgrControlsGroup
{
	idc = SMGR_IDC_POPUP;
	x = SMGR_POPUP_X;
	y = SMGR_POPUP_Y;
	w = SMGR_POPUP_W;
	h = SMGR_POPUP_H;

	class Controls
	{
		class bg : RscSmgrBackgroundPicture {
			x = 0;
			y = 0;
			w = SMGR_POPUP_W;
			h = SMGR_POPUP_H;
			text = "#(argb,8,8,3)color(0,0.06,0,0.8)";
		};
		class frame : RscSmgrTitle {
			x = 0;
			y = 0;
			w = SMGR_POPUP_W;
			h = SMGR_POPUP_H;
			text = "ATTENTION";
		};
		class text : RscSmgrPopupText {
			idc = SMGR_IDC_POPUP_TEXT;
			x = 0.05*SMGR_POPUP_W;
			y = 0.20*SMGR_POPUP_H;
			w = 0.90*SMGR_POPUP_W;
			h = 0.79*SMGR_POPUP_H;
		};
	};
};
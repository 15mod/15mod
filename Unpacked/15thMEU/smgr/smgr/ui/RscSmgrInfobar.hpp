class RscSmgrInfobar : RscSmgrControlsGroup
{
	idc = SMGR_IDC_INFOBAR;
	x = SMGR_INFOBAR_X;
	y = SMGR_INFOBAR_Y;
	w = SMGR_INFOBAR_W;
	h = SMGR_INFOBAR_H;

	class Controls 
	{
		class date : RscSmgrInfobarText {
			idc = SMGR_IDC_INFOBAR_DATE;
			x = 0;
			w = 0.40*SMGR_INFOBAR_W;
			text = "01-01-2030";
		};

		class trk : RscSmgrInfobarText {
			idc = SMGR_IDC_INFOBAR_TRK;
			x = 0.32*SMGR_INFOBAR_W;
			w = 0.15*SMGR_INFOBAR_W;
			text = "TRK";
		};
		class autocycle : RscSmgrInfobarText {
			idc = SMGR_IDC_INFOBAR_AUTO;
			x = 0.40*SMGR_INFOBAR_W;
			w = 0.20*SMGR_INFOBAR_W;
			text = "AC";
		};

		class batt : RscSmgrInfobarText {
			idc = SMGR_IDC_INFOBAR_BATT;
			x = 0.52*SMGR_INFOBAR_W;
			w = 0.30*SMGR_INFOBAR_W;
			text = "PWR:100";
		};

		class time : RscSmgrInfobarText {
			idc = SMGR_IDC_INFOBAR_TIME;
			x = 0.80*SMGR_INFOBAR_W;
			w = 0.20*SMGR_INFOBAR_W;
			text = "00:00";
		};

	};
};
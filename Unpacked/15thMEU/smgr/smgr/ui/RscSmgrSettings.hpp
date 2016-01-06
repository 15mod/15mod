class RscSmgrSettings : RscSmgrPage
{
	idc = SMGR_IDC_SETTINGS;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			text = "SETTINGS";
		};

		class list : RscSmgrListN {
			idc = SMGR_IDC_SETINGS_LIST;
			x = 0;
			y = 0.10*SMGR_PAGE_H;
			w = 0.99*SMGR_PAGE_W;
			h = 0.89*SMGR_PAGE_H;
			columns[] = {0, 0.60};
			onLBDblClick = "['EditSetting'] call smgr_fnc_displayPage;";
		};
	};
};
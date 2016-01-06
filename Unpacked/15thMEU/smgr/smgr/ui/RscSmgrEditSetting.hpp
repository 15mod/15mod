class RscSmgrEditSetting : RscSmgrPage
{
	idc = SMGR_IDC_EDITSETTING;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			text = "EDIT SETTING";
		};

		class list : RscSmgrMenuList {
			idc = SMGR_IDC_EDITSETTING_LIST;
			x = 0;
			y = 0.10*SMGR_PAGE_H;
			w = 0.99*SMGR_PAGE_W;
			h = 0.89*SMGR_PAGE_W;
			onLBDblClick = "[] call smgr_fnc_editSettingSave;";
		};
	};
};
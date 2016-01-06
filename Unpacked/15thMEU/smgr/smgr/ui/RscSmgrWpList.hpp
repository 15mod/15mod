class RscSmgrWpList : RscSmgrPage
{
	idc = SMGR_IDC_WPLIST;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			text = "WAYPOINTS";
		};

		class list : RscSmgrMenuList {
			idc = SMGR_IDC_WPLIST_LIST;
			onLBDblClick = "['EditWp',true] call smgr_fnc_displayPage";
		};
	};
};
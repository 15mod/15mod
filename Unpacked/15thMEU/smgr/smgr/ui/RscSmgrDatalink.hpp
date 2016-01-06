class RscSmgrDatalink : RscSmgrPage
{
	idc = SMGR_IDC_DATALINK;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			text = "DATA LINK";
		};

		class list : RscSmgrMenuList {
			idc = SMGR_IDC_DATALINK_LIST;
			onLBDblClick = "['Datalink'] call smgr_fnc_selectMenuEntry";
		};
	};
};
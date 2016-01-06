class RscSmgrMainMenu : RscSmgrPage
{
	idc = SMGR_IDC_MAINMENU;

	class Controls
	{
		class frame : RscSmgrPageFrame {
			text = "MAIN MENU";
		};

		class list : RscSmgrMenuList {
			idc = SMGR_IDC_MAINMENU_LIST;
			onLBDblClick = "['MainMenu'] call smgr_fnc_selectMenuEntry";
		};
	};
};
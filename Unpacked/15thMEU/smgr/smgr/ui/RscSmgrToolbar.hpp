class RscSmgrToolbar : RscSmgrControlsGroup
{
	idc = SMGR_IDC_TOOLBAR;
	x = SMGR_TOOLBAR_X;
	y = SMGR_TOOLBAR_Y;
	w = SMGR_TOOLBAR_W;
	h = SMGR_TOOLBAR_H;
	
	class Controls 
	{
		class Action0 : RscSmgrToolbarButton
		{
			idc = SMGR_IDC_ACTION_0;
			x = 0;
			action = "_this call smgrToolBarAction_0";
		};
		class Action1 : RscSmgrToolbarButton
		{
			idc = SMGR_IDC_ACTION_1;
			x = 0.25*SMGR_TOOLBAR_W;
			action = "_this call smgrToolBarAction_1";
		};
		class Action2 : RscSmgrToolbarButton
		{
			idc = SMGR_IDC_ACTION_2;
			x = 0.50*SMGR_TOOLBAR_W;
			action = "_this call smgrToolBarAction_2";
		};
		class Action3 : RscSmgrToolbarButton
		{
			idc = SMGR_IDC_ACTION_3;
			x = 0.75*SMGR_TOOLBAR_W;
			action = "_this call smgrToolBarAction_3";
		};
	};
};
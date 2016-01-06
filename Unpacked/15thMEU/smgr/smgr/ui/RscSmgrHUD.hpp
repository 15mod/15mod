class RscSmgrHUD
{
	idd = SMGRHUD_IDD;
	duration  = 999999;
	onLoad = "(_this select 0) call smgr_fnc_loadDialog;";
	onUnload = "(_this select 0) call smgr_fnc_unloadDialog;";

	class Controls
	{
		class smgr : RscSmgrControlsGroup {
			idc = SMGR_IDC_MAINCONTROLGROUP;
			x = 3.1*SMGR_X;
			y = 2.6*SMGR_Y;
			w = SMGR_W;
			h = SMGR_H;

			class Controls 
			{
				class texture : RscSmgrTexture {};
				class powerButton : RscSmgrPowerButton {};
				class batteryButton : RscSmgrBatteryButton {};
				class markButton : RscSmgrMarkButton {};
				class autoCycleButton : RscSmgrAutoCycleButton {};
				class toolBar: RscSmgrToolbar {};
				class infoBar : RscSmgrInfobar {};
				class bootScreen : RscSmgrBootScreen {};
				class mainMenu : RscSmgrMainMenu {};
				class navigation : RscSmgrNavigation {};
				class wpList : RscSmgrWpList {};
				class editWp : RscSmgrEditWp {};
				class settings : RscSmgrSettings {};
				class editSettings : RscSmgrEditSetting {};
				class dataLink : RscSmgrDatalink {};
				class p2pLink : RscSmgrP2Plink {};
				class ldLink : RscSmgrLDlink {};
				class status : RscSmgrStatus {};
				class popup : RscSmgrPopup {};
			};
		};
	};
};
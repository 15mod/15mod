class CfgSmgr
{
	class CfgSettings 
	{
		class CoordinatesSystem {
			text = "CSYS";
			variable = "smgrCoordSystem";
			values[] = {"MGRS"};
		};
		class DistanceUnits {
			text = "DIST";
			variable = "smgrUnitsDist";
			values[] = {"Metric","English","Nautical"};
		};
		class ElevationUnits {
			text = "ELEV";
			variable = "smgrUnitsElev";
			values[] = {"Meters","Feet"};
		};
		class AngleUnits {
			text = "ANGL";
			variable = "smgrUnitsAngle";
			values[] = {"Degrees","Mils"};
		};
		class TrackingRate {
			text = "TRK RATE";
			variable = "smgrTrackingRate";
			values[] = {"1","5","10","20","60"};
		};
		class AutoCycleWP {
			text = "AUTO-CYC";
			variable = "smgrAutoCyclehWp";
			values[] = {"OFF","ON"};
		};
		class AutoCycleDist {
			text = "CYC-DIST";
			variable = "smgrAutoCyclehDist";
			values[] = {"10","50","100","500","1000"};
		};
	};

	class CfgMenus 
	{
		class MainMenu 
		{
			listBoxIdc = SMGR_IDC_MAINMENU_LIST;

			class ItemNav {
				text = "NAVIGATION";
				data = "Navigation";
			};
			class ItemWpList {
				text = "WAYPOINTS";
				data = "WpList";
			};
			class ItemDataLink {
				text = "DATA LINK";
				data = "DataLink";
			};
			class ItemSettings {
				text = "SETTINGS";
				data = "Settings";
			};
			class ItemStatus {
				text = "STATUS";
				data = "Status";
			};
		};

		class Datalink
		{
			listBoxIdc = SMGR_IDC_DATALINK_LIST;
			// items are generated dynamicly
		};

	};
	
	class Page {};

	class CfgViews
	{
		class Infobar {
			idc = SMGR_IDC_INFOBAR;
			updateFunction = "smgr_fnc_infobarUpdateView";
		};

		class Toolbar {
			idc = SMGR_IDC_TOOLBAR;
			updateFunction = "smgr_fnc_toolbarUpdateView";
		};

		class Popup {
			idc = SMGR_IDC_POPUP;
			updateFunction = "smgr_fnc_popupUpdateView";
		};

		class BootScreen : Page {
			idc = SMGR_IDC_BOOT_SCREEN;
			updateFunction = "smgr_fnc_bootScreenUpdateView";
		};

		class MainMenu : Page {
			idc = SMGR_IDC_MAINMENU;
			updateFunction = "smgr_fnc_mainMenuUpdateView";
			controller = "smgr_fnc_mainMenuController";
			toolbarLabels[] = {"","","","SEL"};
		};

		class Navigation : Page {
			idc = SMGR_IDC_NAVIGATION;
			updateFunction = "smgr_fnc_navigationUpdateView";
			controller = "smgr_fnc_navigationController";
			toolbarLabels[] = {"BACK","< WP","WP >","MODE"};
		};

		class WpList : Page {
			idc = SMGR_IDC_WPLIST;
			updateFunction = "smgr_fnc_wpListUpdateView";
			controller = "smgr_fnc_wpListController";
			toolbarLabels[] = {"BACK","CLEAR","EDIT","NEW"};
		};

		class EditWp : Page {
			idc = SMGR_IDC_EDITWP;
			updateFunction = "smgr_fnc_editWpUpdateView";
			controller = "smgr_fnc_editWpController";
			toolbarLabels[] = {"BACK","","","SAVE"};
		};

		class Settings : Page {
			idc = SMGR_IDC_SETTINGS;
			updateFunction = "smgr_fnc_settingsUpdateView";
			controller = "smgr_fnc_settingsController";
			toolbarLabels[] = {"BACK","","","EDIT"};
		};
		class EditSetting : Page {
			idc = SMGR_IDC_EDITSETTING;
			updateFunction = "smgr_fnc_editSettingUpdateView";
			controller = "smgr_fnc_editSettingController";
			toolbarLabels[] = {"","","","SAVE"};
		};

		class Datalink : Page {
			idc = SMGR_IDC_DATALINK;
			updateFunction = "smgr_fnc_datalinkUpdateView";
			controller = "smgr_fnc_datalinkController";
			toolbarLabels[] = {"BACK","","","CONN"};
		};

		class P2Plink : Page {
			idc = SMGR_IDC_P2PLINK;
			updateFunction = "smgr_fnc_p2pUpdateView";
			controller = "smgr_fnc_p2pController";
			toolbarLabels[] = {"BACK","","",""};
		};

		class LDlink : Page {
			idc = SMGR_IDC_LDLINK;
			updateFunction = "smgr_fnc_ldlinkUpdateView";
			controller = "smgr_fnc_ldlinkController";
			toolbarLabels[] = {"DISCO","","","CLEAR"};
		};

		class Status : Page {
			idc = SMGR_IDC_STATUS;
			updateFunction = "smgr_fnc_statusUpdateView";
			controller = "smgr_fnc_statusController";
			toolbarLabels[] = {"BACK","","",""};
		};
	};
};
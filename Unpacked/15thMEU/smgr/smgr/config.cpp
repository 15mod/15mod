class CfgPatches
{
	class GMS_SMGR
	{
		author[] = {"GMS","<G.I.D> Emperias","<G.I.D> Sacha","<G.I.D> Aito"};
		authorUrl = "http://www.clan-gid.fr";
		units[] = {};
		weapons[] = {"ItemSMGR"};
		requiredAddons[] = {};
	};
};

class RscPicture;
class RscControlsGroup;
class RscButton;
class RscShortcutButton;
class RscCombo;
class RscEdit;
class RscStructuredText;
class RscListBox;
class Attributes;
class VScrollbar;
class HScrollbar;
#include "functions\ui_id.hpp"
#include "ui\ui_constants.hpp"
#include "ui\ui_elements.hpp"
#include "ui\RscSmgr.hpp"
class RscTitles {
	#include "ui\RscSmgrHUD.hpp"
};

class CfgFunctions
{
	class smgr
	{
		class smgr
		{
			file = "smgr\functions";
			class postInit {postInit = 1;};
			class home {};
			class switchAutoCycle {};
			class mark {};
			class statusUpdateView {};
			class statusController {};
			class replaceBattery {};
			class keyPressed {};
			class consumePower {};
			class infobarUpdateView {};
			class unloadDialog {};
			class wpListUpdateView {};
			class wpListController {};
			class validateInputPosition {};
			class validateInputDistance {};
			class validateInputAzimuth {};
			class updateView {};
			class toolbarUpdateView {};
			class shutdown {};
			class showView {};
			class setToolbarLabels {};
			class settingsUpdateView {};
			class settingsController {};
			class setMapGridParameters {};
			class selectMenuEntry {};
			class saveWp {};
			class runGpsLoop {};
			class powerOnOff {};
			class positionToMapGrid {};
			class popupUpdateView {};
			class p2pUpdateView {};
			class p2pSendWaypoints {};
			class p2pReceiveWaypoints {};
			class p2pController {};
			class northingsToY {};
			class navigationUpdateView {};
			class navigationController {};
			class mapGridToPosition {};
			class mainMenuUpdateView {};
			class mainMenuController {};
			class loadDialog {};
			class ldlinkUpdateView {};
			class ldlinkController {};
			class ldlinkClear {};
			class initSettings {};
			class hideView {};
			class hideAllViews {};
			class hideAllPages {};
			class gpsUpdateMemory {};
			class gpsGetSentence {};
			class gpsCalculateError {};
			class getMenuItems {};
			class formatWp {};
			class formatPosition {};
			class formatFOM {};
			class formatElevation {};
			class formatDistance {};
			class formatAngle {};
			class fillMenuList {};
			class editWpUpdateView {};
			class editWpSave {};
			class editWpController {};
			class editSettingUpdateView {};
			class editSettingSave {};
			class editSettingController {};
			class eastingsToX {};
			class displayToolbar {};
			class displayPopup {};
			class displayPage {};
			class displayInfobar {};
			class deleteWp {};
			class datalinkUpdateView {};
			class datalinkController {};
			class cycleWp {};
			class cycleMode {};
			class controller {};
			class bootSequence {};
			class bootScreenUpdateView {};
			class arrayCycle {};
		};
	};
};

class CfgWeapons
{
	class Default;
	class ItemCore;

	class ItemSMGR: ItemCore
	{
		scope = 2;
		displayName = "AN/PNC-212 SMGR";
		descriptionUse = "Simple Military GPS Receiver";
		picture = "\smgr\data\gear_item_smgr_ca.paa";
		descriptionShort = "Simple Military GPS Receiver";
		class ItemInfo
		{
			mass = 2;
			type = 201;
		};
	};
};

class CfgSettings {
	class KeySMGR {
		class SMGR_Key_Settings {
			class keyOpenDlg {
					useActionKey = 1;
					actionKey = "User4";
			};
			class keyOpenHud {
					useActionKey = 1;
					actionKey = "User5";
			};
		};
	};
};

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
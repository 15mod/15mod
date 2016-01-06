////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jul 12 11:57:57 2015 : Created on Sun Jul 12 11:57:57 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class task_force_radio_items_15th : config.bin{
class CfgPatches
{
	class task_force_radio_items
	{
		units[] = {"tf_rt113g_wood_reg","tf_rt113g_wood_big","tf_rt113g_coyote_reg","tf_rt113g_coyote_big"};
		weapons[] = {"tf_prc113"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F","task_force_radio_items","A3_UI_F","A3_Structures_F_Items_Electronics","A3_Weapons_F_ItemHolders"};
		author[] = {"T. Montgomery [15th MEU(SOC)]"};
		authorUrl = "https://github.com/michail-nikolaev/task-force-arma-3-radio";
		version = "0.9.7.3";
		versionStr = "0.9.7.3";
		versionAr[] = {0,9,7,3};
	};
};
class RscStandardDisplay;
class RscControlsGroupNoScrollbars;
class RscHTML;
class RscDisplayMain: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayMain"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf"";_uriOffline = ""a3\Ui_f\data\news.html""; _uri = ""http://radio.task-force.ru/feed/index.php?language="" + language; _ctrlHTML = (_this select 0) displayCtrl 12314; _ctrlHTML htmlLoad _uri; _htmlLoaded = ctrlHTMLLoaded _ctrlHTML; if (!_htmlLoaded) then { _ctrlHTML htmlLoad _uriOffline; uinamespace setvariable [""BIS_fnc_guiNewsfeed_disable"",true]; };";
	class controls
	{
		class News: RscControlsGroupNoScrollbars
		{
			class controls
			{
				class NewsText: RscHTML
				{
					idc = 12314;
				};
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Item_Base_F;
	class Bag_Base: ReammoBox
	{
		tf_hasLRradio = 0;
		tf_encryptionCode = "";
		tf_range = 20000;
	};
	class TFAR_Bag_Base: Bag_Base
	{
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		scope = 1;
		scopeCurator = 1;
	};
	class tf_prc113: TFAR_Bag_Base
	{
		author = "Raspu, Gandi, Nkey";
		displayName = "AN/PRC-113";
		descriptionShort = "AN/PRC-113 long range radio 20km";
		picture = "\task_force_radio_15th\anprc113\anprc_113.paa";
		model = "\task_force_radio_items\models\clf_prc117g_ap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_ap_co.paa"};
		maximumLoad = 80;
		mass = 80;
		scope = 2;
		scopeCurator = 2;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "prc113_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class tf_rt113g_wood_reg: tf_prc113
	{
		displayName = "AN/PRC-113A WD Reg";
		descriptionShort = "AN/PRC-113A long range radio 5-20km";
		maximumLoad = 110;
		mass = 110;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items_15th\models\data\backpack_prc113_wood_co.paa"};
		model = "\task_force_radio_items\models\TFR_BACKPACK";
	};
	class tf_rt113g_wood_big: tf_prc113
	{
		displayName = "AN/PRC-113A WD Big";
		descriptionShort = "AN/PRC-113A long range radio 5-20km";
		maximumLoad = 160;
		mass = 160;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items_15th\models\data\backpack_big_prc113_wood_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	class tf_rt113g_coyote_reg: tf_prc113
	{
		displayName = "AN/PRC-113A CB Reg";
		descriptionShort = "AN/PRC-113A long range radio 5-20km";
		maximumLoad = 110;
		mass = 110;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items_15th\models\data\backpack_prc113_coyote_co.paa"};
		model = "\task_force_radio_items\models\TFR_BACKPACK";
	};
	class tf_rt113g_coyote_big: tf_prc113
	{
		displayName = "AN/PRC-113A CB Big";
		descriptionShort = "AN/PRC-113A long range radio 5-20km";
		maximumLoad = 160;
		mass = 160;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\task_force_radio_items_15th\models\data\backpack_big_prc113_coyote_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
};
class cfgMods
{
	author = "76561197982468872";
	timepacked = "1436695077";
};
//};

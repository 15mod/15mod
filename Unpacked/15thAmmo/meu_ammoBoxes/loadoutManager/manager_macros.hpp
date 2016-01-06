// 15th loadout manager 2
// fight9
// built on Riouken's framework

#define MEU_ADDON_ROOT			"\meu_ammoBoxes\"
#define MEU_LOADOUT_ROOT		"\meu_ammoBoxes\defaultLoadouts\"

// messages
#define MESSAGE_HEADER			(format ["<t color='%1' size='1.2' underline='1'>15TH LOADOUT MANAGER 2</t>",COLOR_MU_BG_HTML])
#define ACTION_NAME 			format ["<t size='1.1'><img image='%1' /> 15th Loadout Manager</t>",ICON_CRATE]

// Main Functions
#define FUNCTION_NAME 			meu_fnc_manager
#define CALL_FNC(SUB,PARAM) 	[SUB,PARAM] call FUNCTION_NAME
#define SPAWN_FNC(SUB,PARAM) 	[SUB,PARAM] spawn FUNCTION_NAME
#define STR_CALL_FUNC(SUB,PARAM) #[SUB,PARAM] call FUNCTION_NAME

// functions
#define MU_BG_TEXT(A)			(format ["<t color='%1'>%2</t>",COLOR_MU_BG_HTML,A])
#define WARN_TEXT(A)			(format ["<t color ='%1'>%2</t>",COLOR_WARNING_HTML,A])
#define ERROR_TEXT(A)			(format ["<t color ='%1'>%2</t>",COLOR_ERROR_HTML,A])
#define CTRL(CTRL)				(_display displayCtrl CTRL)
#define GUI_REFRESH(INDEX)		_n = CALL_FNC("listSaved",[INDEX]);_n = CALL_FNC("listGear",[]);_n = CALL_FNC("listDefault",[]);
#define QUOTE(A) 				#A
#define CHECK_TYPE(A,B)			typeName A == typeName B
#define STR_REPLACE(A,B,C)		(call {private "_i";_i = A find B;if (_i < 0) exitWith {A};(A select [0, _i]) + C + (A select [_i + count B])})

#define ICON_HELPTIPS			"\A3\ui_f\data\map\markers\military\warning_CA.paa"
#define ICON_FAVORITE			"\A3\ui_f\data\map\GroupIcons\badge_gs.paa"
#define ICON_CRATE				"\A3\ui_f\data\map\VehicleIcons\iconcrate_ca.paa" 
#define ICON_NOTINBOX			"\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"

// gui profile colors
#define COLOR_ERROR_HTML		(["IGUI","ERROR_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML
#define COLOR_WARNING_HTML		(["IGUI","WARNING_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML
#define COLOR_MU_BG_HTML		(["GUI","BCG_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML
#define COLOR_IG_BG_HTML		(["IGUI","BCG_RGB"] call bis_fnc_displaycolorget) call BIS_fnc_colorRGBtoHTML

#define COLOR_ERROR_ARRAY		["IGUI","ERROR_RGB"] call bis_fnc_displaycolorget
#define COLOR_WARNING_ARRAY		["IGUI","WARNING_RGB"] call bis_fnc_displaycolorget
#define COLOR_MU_BG_ARRAY		["GUI","BCG_RGB"] call bis_fnc_displaycolorget
#define COLOR_IG_BG_ARRAY		["IGUI","BCG_RGB"] call bis_fnc_displaycolorget

#define COLOR_ERROR_CONFIG		{"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.69])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.75])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.5])","(profilenamespace getvariable ['IGUI_ERROR_RGB_A',0.8])"}
#define COLOR_WARNING_CONFIG	{"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.69])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.75])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"}
#define COLOR_MU_BG_CONFIG		{"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"}
#define COLOR_IG_BG_CONFIG		{"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',0.5])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"}

// gear checks
#define ALLOWED_GOGGLES			["G_B_Diving","AV_ESS_blk","AV_ESS_blk_clr","AV_ESS_tan","AV_ESS_tan_clr","AV_ESS_grn","AV_ESS_grn_clr","G_Aviator","G_Shades_Green","G_Shades_Red","G_Shades_Black","G_Shades_Blue","G_Lowprofile","G_Sport_BlackWhite","G_Sport_Blackyellow","G_Sport_Red","G_Sport_Blackred"]
#define MEU_CLASS_EARBUDS		"ACE_EarPlugs" // "AGM_EarBuds"
#define MEU_EARBUD_CHECK		player getVariable ["ACE_hasEarPlugsin", false] // player getVariable ["AGM_hasEarPlugsin", false]
#define TFAR_CHECK				isClass (configfile >> "CfgPatches" >> "task_force_radio")
#define ACTION_CONDITION		"_this distance _target < 10 && {vehicle player == player}"
#define CHECK_LOADOUT(ARRAY)	( count ARRAY < 2 || {count (ARRAY select 1) < 1} ) 
#define GEAR(INDEX)				(_gear select INDEX)
#define ADD_RESTRICT_X(ITEM)	_restricted pushBack ITEM
#define CHECK_STRING_X(ITEM)	(ITEM != "")
#define CHECK_COUNT(INDEX)		(count GEAR(INDEX) > 0)
#define CHECK_CLASS(INDEX)		!(CALL_FNC("config",[ITEM]) isEqualTO "")
#define CHECK_BOX_X(ITEM)		(CHECK_CLASS(ITEM) && {!_checking || ITEM in _boxGear})
#define CHECK_IS_RADIO			("ItemRadio" in _parents && {!_checking || "ItemRadio" in _boxGear})
#define GET_PARENT(ITEM)		private ["_class","_parent"];_class = [ITEM] call BIS_fnc_classWeapon;_parents = [_class,true] call BIS_fnc_returnParents;

#define ADD_STRING(IND,SCRIPT) 		if CHECK_STRING_X(GEAR(IND)) then { \
										if CHECK_BOX_X(GEAR(IND)) then { \
											player SCRIPT GEAR(IND); \
										} else { \
											ADD_RESTRICT_X(GEAR(IND)) \
										}; \
									};
									
#define ADD_ITEMS(IND,SCRIPT)		if CHECK_COUNT(IND) then { \
										{ \
											if CHECK_STRING_X(_x) then { \
												if CHECK_BOX_X(_x) then { \
													player SCRIPT _x; \
												} else { \
													ADD_RESTRICT_X(_x); \
												}; \
											}; \
										} forEach GEAR(IND); \
									};
									
#define ADD_TO_OUTFIT(IND,SCRIPT)	if CHECK_COUNT(IND) then { \
										{ \
											GET_PARENT(_x); \
											if CHECK_IS_RADIO then { \
												player SCRIPT "ItemRadio"; \
											} else { \
												if CHECK_BOX_X(_x) then { \
													player SCRIPT _x; \
												} else { \
													ADD_RESTRICT_X(_x); \
												}; \
											}; \
										} forEach GEAR(IND); \
									};

// tooltip tips used randomly
#define MEU_HELP_TIPS			[ \
			"TIP: Double Click On A Saved Loadout To See The Items", \
			"TIP: The White X Denotes Gear That Is Not In The Box", \
			"TIP: You Can Quick Save By Holding CTRL When Clicking Save", \
			"TIP: Rename A Loadout By Holding CTRL And Double Clicking On It", \
			"CREDIT: The Original 15th Loadout Manager Was Created By Riouken", \
			"CREATORS: You Can Unlock The Box Restrictions With A Simple Variable", \
			"COLORS: The Colors Of The Manager Change With Your Arma Settings", \
			"UPDATE: Loaded Magazines And Batteries Are Now Saved", \
			"TIP: Take An Extra Laser Designator Battery To Save The Loaded One", \
			"TIP: The Group Icons Mark Favorite Loadouts (SHIFT + Double Click)", \
			"TIP: You Can Delete Saved Loadouts With The DEL Key" \
		]

#define MEU_HELP_HINT 	"<t color='#85a2af' size='1.2' underline='1'>15TH LOADOUT MANAGER 2</t><br /><br />15th AmmoBoxes come with a loadout manager. There are a few things you should know.<br /><br />Make your loadouts exactly how you want them. Including your radio frequencies.<br /><br /><t align='left'><t color='#015DC5'>Double Click</t> - View gear in saved loadout.<br /><t color='#015DC5'>CTRL + Double Click</t> - Rename Loadout.<br /><t color='#015DC5'>SHFT + Double Click</t> - Add to favorites.<br /><t color='#015DC5'>CTRL + Click Save</t> - Quick save loadout with the same name<br /><t color='#015DC5'>DEL</t> - Delete Loadout.</t><br /><br />Enjoy!"
		
// controls
#define MEU_CTRL_GEARTREE		15040
#define MEU_CTRL_SAVEDLIST		15041
#define MEU_CTRL_DEFAULTLIST	15042
#define MEU_CTRL_HELPTIP		15020
#define MEU_CTRL_FAVORITE		15021
#define MEU_CTRL_PREVTREE		15030
#define MEU_CTRL_PREVBG			15031
#define MEU_CTRL_PREVCLOSE		15032
#define MEU_CTRL_PREVTEXT		15033
#define MEU_CTRL_BUTTONLOAD		15050
#define MEU_CTRL_BUTTONDELETE	15051
#define MEU_CTRL_BUTTONDEFAULT	15052
#define MEU_CTRL_BUTTONSAVE		15053
#define MEU_CTRL_BUTTONCLOSE	15054
#define MEU_CTRL_SAVEBG			15060
#define MEU_CTRL_SAVEEDIT		15061
#define MEU_CTRL_SAVESAVE		15062
#define MEU_CTRL_SAVECANCEL		15063
#define MEU_CTRL_SAVETEXT		15064
#define MEU_CTRL_SAVECLEAR		15065
#define MEU_CTRL_SAVERENAME		15066

// groups
#define MEU_SAVE_GROUP 			[MEU_CTRL_SAVEBG,MEU_CTRL_SAVEEDIT,MEU_CTRL_SAVESAVE,MEU_CTRL_SAVECANCEL,MEU_CTRL_SAVETEXT,MEU_CTRL_SAVECLEAR,MEU_CTRL_SAVERENAME]
#define MEU_DISABLE_GROUP		[MEU_CTRL_GEARTREE,MEU_CTRL_SAVEDLIST,MEU_CTRL_DEFAULTLIST,MEU_CTRL_BUTTONSAVE,MEU_CTRL_BUTTONDEFAULT,MEU_CTRL_BUTTONDELETE,MEU_CTRL_BUTTONLOAD,MEU_CTRL_PREVTREE,MEU_CTRL_PREVBG,MEU_CTRL_PREVCLOSE,MEU_CTRL_PREVTEXT]
#define MEU_PREV_GROUP			[MEU_CTRL_PREVTREE,MEU_CTRL_PREVBG,MEU_CTRL_PREVCLOSE,MEU_CTRL_PREVTEXT]
#define MEU_EXTRA_BUTTONS		[MEU_CTRL_BUTTONDELETE,MEU_CTRL_BUTTONCLOSE,MEU_CTRL_BUTTONDEFAULT]
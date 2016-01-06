// 15th loadout manager 2
// fight9
// built on Riouken's framework

/* TODO
add option to remove defaults
 */

#include "manager_macros.hpp"

private ["_fnc","_params"];
disableSerialization;
_fnc = param [0,"init",[""]];
_params = param [1,[]];
_display = uiNamespace getVariable ["meu_managerGUI",displayNull];
_r = false;

switch (toLower _fnc) do {
	
	case "init": {
		// add action to box
		private ["_box","_id","_name","_favs"];
		_box = _params param [0,objNull,[objNull]];
		
		// main action
		_name = format ["<t color='%1'>%2</t>","#85a2af",ACTION_NAME];
		_id = _box addAction [_name,{ CALL_FNC("open",_this select 3); },[_box],6,true,true,"",ACTION_CONDITION];
		_box setVariable ["meu_loadoutManager",true];
		
		// get favorites list & add them to box
		_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
		{ 
			private "_blah"; 
			_blah = [_x,[_box]]; 
			SPAWN_FNC("favorites",_blah); 
		} forEach _favs;
				
		_r = _id;
	};
	
	case "open": {
		// open GUI & populate
		private ["_box","_diag","_display","_load"];
		// params
		_box = _params param [0,objNull,[objNull]];
		missionNamespace setVariable ["meu_managerBOX",_box];
		
		// diag
		_diag = createDialog "meu_loadoutManager";
		disableSerialization;		
		_display = uiNamespace getVariable ["meu_managerGUI",displayNull];
		
		// hide ctrls
		{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
		{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
		{ CTRL(_x) ctrlShow false; CTRL(_x) ctrlEnable false; } forEach MEU_EXTRA_BUTTONS;
		
		// populate	
		GUI_REFRESH(-1)
		
		// change icon tooltip & call advanced hint on mouse click
		CTRL(MEU_CTRL_HELPTIP) ctrlSetTooltip (MEU_HELP_TIPS select floor random count MEU_HELP_TIPS);
		CTRL(MEU_CTRL_HELPTIP) ctrlSetEventHandler ["MouseButtonClick",
			format [
				'
					uiNamespace setVariable ["BIS_fnc_advHint_hintHandlers",true];
					[["meu_manager","meu_usage"], 30,"", 20,"", true, true, false, true] call BIS_fnc_advHint;
					((uiNamespace getVariable "meu_managerGUI") displayCtrl %1) ctrlSetTooltip (%2 select floor random count %2);
				',
				MEU_CTRL_HELPTIP,
				MEU_HELP_TIPS
			]
		]; 
		// enable DEL key for saved list		
		CTRL(MEU_CTRL_SAVEDLIST) ctrlSetEventHandler ["keyDown",
			"if (_this select 1 in [211]) then {[""buttons"",[(uiNamespace getVariable 'meu_managerGUI') displayCtrl 15051]] call meu_fnc_manager;};"				
		];
		
		_r = _diag;
	};
	
	case "listgear": {
		// add gear to tree
		private ["_tree","_gear","_expand","_fnc_tvParentAdd","_fnc_tvChildAdd","_fnc_tvParantAndChild","_fnc_picture","_checking"];
		_tree = _params param [0,CTRL(MEU_CTRL_GEARTREE)];
		_gear = _params param [1,CALL_FNC("playerGear",[])];
		
		// get box gear for preview
		_boxGear = CALL_FNC("boxGear",[]);
		
		// if current gear list, then expand trees.. also controls _fnc_picture's X's 
		_expand = ctrlIDC _tree == MEU_CTRL_GEARTREE;
		_checking = meu_managerBOX getVariable ["meu_boxRestrictions",true];
		tvClear _tree;
		
		_fnc_picture = {
			// if showing saved loadout, only show picture if item is in the box
			GET_PARENT(_this);
			if CHECK_IS_RADIO exitWith {(getText (configFile >> _config >> _this >> "picture"))};
			if (!_expand && {_checking} && {!(_this in _boxGear)}) exitWith {ICON_NOTINBOX};
			(getText (configFile >> _config >> _this >> "picture"))
		};	
		_fnc_tvParantAndChild = {
			// checks for gear before running parent and child fncs
			private ["_parentGear","_childGear"];
			_parentGear = _this select 0;
			_childGear = _this select 1;
			if (_parentGear != "") then {
				private ["_parent","_child"];
				_parent = [_parentGear] call _fnc_tvParentAdd;
				if (_parent isEqualTo false) exitWith {false};
				if (count _childGear > 0) then {
					_child = [_parent,_childGear] call _fnc_tvChildAdd;
				};
			};
			true
		};
		_fnc_tvParentAdd = {
			// adds to tree and returns parent 
			private ["_gear","_config","_parent"];
			_gear = _this select 0;
			_config = CALL_FNC("config",[_gear]);
			if (_config isEqualTo "") exitWith {false};
			_parent = _tree tvAdd [ [], getText (configFile >> _config >> _gear >> "displayname") ];
			_tree tvSetPicture [ [_parent], _gear call _fnc_picture ];
			if _expand then {
				_tree tvExpand [_parent];
			};
			_parent
		};
		_fnc_tvChildAdd = {
			// loops through child gear adding to parent
			private ["_parent","_gear"];
			_parent = _this select 0;
			_gear = _this select 1;
			{
				if (_x != "") then {
					private ["_config","_child"];
					_config = CALL_FNC("config",[_x]);
					if !(_config isEqualTo "") then {
						_child = _tree tvAdd [ [_parent], getText (configFile >> _config >> _x >> "displayname") ];
						_tree tvSetPicture [ [_parent,_child], _x call _fnc_picture ];
					};
				};
			} forEach _gear;
			true
		};
		// list goggles with assigned
		_assigned = +GEAR(6);
		_assigned pushBack GEAR(1);
		// add to tree		
		{ _x call _fnc_tvParantAndChild; } forEach [
			[_gear select 9,_gear select 10], 	// primary, Items
			[_gear select 13,_gear select 14], 	// handgun, items
			[_gear select 11,_gear select 12], 	// launcher, item
			[_gear select 2,_gear select 3], 	// uniform, items
			[_gear select 4,_gear select 5], 	// vest, items
			[_gear select 7,_gear select 8], 	// pack, items
			[_gear select 0,_assigned]			// headgear, assigned+goggles
		];
		// list freqs
		if (TFAR_CHECK) then {
			if (count _gear > 15) then {
				private ["_parent","_childA","_childB"];
				_parent = _tree tvAdd [ [], "Radio Presets" ];
				_tree tvSetPicture [ [_parent],"\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa" ];
				if CHECK_COUNT(15) then {
					_childA = _tree tvAdd [ [_parent], "Short Range" ];
					{
						private "_gChild";
						_gChild = _tree tvAdd [ [_parent,_childA], _x ];
					} forEach GEAR(15);
				};
				if CHECK_COUNT(16) then {
					_childB = _tree tvAdd [ [_parent], "Long Range" ];
					{
						private "_gChild";
						_gChild = _tree tvAdd [ [_parent,_childb], _x ];
					} forEach GEAR(16);
				};
			};
		};
		
		_r = true;
	};
	
	case "listsaved": {
		// list saved loadouts
		private ["_savedList","_index","_favs"];
		_index = _params param [0,lbCurSel CTRL(MEU_CTRL_SAVEDLIST)];
		_savedList = CTRL(MEU_CTRL_SAVEDLIST);
		// loop through vars, get names & add to array
		meuLoadOuts = [];
		for "_num" from 1 to 20 do {
			call compile format ["
				meu_Lo_%1 = profileNamespace getVariable [""meu_Lo_%1"",[]];
				if ((count meu_Lo_%1) == 0) then {
					profileNamespace setVariable [""meu_Lo_%1"",[""Empty Loadout %1""]];
					meu_Lo_%1 = profileNamespace getVariable [""meu_Lo_%1"",[]]; 
				};
				meuLoadOuts pushBack meu_LO_%1;
				",
				_num
			];		
		};
		_favs = profileNamespace getVariable ["meu_LO_favs",[]];
		// clear, remove selected, reset text color
		lbClear _savedList;
		_savedList lbSetCurSel -1; 
		_savedList ctrlSetTextColor (COLOR_WARNING_ARRAY);
		// add to listBox
		{
			private ["_index","_num"];
			_num = _forEachIndex + 1;
			_index = _savedList lbAdd (_x select 0);
			// if empty, grey text
			if CHECK_LOADOUT(_x) then {
				_savedList lbSetColor [_index,[1,1,1,0.25]];
			};
			// if in favs, add icon
			if (_num in _favs) then {
				_savedList lbSetPicture [_index,ICON_FAVORITE];
			};
		} forEach meuLoadOuts;
		// set selected again
		if (_index > -1) then {
			_savedList lbSetCurSel _index;
		};
		_r = true;
	};
	
	case "listdefault": {
		// list configured default loadouts
		private ["_defaultList","_cfg"];
		
		_defaultList = CTRL(MEU_CTRL_DEFAULTLIST);
		lbClear _defaultList;
		_defaultList lbSetCurSel -1;
		// get configured loadouts
		_cfg = configFile >> "CfgVehicles" >> typeOf meu_managerBOX;
		if (isArray (_cfg >> "MEU_LOADOUTS")) then {
			private "_array";
			_array = getArray (_cfg >> "MEU_LOADOUTS");
			// add names to listBox
			{
				private "_index";	// remove "loadout" from name
				_index = _defaultList lbAdd STR_REPLACE(_x select 0,"Loadout","");
				_defaultList lbSetData [_index,_x select 1];
			} forEach _array;
		} else {
			// no loadouts, disable ctrls
			_defaultList lbAdd "No Defaults";
			_defaultList ctrlEnable false;
			CTRL(MEU_CTRL_BUTTONDEFAULT) ctrlEnable false;
		};
				
		_r = true;
	};
	
	case "playergear": {
		// return all player gear
		private["_meu_xtendMag","_meu_headgear","_meu_goggles","_meu_uniform","_meu_uniformitems","_meu_vest","_meu_vestitems","_meu_asgnItems","_meu_backpack","_meu_packitems","_meu_PrimaryGun","_meu_pgunitems","_meu_SecondaryGun","_meu_sgunitems","_meu_handgun","_meu_handgunitems","_meu_swFreqs","_meu_lrFreqs"];
		_r = [];
		
		_meu_headgear = headgear player;	
		_meu_goggles = Goggles player;
		_meu_uniform = uniform player;
		_meu_uniformitems = uniformItems player;
		_meu_vest = vest player;
		_meu_vestitems = vestItems player;
		_meu_asgnItems = assignedItems player;		
		_meu_backpack = backpack player;
		_meu_packitems = backpackItems player;		
		_meu_PrimaryGun = primaryWeapon player;
		_meu_pgunitems = primaryWeaponItems player;
		_meu_SecondaryGun = secondaryWeapon player;
		_meu_sgunitems = secondaryWeaponItems player;				
		_meu_handgun = handgunWeapon player;
		_meu_handgunitems = handgunItems player;
		
		// add loaded magazines as weapon items
		_meu_xtendMag = magazinesAmmoFull player;
		{
			switch (toLower (_x select 4)) do {
				case (toLower _meu_PrimaryGun): {_meu_pgunitems pushBack (_x select 0);};
				case (toLower _meu_SecondaryGun): {_meu_sgunitems pushBack (_x select 0);};
				case (toLower _meu_handgun): {_meu_handgunitems pushBack (_x select 0);};
				default {};
			};	
		} forEach _meu_xtendMag;
		
		// if there is a laser designator in assigned items
		if ( { 
				([(configFile >> (CALL_FNC("config",[_x])) >> _x),"optics",0] call BIS_fnc_returnConfigEntry) > 0
			} count _meu_asgnItems > 0		
		) then {
			// add one extra battery to container if it has one already - compensates for lost loaded one
			{ 
				if ("Laserbatteries" in _x) exitWith { _x pushBack "Laserbatteries"; };
			} forEach [_meu_uniformitems,_meu_vestitems,_meu_packitems];
		};
		
		// if has installed earbuds 
		if (MEU_EARBUD_CHECK) then { _meu_uniformitems pushBack MEU_CLASS_EARBUDS };
		
		// get weapon items from packed weapons
		private "_packWeps";
		_packWeps = weaponsItemsCargo (backpackContainer player);
		if !(isNil "_packWeps") then {	
			{	
				for "_i" from 1 to (count _x - 1) do {
					private "_item";
					_item = if ( CHECK_TYPE((_x select _i),[]) ) then {
						(_x select _i) select 0
					} else {
						_x select _i
					};
					if (_item != "") then { _meu_packitems pushBack _item };
				};
			} forEach _packWeps;
		};
		
		// get radio frequencies
		_meu_swFreqs = [];
		_meu_lrFreqs = [];
		if (TFAR_CHECK) then {
			if (call TFAR_fnc_haveSWRadio) then {
				_swSet = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
				if !(isNil "_swSet") then {
					_meu_swFreqs = _swSet select 2;
				};
			};
			if (call TFAR_fnc_haveLRRadio) then {
				_lrSet = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;
				if !(isNil "_lrSet") then {
					_meu_lrFreqs = _lrSet select 2;
				};
			};
		};
		
		_r = [_meu_headgear,_meu_goggles,_meu_uniform,_meu_uniformitems,_meu_vest,_meu_vestitems,_meu_asgnItems,_meu_backpack,_meu_packitems,_meu_PrimaryGun,_meu_pgunitems,_meu_SecondaryGun,_meu_sgunitems,_meu_handgun,_meu_handgunitems,_meu_swFreqs,_meu_lrFreqs];
		
	};
	
	case "boxgear": {
		// return all gear in box
		private ["_box", "_mags","_weps","_items","_rucks","_allGear"];
	
		_box = meu_managerBOX;
		_mags = getMagazineCargo _box;
		_weps = getWeaponCargo _box;
		_items = getItemCargo _box;
		_rucks = getBackpackCargo _box;
		_allGear = [] + (_mags select 0) + (_weps select 0) + (_items select 0) + (_rucks select 0);
		_allGear append ALLOWED_GOGGLES; // add goggles to box items
		_r = _allGear
	};
	
	case "buttons": {
		// handle GUI buttons per IDC
		private ["_button","_return"];
		_button = _params param [0,controlNull];
		_return = false;
				
		switch (ctrlIDC _button) do {
			
			// main save button
			case MEU_CTRL_BUTTONSAVE: {
				private "_heldCtrl";
				_heldCtrl = _params param [5,false];
				// show save contrls			
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {				
					private ["_text","_empty"];
					
					// get text from list and set on edit box
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_text = CTRL(MEU_CTRL_SAVEDLIST) lbText _index;
					_empty = format ["Empty Loadout %1",_index + 1];
					if (_text == _empty) then {
						_text = STR_REPLACE(_text,"Empty ",""); 
					};
					CTRL(MEU_CTRL_SAVEEDIT) ctrlSetText _text;
					
					// if ctrl is held, skip ctrlShow & call save action
					if _heldCtrl exitWith { 
						private "_quick";
						_quick = ["buttons",[CTRL(MEU_CTRL_SAVESAVE)]] call FUNCTION_NAME; 
						_return = true;
					};
					
					// show & disable groups
					{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
					{ CTRL(_x) ctrlShow true } forEach MEU_SAVE_GROUP;
					CTRL(MEU_CTRL_SAVERENAME) ctrlShow false; // disabled rename save
					{ CTRL(_x) ctrlEnable false } forEach MEU_DISABLE_GROUP;
					CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor [1,1,1,0.25]; // disabled color
					
					ctrlSetFocus CTRL(MEU_CTRL_SAVESAVE);
					
					_return = true;
				} else {
					private "_m";
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_return = false;
				};
			};
			
			// save cancel button
			case MEU_CTRL_SAVECANCEL: { 
				// close save controls			
				{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
				{ CTRL(_x) ctrlEnable true } forEach MEU_DISABLE_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor (COLOR_WARNING_ARRAY); // tree text color
				_return = false;
			};	
			
			// save button/ pressing enter
			case MEU_CTRL_SAVEEDIT; 
			case MEU_CTRL_SAVESAVE: { 
				// get ctrl text and save to profile				
				private ["_index","_variable","_name","_gear","_array","_refresh","_empty"];
								
				// set focus away from close button
				ctrlSetFocus CTRL(MEU_CTRL_HELPTIP); // stop close button getting hit
				
				// rename save button is shown
				if (ctrlShown CTRL(MEU_CTRL_SAVERENAME)) exitWith {
					private "_rename";
					_rename =["buttons",[CTRL(MEU_CTRL_SAVERENAME)]] call FUNCTION_NAME; 
					_return = true;
				};
				
				// name
				_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
				_variable = format ["meu_Lo_%1",_index + 1];
				_empty = format ["Empty Loadout %1",_index + 1];
				
				// data
				_name = ctrlText CTRL(MEU_CTRL_SAVEEDIT);	
				if (_name == "") exitWith { _m = ["message",[WARN_TEXT("Please enter a name."),[]]] call FUNCTION_NAME; };
				// if they left default empty name
				if (_name == _empty) then {
					_name = STR_REPLACE(_text,"Empty ",""); 
				};
				
				_gear = CALL_FNC("playerGear",[]);
				_array = [_name,_gear];
				
				// save
				profileNamespace setVariable [_variable,_array];
				saveProfileNamespace;
				
				// refresh
				{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
				{ CTRL(_x) ctrlEnable true } forEach MEU_DISABLE_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor (COLOR_WARNING_ARRAY); // tree text color
				
				GUI_REFRESH(_index)
				
				// message
				_m = ["message",[format ["Loadout was saved:<br/><br/>%1",WARN_TEXT(_name)],[]]] call FUNCTION_NAME;
				
				_return = true;
			};	
			
			// main delete button
			case MEU_CTRL_BUTTONDELETE: { 
				// delete selected loadout
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {
					private ["_index","_variable","_name","_old","_loadoutNo","_favs","_found"];
					// format new data
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_old = CTRL(MEU_CTRL_SAVEDLIST) lbText _index;
					_variable = format ["meu_Lo_%1",_index + 1];
					_name = format ["Empty Loadout %1",_index + 1];
					
					// look for LO in favs
					_loadoutNo = _index + 1;
					_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
					_found = _favs find _loadoutNo;
					if (_found > -1) then {
						private ["_blah","_removeFavs"];
						// if found, make Number negative, remove from array
						_loadoutNo = _loadoutNo * -1;
						_favs deleteAt _found;					
						// call fnc
						_blah = [_loadoutNo,(allMissionObjects "Reammobox_F")]; 
						_removeFavs = CALL_FNC("favorites",_blah);
						profileNamespace setVariable ["meu_Lo_favs",_favs];
					};
					
					// save
					profileNamespace setVariable [_variable,[_name,[]]];
					saveProfileNamespace;
					
					
					
					// refresh
					{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
					
					_m = ["message",[format ["Loadout was deleted:<br/><br/>%1",ERROR_TEXT(_old)],[]]] call FUNCTION_NAME;
					
					GUI_REFRESH(-1)
					_return = true;
				} else {
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_return = false;
				};
			};
			
			// double clicking saved gear
			case MEU_CTRL_SAVEDLIST: {
				private ["_heldCtrl","_heldShft"];
				_heldShft = _params param [4,false];
				_heldCtrl = _params param [5,false];
				
				// if SHIFT was held, exit with calling favorites fnc
				if _heldShft exitWith { 
					private "_quick";
					_quick = ["buttons",[CTRL(MEU_CTRL_FAVORITE)]] call FUNCTION_NAME; 
					_return = true;
				};
				
				// display the saved loadout
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {
					private ["_index","_variable","_name","_savedList"];
					// format new data
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_variable = format ["meu_Lo_%1",_index + 1];				
					_array = profileNamespace getVariable [_variable,[]];
					// check
					if CHECK_LOADOUT(_array) exitWith {
						_m = ["message",[WARN_TEXT("The selected slot is empty."),[]]] call FUNCTION_NAME;
						_return = false;
					};
					
					// if CTRL was held, exit with showing name save controls
					if _heldCtrl exitWith {	
						private "_text";					
						_text = CTRL(MEU_CTRL_SAVEDLIST) lbText (lbCurSel CTRL(MEU_CTRL_SAVEDLIST));
						meu_renameIndex = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
						// hide/show ctrls
						{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
						{ CTRL(_x) ctrlShow true } forEach MEU_SAVE_GROUP;
						CTRL(MEU_CTRL_SAVESAVE) ctrlShow false; // hide gear save
						{ CTRL(_x) ctrlEnable false } forEach MEU_DISABLE_GROUP;
						CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor [1,1,1,0.25]; // disabled color
						// get list text and set on RscEdit
						CTRL(MEU_CTRL_SAVEEDIT) ctrlSetText _text;
						ctrlSetFocus CTRL(MEU_CTRL_SAVESAVE);
						_return = true;
					};
				
					// show saved gear preview
					{ CTRL(_x) ctrlShow true } forEach MEU_PREV_GROUP;
					_gear = ["listGear",[CTRL(MEU_CTRL_PREVTREE),_array select 1]] call FUNCTION_NAME;
					ctrlSetFocus CTRL(MEU_CTRL_PREVCLOSE);
					CTRL(MEU_CTRL_PREVTEXT) ctrlSetText (_array select 0);
					{ CTRL(_x) ctrlEnable false; } forEach [MEU_CTRL_GEARTREE,MEU_CTRL_PREVBG];
								
					_return = true;
				} else {
					_m = ["message",[WARN_TEXT("Please select a save slot."),[]]] call FUNCTION_NAME;
					_return = false;
				};
			};
			
			// rename save button
			case MEU_CTRL_SAVERENAME: {			
				private ["_index","_variable","_array","_name","_LO","_favs"];
				// data
				_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
				if (_index == -1) then {_index = meu_renameIndex;};
				_variable = format ["meu_Lo_%1",_index + 1];
				_array = profileNamespace getVariable [_variable,[]];
				
				// name
				_name = ctrlText CTRL(MEU_CTRL_SAVEEDIT);	
				if (_name == "") exitWith { _m = ["message",[WARN_TEXT("Please enter a name."),[]]] call FUNCTION_NAME; };
				
				// save
				_array set [0,_name];
				profileNamespace setVariable [_variable,_array];
				saveProfileNamespace;
				
				// rename favorites
				_LO = _index + 1;
				_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
				if (_LO in _favs) then {
					{	// rename on all boxes
						// if has manager
						if ( _x getVariable ["meu_loadoutManager",false] ) then {
							private ["_index","_box_favs"];
							_box_favs = _x getVariable ["meu_loadoutManager_favs",[]];
							// get sub array index 
							_index = -1;
							{ 
								if (_x select 0 == _LO) then {_index = _forEachIndex};
							} forEach _box_favs;
							// rename action
							if (_index > -1) then {
								private ["_text","_id"];
								_id = (_box_favs select _index) select 1;
								_text = format ["<img image='%2' /> %1",_name,ICON_FAVORITE];
								_x setUserActionText [_id,WARN_TEXT(_text)];
							};
						};
					} forEach (allMissionObjects "Reammobox_F");
				};
				
				// refresh
				{ CTRL(_x) ctrlShow false } forEach MEU_SAVE_GROUP;
				{ CTRL(_x) ctrlEnable true } forEach MEU_DISABLE_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlSetTextColor (COLOR_WARNING_ARRAY);// tree text color
				meu_renameIndex = nil;
				GUI_REFRESH(_index)
				_return = true;
			};
			
			// gear preview close
			case MEU_CTRL_PREVCLOSE: {
				// hide preview group
				{ CTRL(_x) ctrlShow false } forEach MEU_PREV_GROUP;
				CTRL(MEU_CTRL_GEARTREE) ctrlEnable true;
				_return = true;
			};
			
			// set favorite
			case MEU_CTRL_FAVORITE: {
				if ( lbCurSel CTRL(MEU_CTRL_SAVEDLIST) >= 0 ) then {
					private ["_index","_variable","_array","_favs","_loadoutNo","_found","_fnc","_adjFavs"];
					// format new data
					_index = lbCurSel CTRL(MEU_CTRL_SAVEDLIST);
					_variable = format ["meu_Lo_%1",_index + 1];				
					_array = profileNamespace getVariable [_variable,[]];
					// check
					if CHECK_LOADOUT(_array) exitWith {
						_m = ["message",[WARN_TEXT("The selected slot is empty."),[]]] call FUNCTION_NAME;
						_return = false;
					};
					// get array
					_loadoutNo = _index + 1;
					_favs = profileNamespace getVariable ["meu_Lo_favs",[]];
					
					// look for No in favs array
					_found = _favs find _loadoutNo;
					if (_found > -1) then {
						// if found, make Number negative, remove from array
						_loadoutNo = _loadoutNo * -1;
						_favs deleteAt _found;
					} else {
						// else, add to array
						_favs pushBack _loadoutNo;
					};
					// call fnc
					_fnc = [_loadoutNo,(allMissionObjects "Reammobox_F")]; 
					_adjFavs = CALL_FNC("favorites",_fnc);
					
					// save array
					profileNamespace setVariable ["meu_Lo_favs",_favs];
					saveProfileNamespace;
					
					GUI_REFRESH(_index)
										
					_return = true;
				} else {
					_m = [WARN_TEXT("Please select a save slot."),[]];
					_m = CALL_FNC("message",_m);
					_return = false;
				}; 
				
			};
			
			default {hint format ["ERROR: _button was %1",_button];};
		};
		
		_r = _return;
	};
	
	case "loadsaved": {
		// load gear from saved
		private ["_index","_name","_array","_gear","_checking","_boxGear","_restricted"];
		// get array from selected index or send loadout number & box
		_index = _params param [0,(lbCurSel CTRL(MEU_CTRL_SAVEDLIST)),[0]];
		//_box = _params param [1,meu_managerBOX];
		_box = _params param [1,(missionNamespace getVariable ["meu_managerBOX",objNull])];
		missionNamespace setVariable ["meu_managerBOX",_box]; // define for favorites
		//meu_managerBOX = _box;
		
		// no selection
		if (_index < 0) exitWith {
			// check for default selection
			if (lbCurSel CTRL(MEU_CTRL_DEFAULTLIST) > -1) then {
				private "_default";
				_default = CALL_FNC("loadDefault",[]);
				_r = true;
			} else {
				_m = ["message",[WARN_TEXT("Please select a loadout."),[]]] call FUNCTION_NAME; 		
				_r = false;
			};
		};
		// data
		_name = format ["meu_Lo_%1",_index + 1];
		_array = profileNamespace getVariable [_name,[]];	
		
		// checks
		if CHECK_LOADOUT(_array) exitWith {
			_m = ["message",[WARN_TEXT("The selected slot is empty."),[]]] call FUNCTION_NAME;
			_r = false;
		};
		
		// the gear
		_gear = _array select 1;

		_checking = _box getVariable ["meu_boxRestrictions",true];
		_boxGear = CALL_FNC("boxGear",[]);
		
		_restricted = [];
		// clear current gear
		removeAllWeapons player;
		removeAllAssignedItems player;
		removeAllItems player;
		removeBackpack player;
		removeUniform player;
		removeVest player;
		removeHeadgear player;
		
		/*
		_meu_headgear = _gear select 0; //
		_meu_goggles = _gear select 1; //
		_meu_uniform = _gear select 2; //
		_meu_uniformitems = _gear select 3; //
		_meu_vest = _gear select 4; // 
		_meu_vestitems = _gear select 5; //
		_meu_asgnItems = _gear select 6; //
		_meu_backpack = _gear select 7; //
		_meu_packitems = _gear select 8; //
		_meu_PrimaryGun = _gear select 9; //
		_meu_pgunitems = _gear select 10; //
		_meu_SecondaryGun = _gear select 11; //
		_meu_sgunitems = _gear select 12; //
		_meu_handgun = _gear select 13; //
		_meu_handgunitems = _gear select 14; //
		_meu_swFreqs = _gear select 15; // <-- new
		_meu_lrFreqs = _gear select 16; // <-- new
		*/	
		
		// set radio variables
		if (TFAR_CHECK) then { // has tfar
			if (count _gear > 15) then { // has new array size
				private ["_swFreq","_lrFreq"];
				if CHECK_COUNT(15) then { // has freqs saved
					_swFreq = false call TFAR_fnc_generateSwSettings;
					_swFreq set [2,GEAR(15)]; // set 3rd element with saved freqs array
					(group player) setVariable ["tf_sw_frequency", _swFreq];
				};
				if CHECK_COUNT(16) then {
					_lrFreq = false call TFAR_fnc_generateLrSettings;
					_lrFreq set [2,GEAR(16)];
					(group player) setVariable ["tf_lr_frequency",_lrFreq];
				};
			};
		};
		
		// add string items
		ADD_STRING(0,addHeadGear);
		ADD_STRING(1,addGoggles);
		ADD_STRING(2,forceAddUniform);
		ADD_STRING(4,addVest);
		ADD_STRING(7,addBackpack);
		ADD_STRING(9,addWeapon);
		ADD_STRING(11,addWeapon);
		ADD_STRING(13,addWeapon);
		
		// add array weapon items
		ADD_ITEMS(10,addPrimaryWeaponItem);
		ADD_ITEMS(12,addSecondaryWeaponItem);
		ADD_ITEMS(14,addHandgunItem);
		
		// add array outfit items
		ADD_TO_OUTFIT(3,addItemToUniform);
		ADD_TO_OUTFIT(5,addItemToVest);
		clearAllItemsFromBackpack player;
		ADD_TO_OUTFIT(8,addItemToBackpack);	
					
		// add assigned items
		if CHECK_COUNT(6) then {
			{
				GET_PARENT(_x);
				if CHECK_IS_RADIO then { 
					player linkItem "ItemRadio";
				} else {
					if CHECK_BOX_X(_x) then {
						//private ["_binos"];
						//_binos = [(configFile >> (CALL_FNC("config",[_x])) >> _x),"optics",0] call BIS_fnc_returnConfigEntry;
						//if (_binos > 0) then {
						if (([(configFile >> (CALL_FNC("config",[_x])) >> _x),"optics",0] call BIS_fnc_returnConfigEntry) > 0) then {
							player addWeapon _x;
							player assignItem _x; 
						} else {
							player linkItem _x;
						};
					} else { 
						ADD_RESTRICT_X(_x); 
					};
				};
			} foreach GEAR(6);
		};
		
		// error message
		if (count _restricted > 0) then {
			_m = [ERROR_TEXT("Gear Not Available:"),_restricted];
			_m = CALL_FNC("message",_m);
		} else { 
			// or clear any previous hint
			hint ""; 
		};
		
		// refresh list
		GUI_REFRESH(_index)
		
		_r = true;	
	};
		
	case "loaddefault": {
		private ["_defaultList","_gearTree","_index","_file","_gear","_null"];
		// ctrls
		_defaultList = CTRL(MEU_CTRL_DEFAULTLIST);
		
		// get data string
		_index = lbCurSel _defaultList;
		_file = _defaultList lbData _index;
		
		// check
		if (_index < 0 || {_file == ""}) exitWith {
			_m = ["message",[WARN_TEXT("Please select a loadout."),[]]] call FUNCTION_NAME;
			_r = false	
		};
		
		// execVM file
		_null = _file spawn {
			private "_handle";
			_handle = [nil,player] execVM (MEU_LOADOUT_ROOT + _this);
			waitUntil { scriptDone _handle };
			
			// clear any hint
			Hint "";
						
			// refresh list
			GUI_REFRESH(-1)
		};
		
		_r = true;
	};
	
	case "config": {
		// return config class of item
		private["_item","_config"];
		_item = _params param [0,""];
		_config = call {
			if (isClass (configFile >> "CfgMagazines" >> _item)) exitWith {"CfgMagazines"};
			if (isClass (configFile >> "CfgWeapons" >> _item)) exitWith {"CfgWeapons"};
			if (isClass (configFile >> "CfgVehicles" >> _item)) exitWith {"CfgVehicles"};
			if (isClass (configFile >> "CfgGlasses" >> _item)) exitWith {"CfgGlasses"};
			""
		};
		_r = _config;
	};
	
	case "message": {
		// formatted messages
		private ["_message","_gear","_text"];
		_message = _params param [0,""];
		_gear = _params param [1,[]];
		
		_header = parseText MESSAGE_HEADER;
		_message = parseText format ["<t size='1.1' shadow='1'>%1</t>",_message];
		_text = composeText [_header,linebreak,linebreak,_message,linebreak];
		
		{
			private ["_config","_pic","_name"];
			_config = CALL_FNC("config",[_x]);
			if !(_config isEqualTo "") then {
				_name = getText (configFile >> _config >> _x >> "displayname");
				_pic = getText (configFile >> _config >> _x >> "picture");
				//_text = composeText [_text,lineBreak,image _pic," ",_name];
			} else {
				_name = parseText format ["<t color='%2'>%1 - CLASS NOT FOUND</t>",_x,COLOR_ERROR_HTML];
				_pic = ICON_NOTINBOX;
				//_text = composeText [_text,lineBreak,image _pic," ",_name];
			};
			_text = composeText [_text,lineBreak,image _pic," ",_name];
		} forEach _gear;
	
		hint _text;
		_r = true;
	};
	
	case "favorites": {
		// handle favorites / positive number to add, negative to remove	
		private ["_num","_boxes"];
		// params
		_num = _params param [0,-1];
		_boxes = _params param [1,[]];
		
		// run on all sent boxes
		{
			private ["_box_favs"];
			// check for manager
			if ( _x getVariable ["meu_loadoutManager",false] ) then {
				// get favs array
				_box_favs = _x getVariable ["meu_loadoutManager_favs",[]];
				if (_num >= 0) then {
					// add to box
					private ["_var","_array","_text","_id"];
					_var = format ["meu_Lo_%1",_num];
					_array = profileNamespace getVariable [_var,[]];
					// check array size
					if (count _array == 2 && (count (_array select 1) > 0)) then {
						// add action
						_text = format ["<img image='%2' /> %1",(_array select 0),ICON_FAVORITE];
						_id = _x addAction [
							WARN_TEXT(_text),
							{ ["loadSaved",(_this select 3)] call FUNCTION_NAME; },
							[(_num - 1),_x],
							5,
							true,
							true,
							"",
							ACTION_CONDITION
						];
						_box_favs pushBack [_num,_id];
					};
					
				} else {
					// remove from boxes
					private ["_LO","_index","_id"];
					_LO = abs _num;
					// find loadout in favs
					_index = -1;
					{ 
						if (_x select 0 == _LO) then {_index = _forEachIndex};
					} forEach _box_favs;
					if (_index > -1) then {
						// remove loadout
						_id = (_box_favs select _index) select 1;
						_x removeAction _id;
						_box_favs deleteAt _index;
					};
				};
				// save new array
				_x setVariable ["meu_loadoutManager_favs",_box_favs];
				
			};
		} forEach _boxes;
		
		
		_r = true;
	};

};

_r
 
 
 
 
sleep 0.1;
//hintsilent "Towing system initializing...";
call compile preprocessfile "JDG_carrier\scr\dll_tow\config.sqf";

_logic = _this;
//create functions
waituntil {!isnil "bis_fnc_init"};
dll_tow = compile preprocessfile "JDG_carrier\scr\dll_tow\tow.sqf";
dll_tow_bbox = compile preprocessfile "JDG_carrier\scr\dll_tow\bbox.sqf";
_objs = nearestObjects [position _logic, dll_tow_classlist, dll_tow_search_radius];
//_objs = position _logic nearEntities [dll_tow_classlist, dll_tow_search_radius]; //does not find static objs
{	
	//try to find the class or a base of it in the deflist
	dll_tow_i = -1;
	dll_tow_class = typeOf(_x);
	//go trough config backwards
	while {(dll_tow_i < 0) && (dll_tow_class != "All")} do {
			dll_tow_i = dll_tow_classlist find dll_tow_class;
			if(dll_tow_debug) then {hintsilent format["type: %1", dll_tow_class];};
		 	dll_tow_class = configname (inheritsFrom (configFile >> "CfgVehicles" >> dll_tow_class));		 
	};
	
	if(dll_tow_i > -1) then{
		_def = dll_tow_defs select dll_tow_i;
		_x setVariable ["dll_tow_front_axis_offset", _def select 1];
		_x setVariable ["dll_tow_wheel_offset", _def select 2];
		_x setVariable ["dll_tow_back_axis_offset", _def select 3];
		_x setVariable ["static", _def select 4];
		_back_axis_offset = _x getvariable "dll_tow_back_axis_offset";
		if(dll_tow_debug) then {
			hintsilent format["%1 initialized", typeof(_x)]; 
			sleep 0.2;
			//[_x] spawn dll_tow_bbox;
	 };
		if(!isNil("_back_axis_offset")) then{
			[_x] execVM "JDG_carrier\scr\dll_tow\initT.sqf";			
		}
	}
} foreach _objs;

//hintsilent format["Towing system initialized.\n%1 objects activated", count _objs];
private ["_logic", "_units", "_activated", "_v"];

// Argument 0 is module logic
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this,1,[],[[]]] call BIS_fnc_param;
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this,2,true,[true]] call BIS_fnc_param;

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
  [] call TTT_fnc_alive;
  "Cat4all activated" call BIS_fnc_log;

    while {true} do {
	  	sleep 5;
	  	// not convinced of the use of this call and it's efficiency
	    _planes = nearestObjects [ [0,0,0], ["Plane"], 300000];
	    {
		  	private ["_cat", "_plane"];
		  	_plane = _x;
		  	_cat = _plane getVariable "TTT_cat";
		  	if (isNil "_cat") then {
			  	[_plane, _logic] spawn TTT_fnc_syncCatapult;
			  	_plane setVariable ["TTT_cat", true, true];
			};
		} forEach _planes;
    };
};

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true;

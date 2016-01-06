// Script by Yanko, modified by TeTeT

///////////////////////////////////////////////////////
//Convert each weight figure to its corresponding paa//
// By Yanko                                          //
///////////////////////////////////////////////////////

/* Target and calculated weight from calcWeight.sqf are retrieved. Weight is then converted to string so it can be chopped in pieces by the SELECT command. Each number is then converted in a path to the corresponding picture that is to be displayed in the weight board and the dialog is the created.*/


_plane = [_this, 0, ObjNull] call BIS_fnc_param;

// Check commented lines are pending WIP module unit system selection.
// _logic = _plane getVariable "TTT_catLogic";
// _unitsystem = _logic getvariable "Metric";
//if (!_unitsystem) then { _weight = _weight * 2.2;};

_weight = _plane getVariable "TTT_tow"; // Yanko mod : retrieve actual take off weight
_weightString = str _weight; // convert number to string so its digits can be taken apart

_digit1 = _weightString select [0,1];
_digit2 = _weightString select [1,1];
_digit3 = _weightString select [2,1];

_digit1 = format ["TTT_NimitzFunctions\fn_calcWeight\numbers\%1.paa",_digit1];
_digit2 = format ["TTT_NimitzFunctions\fn_calcweight\numbers\%1.paa",_digit2];
_digit3 = format ["TTT_NimitzFunctions\fn_calcweight\numbers\%1.paa",_digit3];

createDialog "Yanko_TOW";
ctrlSetText [1201, _digit1];
ctrlSetText [1202, _digit2];
ctrlSetText [1203, _digit3];
sleep 4;
closeDialog 0;

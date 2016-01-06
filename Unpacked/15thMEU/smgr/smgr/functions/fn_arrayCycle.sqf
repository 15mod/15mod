/*
    File: fn_arrayCycle;
    Author: <G.I.D> Sacha

    Description:
    Cycles an array left or right. Returns a new array, passed array is not modified.

    Parameters:
    0: Array to cycle (array).
    1: Direction of cycle 'left or 'right" (string).

    Returns:
    (array) New array cycled in given direction
*/

private ["_b","_a","_dir","_arr"];

_arr = _this select 0;
_dir  = _this select 1;

_a = [];
{
	[_a, _x] call BIS_fnc_arrayPush;
} forEach _arr;

switch (_dir) do
{
    case "left":
    {
    	[_a, (_a select 0)] call BIS_fnc_arrayPush;
    	[_a] call BIS_fnc_arrayShift;
    };
    case "right":
    {
    	_b = _a;
    	_a = [(_a select ((count _a) - 1))];
    	[_a,_b] call BIS_fnc_arrayPushStack;
    	_a call BIS_fnc_arrayPop;
    };

    default{};
};
_a
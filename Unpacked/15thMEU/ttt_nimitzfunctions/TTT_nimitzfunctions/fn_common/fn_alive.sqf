private ["_nimHang4"];

"in alive" call BIS_fnc_log;

// doesn't really work with the global function
waitUntil {!isNil "TTT_NimitzCarriers"};
"in TTT_NimitzCarriers not nil" call BIS_fnc_log;

_nimHang4 = ["nimHang4"] call TTT_fnc_global;
"got nimHang4" call BIS_fnc_log;

waitUntil {alive _nimHang4};
"nimHang4 alive" call BIS_fnc_log;
true

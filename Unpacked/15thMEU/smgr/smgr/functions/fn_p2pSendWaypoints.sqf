#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_transferPeer",
	"_waypoints"
];

_transferPeer = _this;

_waypoints = GETVAR("smgrWpList");
[_waypoints,"smgr_fnc_p2pReceiveWaypoints",_transferPeer,false] call BIS_fnc_MP;
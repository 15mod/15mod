#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_wpList",
	"_receivedWaypoints",
	"_wpOccurences",
	"_isTransfered",
	"_transferedWp",
	"_newWpList",
	"_transferPeer",
	"_textLines"
];

smgrToolBarAction_0 = { ["Datalink"] call smgr_fnc_displayPage };
smgrToolBarAction_1 = {};
smgrToolBarAction_2 = {};
smgrToolBarAction_3 = {};

// Ask peer for waypoints
_transferPeer = GETVAR("smgrTransferPeer");
SETVAR("smgrReceivedWaypoints",[]);
[player,"smgr_fnc_p2pSendWaypoints",_transferPeer,false] call BIS_fnc_MP;

// Wait for peer
if ( count GETVAR("smgrReceivedWaypoints") == 0 ) then {
	sleep 2;
};
_receivedWaypoints = GETVAR("smgrReceivedWaypoints");
SETVAR("smgrReceivedWaypoints",[]);

// Save waypoints

_textLines = [];

{
	_transferedWp = _x;
	_wpList = GETVAR("smgrWpList");
	_isTransfered = false;

	_wpOccurences = { _x select 0 == _transferedWp select 0 } count _wpList;
	if (_wpOccurences == 0 ) then {
		_isTransfered = true;
		_newWpList = [_wplist, _transferedWp] call bis_fnc_arrayPush;
		SETVAR("smgrWpList",_newWpList);
	};

	[_textLines, [_x select 0,_isTransfered]] call bis_fnc_arrayPush;
} forEach _receivedWaypoints;

["P2Plink", _textLines] call smgr_fnc_updateView;
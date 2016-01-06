#include "Common.h"
#include "Config.h"

private ["_dir", "_soldiers", "_center", "_unit", "_nimspots", "_fuelspot",
         "_deck"];
_dir = [_this, 0, 0] call BIS_fnc_param;
_nim = [_this, 1, ObjNull] call BIS_fnc_param;

_soldiers = [] call TTT_fnc_soldierTypes;

_nimspots = ["nimspots", _nim] call TTT_fnc_global;
_fuelspot = ["fuelspot", _nim] call TTT_fnc_global;

_center = position _nimspots;

// the deck height is different on position of the carrier on the map
// need to dynamically determine it
// spawn a unit that _falls_ on the deck
_deck = CREWDECK;
_unit = TESTER createVehicle _center;
// _unit hideObjectGlobal true;
_unit setPosASL [getPos _unit select 0, getPos _unit select 1, DECK];
sleep 1;
_deck = getPosASL _unit select 2;
format ["Deck height determined to be %1", _deck] call BIS_fnc_log;
deleteVehicle _unit;

// {
  // _unit = [_x, _center, DECK, _dir] call TTT_fnc_placeVehicle;
  // removeAllWeapons _unit;
  // _center = CIRCLEPOS2(_center, random(360), random(5));
  // sleep 0.5;
// } forEach _soldiers;

// Fuel crew
_hose1 = _fuelspot modelToWorld (_fuelspot selectionPosition "fuelHose1pos");
_grape = _soldiers select GRAPE;
_unit = [_grape, _hose1, _deck, _dir - 90] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "REPAIR_VEH_KNEEL"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_pos = CIRCLEPOS2(_hose1, random(360), 2);
_unit = [_grape, _pos, _deck, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

// Medics
_wirepos = _nimspots modelToWorld (_nimspots selectionPosition "WireCenter");
_white = _soldiers select WHITE;
_pos = CIRCLEPOS2(_wirepos, _dir + 60, 30);
_unit = [_white, _pos, _deck, _dir - 90] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_pos = CIRCLEPOS2(_pos, random(360), 2);
_unit = [_white, _pos, _deck, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

// Wire crew
_green = _soldiers select GREEN;
_pos = CIRCLEPOS2(_wirepos, _dir - 90, 30);
_unit = [_green, _pos, _deck, _dir - 90] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_pos = CIRCLEPOS2(_pos, _dir - 90, 1);
_unit = [_green, _pos, _deck, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "REPAIR_VEH_KNEEL"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

// Cat crew
_cat = _nimspots modelToWorld (_nimspots selectionPosition "C1");
_pos = CIRCLEPOS2(_cat, _dir + 90, 5);
_yellow = _soldiers select YELLOW;
_unit = [_yellow, _pos, _deck, _dir - 180] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
[[_unit, "REPAIR_VEH_KNEEL"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;
_unit setBehaviour "Careless";
_pos = CIRCLEPOS2(_pos, random(360), 2);
_unit = [_yellow, _pos, _deck, random(360)] call TTT_fnc_placeVehicle;
removeAllWeapons _unit;
_unit setBehaviour "Careless";
[[_unit, "LISTEN_BRIEFING"], "BIS_fnc_ambientAnim", true] spawn BIS_fnc_MP;

true

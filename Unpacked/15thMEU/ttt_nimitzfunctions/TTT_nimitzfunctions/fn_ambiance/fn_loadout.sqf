#include "Common.h"

private ["_doLoad", "_plane", "_loadout"];

_doLoad = FA18_fnc_loadout;

_plane = [_this, 0, ObjNull] call BIS_fnc_param;
_loadout = [_this, 1, "CAP"] call BIS_fnc_param;

switch (_loadout) do {
  case "CAP": {
    [_plane, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] call _doLoad;
  };
  case "CAS": {
    [_plane, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1", "js_m_fa18_Maverick_x1","js_m_fa18_wing_tank_x1"] call _doLoad;
  };
  case "Strike": {
    [_plane, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1", "js_m_fa18_MK82_x1","js_m_fa18_wing_tank_x1"] call _doLoad;
  };
  case "StrikeLGB": {
    [_plane, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_Maverick_x1","js_m_fa18_Maverick_x1","js_m_fa18_bombrack_x1","js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1","js_m_fa18_wing_tank_x1"] call _doLoad;
  };
  case "MR": {
    [_plane, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1","js_m_fa18_aim120c_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_bombrack_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_GBU12_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_wing_tank_x1"] call _doLoad;
  };
  case "Tanker": {
    [_plane, "js_m_fa18_aim9x_x1", "js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_aim9x_x1","js_m_fa18_wing_tank_x1","js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_wing_tank_x1", "js_m_fa18_aim120c_x1", "js_m_fa18_altflir_pod_x1", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_buddypod_x1"] call _doLoad;
  };
  case "Empty": {
    [_plane, "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty","js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty", "js_m_fa18_empty","js_m_fa18_empty"] call _doLoad;
  };
};


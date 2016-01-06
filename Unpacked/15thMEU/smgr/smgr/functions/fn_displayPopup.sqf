#include "constants.hpp"

["Popup"] call smgr_fnc_showView;
["Popup", _this] call smgr_fnc_updateView;

sleep 3;

["Popup"] call smgr_fnc_hideView;
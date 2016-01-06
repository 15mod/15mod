#include "constants.hpp"
#include "ui_id.hpp"

SETVAR("isSmgrPoweredOn",false);
[] call smgr_fnc_hideAllViews;
ctrlShow [SMGR_IDC_WALLPAPER,false];
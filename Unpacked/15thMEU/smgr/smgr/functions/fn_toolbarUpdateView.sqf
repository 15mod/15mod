#include "constants.hpp"
#include "ui_id.hpp"

private ["_labels"];

_labels = _this;

(SMGR_DLG displayCtrl SMGR_IDC_ACTION_0) ctrlSetText (_labels select 0);
(SMGR_DLG displayCtrl SMGR_IDC_ACTION_1) ctrlSetText (_labels select 1);
(SMGR_DLG displayCtrl SMGR_IDC_ACTION_2) ctrlSetText (_labels select 2);
(SMGR_DLG displayCtrl SMGR_IDC_ACTION_3) ctrlSetText (_labels select 3);
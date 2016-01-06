#include "constants.hpp"
#include "ui_id.hpp"
disableSerialization;

private [
	"_progress",
	"_ctrl"
];


_progress = _this / SMGR_BOOT_TIME;

(SMGR_DLG displayCtrl SMGR_IDC_PROGRESS_CTRL) progressSetPosition _progress;

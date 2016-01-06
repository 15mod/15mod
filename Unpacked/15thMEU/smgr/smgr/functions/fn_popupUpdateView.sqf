#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_text",
	"_title",
	"_message"
];


_title = _this select 0;
_text = _this select 1;

_message = format ["%1 %2", _title, _text];

disableSerialization;

(SMGR_DLG displayCtrl SMGR_IDC_POPUP_TEXT) ctrlSetStructuredText (parseText _message);
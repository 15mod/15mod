#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_textCtrl",
	"_textHeight",
	"_isTransfered",
	"_text",
	"_ctrlPos",
	"_wpName",
	"_textLines",
	"_line"
];

_textLines = _this;

disableSerialization;
_textCtrl = SMGR_DLG displayCtrl SMGR_IDC_P2PLINK_TEXT;

_text = "Connecting...";
_textCtrl ctrlSetStructuredText parseText _text;

for "_i" from 0 to ((count _textLines) -1) do {
	_text = "Connecting...";
	sleep 1;

	for "_j" from 0 to _i do {
		_wpName = (_textLines select _j) select 0;
		_isTransfered = (_textLines select _j) select 1;

		_line = if (_isTransfered) then {
			format ["%1...OK", _wpName];
		} else {
			format ["%1...CANCELED", _wpName];
		};

		_text = _text + "<br/>" + _line;
	};

	_textCtrl ctrlSetStructuredText parseText _text;
	_textHeight = ctrlTextHeight _textCtrl;
	_ctrlPos = ctrlPosition _textCtrl;
	_textCtrl ctrlSetPosition [
		_ctrlPos select 0,
		_ctrlPos select 1,
		_ctrlPos select 2,
		_textHeight
	];
	_textCtrl ctrlCommit 0;
};

sleep 1;
_text = _text + "<br/>" + "-------------<br/>End of transaction.";
_text = _text + "<br/>" + format ["%1 processed.", count _textLines];
_text = _text + "<br/>" + format ["%1 transfred.", {_x select 1} count _textLines];
_text = _text + "<br/>" + format ["%1 canceled.", {!(_x select 1)} count _textLines];
_textCtrl ctrlSetStructuredText parseText _text;
_textHeight = ctrlTextHeight _textCtrl;
_ctrlPos = ctrlPosition _textCtrl;
_textCtrl ctrlSetPosition [
	_ctrlPos select 0,
	_ctrlPos select 1,
	_ctrlPos select 2,
	_textHeight
];
_textCtrl ctrlCommit 0;

// clear screen and exit
sleep 5;
_textCtrl ctrlSetStructuredText parseText "";

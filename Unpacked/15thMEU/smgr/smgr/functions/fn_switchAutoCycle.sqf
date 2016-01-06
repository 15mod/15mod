#include "constants.hpp"
#include "ui_id.hpp"

private ["_value"];

if ( GETVAR("isSmgrPoweredOn") ) then {

	_value = if ( GETVAR("smgrAutoCyclehWp") == "ON" ) then {"OFF"} else {"ON"};
	SETVAR("smgrAutoCyclehWp", _value);

};
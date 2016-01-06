_jet = _this select 0;
_jet setVariable["fueling", false, true];
_action = _this select 2;
_jet removeAction _action;

sleep 3;

if(!(_jet getVariable ["arming", false]))then{
	detach _jet;
};
// _jet setVariable["fuel_Action", nil];

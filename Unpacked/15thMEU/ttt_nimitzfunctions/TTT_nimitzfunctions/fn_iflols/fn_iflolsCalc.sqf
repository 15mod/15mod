// IFLOLS script by JDog
// Calculates plane's position relative to 3.5-degree glide slope and returns information to player via visual image
// Exits script if plane begins to get farther from touchdown mark (aborted landing or normal landing)
//--------------------------------------------------------------------------------------------------
// modified by TeTeT
// Fix for correct glide slope angle of 3.5 degree by John Crielaard

private ["_jet", "_action", "_distanceA", "_distanceB", "_msg", "_jet_Alt", "_angle",
	"_jdgNimArrestor_Alt", "_jdgNimArrestor", "_cutlight"];

_jdgNimArrestor = ["jdgNimArrestor"] call TTT_fnc_global;

_jet = _this select 0;
_action = _this select 2;
_distanceB = _jet distance _jdgNimArrestor;

while {(_jet distance _jdgNimArrestor) > 400} do
{
	_distanceA = _jet distance _jdgNimArrestor;
	if ((_distanceA - _distanceB) > 0) exitWith {}; //exit script

	_jet_Alt = (getPosASL _jet select 2);
	_jdgNimArrestor_Alt = (getPosASL _jdgNimArrestor select 2);
	_angle = ((_jet_Alt - _jdgNimArrestor_Alt) / (_jet distance _jdgNimArrestor)); //calculate angle of plane to touchdown
	[_angle] call CBA_fnc_debug;
	//switch: return proper image by checking plane's angle against 3.5-degree angle
	switch (true) do
	{
		case (_angle > 0.096): {TitleRsc ["IFLOLS_6_wave", "PLAIN DOWN", 0];};  //5.5 degrees
		case (_angle > 0.088): {TitleRsc ["IFLOLS_6", "PLAIN DOWN", 0];};
		case (_angle > 0.083): {TitleRsc ["IFLOLS_5", "PLAIN DOWN", 0];};
		case (_angle > 0.078): {TitleRsc ["IFLOLS_4", "PLAIN DOWN", 0];}; //4.5 degrees
		case (_angle > 0.072): {TitleRsc ["IFLOLS_3", "PLAIN DOWN", 0];};
		case (_angle > 0.067): {TitleRsc ["IFLOLS_2", "PLAIN DOWN", 0];};
		case (_angle > 0.061): {TitleRsc ["IFLOLS_1", "PLAIN DOWN", 0];}; //3.5 degrees
		case (_angle > 0.056): {TitleRsc ["IFLOLS_7", "PLAIN DOWN", 0];};
		case (_angle > 0.050): {TitleRsc ["IFLOLS_8", "PLAIN DOWN", 0];};
		case (_angle > 0.044): {TitleRsc ["IFLOLS_9", "PLAIN DOWN", 0];}; //1.5 degrees
		case (_angle < 0.044): {TitleRsc ["IFLOLS_9_wave", "PLAIN DOWN", 0];};
	};
	_distanceB = _jet distance _jdgNimArrestor;
	sleep 0.05;
};

_cutlight = 0;
while {((_jet distance _jdgNimArrestor) > 25) and (_cutlight == 0)} do 
{
	_distanceA = _jet distance _jdgNimArrestor;
	if ((_distanceA - _distanceB) > 0) exitWith {}; 	

	_jet_Alt = (getPosASL _jet select 2);
	_jdgNimArrestor_Alt = (getPosASL _jdgNimArrestor select 2);
	_angle = ((_jet_Alt - _jdgNimArrestor_Alt) / (_jet distance _jdgNimArrestor));

	//switch: acceptable angle range increased when closer to prevent incorrect image readings on OK landing slopes
	switch (true) do
	{
		case ((_angle > 0.056) && (_angle < 0.067) && ((_jet distance _jdgNimArrestor) < 150)): {TitleRsc ["IFLOLS_cut", "PLAIN DOWN", 0]; _cutLight = 1;}; //cut lights on, good landing, exit script
		case (_angle > 0.093): {TitleRsc ["IFLOLS_6_wave", "PLAIN DOWN", 0];};
		case (_angle > 0.088): {TitleRsc ["IFLOLS_6", "PLAIN DOWN", 0];};
		case (_angle > 0.083): {TitleRsc ["IFLOLS_5", "PLAIN DOWN", 0];};
		case (_angle > 0.078): {TitleRsc ["IFLOLS_4", "PLAIN DOWN", 0];};
		case (_angle > 0.072): {TitleRsc ["IFLOLS_3", "PLAIN DOWN", 0];};
		case (_angle > 0.067): {TitleRsc ["IFLOLS_2", "PLAIN DOWN", 0];};
		case (_angle > 0.061): {TitleRsc ["IFLOLS_1", "PLAIN DOWN", 0];}; //3.5 degrees
		case (_angle > 0.056): {TitleRsc ["IFLOLS_7", "PLAIN DOWN", 0];};
		case (_angle > 0.050): {TitleRsc ["IFLOLS_8", "PLAIN DOWN", 0];};
		case (_angle > 0.044): {TitleRsc ["IFLOLS_9", "PLAIN DOWN", 0];};
		case (_angle < 0.044): {TitleRsc ["IFLOLS_9_wave", "PLAIN DOWN", 0];};
	};
	_distanceB = _jet distance _jdgNimArrestor;
	// if (_cutlight == 1) exitWith {};
	sleep 0.05;
};


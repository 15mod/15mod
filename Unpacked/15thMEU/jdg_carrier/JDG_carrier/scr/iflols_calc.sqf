// IFLOLS script by JDog
// Calculates plane's position relative to 3.5-degree glide slope and returns information to player via visual image
// Exits script if plane begins to get farther from touchdown mark (aborted landing or normal landing)
//--------------------------------------------------------------------------------------------------

_jet = _this select 0;
_action = _this select 2;
_jet removeAction _action;
_distanceA = _jet distance jdgNimArrestor;
_distanceB = _jet distance jdgNimArrestor;



while {(_jet distance jdgNimArrestor) > 400} do 
	{ 
		_distanceA = _jet distance jdgNimArrestor;
		if ((_distanceA - _distanceB) > 0) exitWith {}; //exit script
		
		_jet_Alt = (getPosASL _jet select 2);
		jdgNimArrestor_Alt = (getPosASL jdgNimArrestor select 2);
		_angle = ((_jet_Alt - jdgNimArrestor_Alt) / (_jet distance jdgNimArrestor)); //calculate angle of plane to touchdown
		
		//switch: return proper image by checking plane's angle against 3.5-degree angle
		switch (true) do
		{
			case (_angle > 0.063): {TitleRsc ["IFLOLS_6_wave", "PLAIN", 0];};
			case (_angle > 0.058): {TitleRsc ["IFLOLS_6", "PLAIN", 0];};
			case (_angle > 0.053): {TitleRsc ["IFLOLS_5", "PLAIN", 0];};
			case (_angle > 0.048): {TitleRsc ["IFLOLS_4", "PLAIN", 0];};
			case (_angle > 0.043): {TitleRsc ["IFLOLS_3", "PLAIN", 0];};
			case (_angle > 0.038): {TitleRsc ["IFLOLS_2", "PLAIN", 0];};
			case (_angle > 0.033): {TitleRsc ["IFLOLS_1", "PLAIN", 0];}; //on the ball
			case (_angle > 0.028): {TitleRsc ["IFLOLS_7", "PLAIN", 0];};
			case (_angle > 0.023): {TitleRsc ["IFLOLS_8", "PLAIN", 0];};
			case (_angle > 0.018): {TitleRsc ["IFLOLS_9", "PLAIN", 0];};
			case (_angle < 0.018): {TitleRsc ["IFLOLS_9_wave", "PLAIN", 0];};
		};
		_distanceB = _jet distance jdgNimArrestor;
		sleep 0.2;
	};
	
_cutlight = 0;
while {(_jet distance jdgNimArrestor) > 25} do 
	{
		_distanceA = _jet distance jdgNimArrestor;
		if ((_distanceA - _distanceB) > 0) exitWith {}; 	
	
		_jet_Alt = (getPosASL _jet select 2);
		jdgNimArrestor_Alt = (getPosASL jdgNimArrestor select 2);
		_angle = ((_jet_Alt - jdgNimArrestor_Alt) / (_jet distance jdgNimArrestor));
		
		//switch: acceptable angle range increased when closer to prevent incorrect image readings on OK landing slopes
		switch (true) do
		{
			case ((_angle > 0.034) && (_angle < 0.046) && ((_jet distance jdgNimArrestor) < 150)): {TitleRsc ["IFLOLS_cut", "PLAIN", 0]; _cutLight = 1;}; //cut lights on, good landing, exit script
			case (_angle > 0.093): {TitleRsc ["IFLOLS_6_wave", "PLAIN", 0];};
			case (_angle > 0.083): {TitleRsc ["IFLOLS_6", "PLAIN", 0];};
			case (_angle > 0.073): {TitleRsc ["IFLOLS_5", "PLAIN", 0];};
			case (_angle > 0.063): {TitleRsc ["IFLOLS_4", "PLAIN", 0];};
			case (_angle > 0.053): {TitleRsc ["IFLOLS_3", "PLAIN", 0];};
			case (_angle > 0.043): {TitleRsc ["IFLOLS_2", "PLAIN", 0];};
			case (_angle > 0.033): {TitleRsc ["IFLOLS_1", "PLAIN", 0];}; //on the ball
			case (_angle > 0.019): {TitleRsc ["IFLOLS_7", "PLAIN", 0];};
			case (_angle > 0.010): {TitleRsc ["IFLOLS_8", "PLAIN", 0];};
			case (_angle > 0.001): {TitleRsc ["IFLOLS_9", "PLAIN", 0];};
			case (_angle < 0.001): {TitleRsc ["IFLOLS_9_wave", "PLAIN", 0];};
		};
		_distanceB = _jet distance jdgNimArrestor;
		if (_cutlight == 1) exitWith {};
		sleep 0.2;
	};
	
_startIFLOLS = _jet addAction[("<t color=""#00A0FA"">" + ("IFLOLS") + "</t>"), "\JDG_carrier\scr\iflols_calc.sqf", [], 2, false, true, "", 
								"((getPosASL _target) select 2 < 250)
								and ((_target distance nimspots) > 200)
								and ((_target distance nimspots) < 3500)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo < 182)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo > 164)"];
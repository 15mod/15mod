//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned off
//to enable this feature in missions init put: FA18_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 5 auxilary tanks equipped and full

private ["_FA18","_FA18_pilot", "_FA18_WSO","_Internal_fuel", "_External_fuel","_Afterburner"];
_FA18 = _this select 0;
_FA18_pilot = driver _FA18;
_FA18_WSO = gunner _FA18;

while {(alive _FA18)} do 
{

	_Internal_fuel = fuel _FA18;
	_External_fuel = _FA18 animationPhase "auxtank_switch";
	_Afterburner = _FA18 animationphase "ab_switch";

	If ((_External_fuel > 0.05) && (isengineon _FA18) && (_Afterburner <= 0.1)) Then 
	{
		_FA18 setfuel 1;
		_FA18 animate ["auxtank_switch",(_External_fuel -0.0005)];
	};
	If ((_External_fuel > 0.05) && (isengineon _FA18) && (_Afterburner >= 0.1)) Then 
	{
		_FA18 setfuel 1;
		_FA18 animate ["auxtank_switch",(_External_fuel -0.001)];
	};
		
	sleep 1;
	

 
};

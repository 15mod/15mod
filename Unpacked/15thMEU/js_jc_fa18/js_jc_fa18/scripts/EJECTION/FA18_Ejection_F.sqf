_FA18 = _this select 0;			
_Pilot = driver _FA18;
_WSO = gunner _FA18;

if ((!isengineon _FA18)) ExitWith {};
if (_FA18 animationphase "rcanopy_hide" < 0.1) then {[_FA18] spawn JS_JC_fnc_FA18_Ejection_F_comon;};

sleep 0.8;

if ((!isMultiplayer) and (isServer) and (!isDedicated)) then
{

	if ((_FA18 emptyPositions "gunner") == 0) then 
	{

		[_WSO] spawn JS_JC_fnc_FA18_Ejection_F_wso;

	};
	
	sleep 1.0;

	if ((_FA18 emptyPositions "driver") == 0) then 
	{

		[_Pilot] spawn JS_JC_fnc_FA18_Ejection_F_pilot;

	};

}
else
{
	if (player == driver _FA18) then 
	{

		[player] spawn JS_JC_fnc_FA18_Ejection_F_pilot;

	};
	if (player == gunner _FA18) then 
	{

		[player] spawn JS_JC_fnc_FA18_Ejection_F_wso;

	};

};

Exit;
	
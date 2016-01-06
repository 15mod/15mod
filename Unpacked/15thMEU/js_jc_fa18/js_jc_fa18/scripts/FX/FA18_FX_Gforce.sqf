//WORK IN PROGRESS ON THIS ONE
_plane = _this select 0;

_g_force_effect = ppEffectCreate ["radialBlur", 450];
_g_force_effect ppEffectEnable false;
	
	
while {(alive _plane)} do 
{

if ((player == driver _plane) or (player == gunner _plane)) then 
{

	_g_force = _plane animationPhase "gmeter";
	_rpm = _plane animationPhase "rpm_meter";
	hintsilent format["G-force %1 \n RPM %2",_g_force,_rpm];

	if (_g_force >= 9.5) then 
	{
		_g_force_effect ppEffectEnable true;
		_g_force_effect ppEffectAdjust [0.01,0.01,0.15,0.15];
		_g_force_effect ppEffectCommit 15;
	} 

	else 
	{
		_g_force_effect ppEffectAdjust [0.005,0.005,0.075,0.075];
		//sleep 0.1;
		//_g_force_effect ppEffectAdjust [0,0,0,0];
		_g_force_effect ppEffectCommit 15;
		_g_force_effect ppEffectEnable false;
	};
	



};
	
sleep 0.5;


};
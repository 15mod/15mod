private ["_FA18"];
_FA18 = _this select 0;

while {(alive _FA18)} do 
{
	if ((speed _FA18 > 900) and (speed _FA18 < 920) and (_FA18 animationphase "sonic_boom_switch" < 0.1)) then 
	{
		_FA18 say3D "FA18_sonic_boom_sound";
		_FA18 animate ["sonic_boom_switch",1];
		sleep 3;  
		_FA18 animate ["sonic_boom_switch",0];

	};

	sleep 0.1;


};
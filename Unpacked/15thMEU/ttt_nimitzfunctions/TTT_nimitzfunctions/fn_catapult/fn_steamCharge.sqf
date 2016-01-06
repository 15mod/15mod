private ["_position", "_line", "_particle", "_object",
	 "_cat", "_steamFX"];

_position = [_this, 0, [0,0,0]] call BIS_fnc_param;
_line = [_this, 1, 0] call BIS_fnc_param;

_position = [_position select 0, _position select 1, _position select 2];
_particle = "\a3\data_f\ParticleEffects\Universal\smoke.p3d";
_animationName = "";
_type = "Billboard";
_timePeriod = 100;
_lifeTime = 3;
_moveVelocity = [0,-5,0.05];
_rotationVelocity = 3;
_weight = 1.275;
_volume = 1;
_rubbing = 0;
_size =  [0.8,1.3];
_color = [[0.5, 0.5, 0.5, 0.8],[0.6,0.6, 0.6, 0.8],[0.7, 0.7, 0.7, 0.6],[0.7, 0.7, 0.7, 0.3],[0.7, 0.7, 0.7, 0]];
_animationPhase = [0,1,0,1];
_randomDirectionPeriod = 1.6;
_randomDirectionIntensity = 0.5;
_onTimer = "";
_beforeDestroy = "";
_object = ["nimspots"] call TTT_fnc_global;

_steamFX = [_particle,_animationName,_type,_timePeriod,_lifeTime,_position,_moveVelocity,_rotationVelocity,_weight,_volume,_rubbing,_size,_color,_animationPhase,_randomDirectionPeriod,_randomDirectionIntensity,_onTimer,_beforeDestroy,_object];


switch(_line)do {
	case 1 : {
			 while{_object getVariable "nimCat1Use" == 1}do{
				 drop _steamFX;
				 sleep 0.1;
			 };
		 };
	case 2 : {
			 while{_object getVariable "nimCat2Use" == 1}do{
				 drop _steamFX;
				 sleep 0.1;
			 };
		 };
	case 3 : {
			 while{_object getVariable "nimCat3Use" == 1}do{
				 drop _steamFX;
				 sleep 0.1;
			 };
		 };
	case 4 : {
			 while{_object getVariable "nimCat4Use" == 1}do{
				 drop _steamFX;
				 sleep 0.1;
			 };
		 };
};


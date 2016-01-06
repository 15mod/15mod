_position = _this select 0;
_position = [_position select 0, _position select 1, _position select 2];
// TS _particle = "\ca\data\Cl_basic.p3d";
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
_object = nimspots;

_steamFX = [_particle,_animationName,_type,_timePeriod,_lifeTime,_position,_moveVelocity,_rotationVelocity,_weight,_volume,_rubbing,_size,_color,_animationPhase,_randomDirectionPeriod,_randomDirectionIntensity,_onTimer,_beforeDestroy,_object];
	
_line = _this select 1;

switch(_line)do
	{
		case 1 : {
			while{nimCat1Use == 1}do{
				drop _steamFX;
				sleep 0.1;
				};
			};
		case 2 : {
			while{nimCat2Use == 1}do{
				drop _steamFX;
				sleep 0.1;
				};
			};
		case 3 : {
			while{nimCat3Use == 1}do{
				drop _steamFX;
				sleep 0.1;
				};
			};
		case 4 : {
			while{nimCat4Use == 1}do{
				drop _steamFX;
				sleep 0.1;
				};
			};
	};
	

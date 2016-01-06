#define DECK 17.3
private ["_jet", "_nimspots", "_position", "_particle", "_object", "_steamFX"];

_nimspots = ["nimspots"] call TTT_fnc_global;
_jet = [_this, 0, ObjNull] call BIS_fnc_param;

if(_jet == ObjNull)exitWith{};
// waitUntil { nimCat1FX == 1 };


_position = getPosASL _jet;
_position = [_position select 0, _position select 1, 17.3];
_particle = "\a3\data_f\ParticleEffects\Universal\smoke.p3d";
_animationName = "";
_type = "Billboard";
_timePeriod = 100;
_lifeTime = 2.5;
_moveVelocity = [1.2,-0.5,0.1];
_rotationVelocity = 3;
_weight = 1.275;
_volume = 1;
_rubbing = 0.1;
_size =  [1.7,1];
_color = [[0.3, 0.3, 0.3, 0.8],[0.3,0.3, 0.3, 0.5],[0.5, 0.5, 0.5, 0]];
_animationPhase = [0,1,0,1];
_randomDirectionPeriod = 1;
_randomDirectionIntensity = 0.7;
_onTimer = "";
_beforeDestroy = "";
_object = "vehicle player";

while{_nimspots getVariable "nimCat1FX" == 1}do{
	// TS _position = getPosASL jet;
	_position = getPosASL _jet;
	_position = [_position select 0, _position select 1, DECK];
	_steamFX = [_particle,_animationName,_type,_timePeriod,_lifeTime,_position,_moveVelocity,_rotationVelocity,_weight,_volume,_rubbing,_size,_color,_animationPhase,_randomDirectionPeriod,_randomDirectionIntensity,_onTimer,_beforeDestroy,_object];
	drop _steamFX;
};

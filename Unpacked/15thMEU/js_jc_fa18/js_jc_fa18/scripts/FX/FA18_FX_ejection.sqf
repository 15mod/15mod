//script to simulate ejection FX 
//created by John_Spartan


_FA18 = _this select 0;
_Ejection_Seat = _this select 1;
_Pilot = driver _Ejection_Seat;

_Ejection_Seat say3D "FA18_ejection_sound";

_Ejection_Seat animate ["Rocket_Flash_hide",1];
_FX_light_source = "#lightpoint" createVehicleLocal getpos _Ejection_Seat;
_FX_light_source  setLightBrightness 0.3;
_FX_light_source  setLightAmbient[0.8, 0.6, 0.2];
_FX_light_source  setLightColor[1, 0.5, 0.2];
_FX_light_source  lightAttachObject [_Ejection_Seat, [0,0,0]];

_FX_smoke_source = "#particlesource" createVehicleLocal (getpos _FA18);
_FX_smoke_source setParticleClass "MLRSFired1L";
_FX_smoke_source attachto [_FA18,[0,0,0],"actionarea"];

_FX_smoketrail_source = "#particlesource" createVehicleLocal (getpos _Ejection_Seat);
_FX_smoketrail_source setParticleClass "MissileEffects1";
_FX_smoketrail_source attachto [_Ejection_Seat,[0,0,0],"FX_pos"];


sleep 0.05;
deleteVehicle _FX_light_source;

sleep 0.1;
_Ejection_Seat animate ["Rocket_Flash_hide",0];
deleteVehicle _FX_smoke_source;

sleep 0.1;
deleteVehicle _FX_smoketrail_source;
Exit;

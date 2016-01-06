private ["_FA18"];
_FA18 = _this select 0;
sleep 0.1;
If !(alive _FA18) ExitWith {};
If (speed _FA18 < 100) ExitWith {};
If ((_FA18 animationPhase "frontgear") > 0.5) ExitWith {};

_Left_wheel_sensor = "EmptyDetector" createVehicle [0,0,0];
_Right_wheel_sensor = "EmptyDetector" createVehicle [0,0,0];
_Left_wheel_sensor attachTo [_FA18,[0,0,0],"levy prach"];
_Right_wheel_sensor attachTo [_FA18,[0,0,0],"pravy prach"];
sleep 0.1;

//_Left_wheel_sensor say3D "FA18_tire_touchdown_ext_sound";
//_Right_wheel_sensor say3D "FA18_tire_touchdown_ext_sound";

if (((surfaceType position _Left_wheel_sensor) == GdtConcrete) or ((surfaceType position _Left_wheel_sensor) == GdtStratisConcrete)) then {_Left_wheel_sensor say3D "FA18_tire_touchdown_ext_sound";};
if (((surfaceType position _Right_wheel_sensor) == GdtConcrete) or ((surfaceType position _Right_wheel_sensor) == GdtStratisConcrete)) then {_Right_wheel_sensor say3D "FA18_tire_touchdown_ext_sound";};
sleep 0.1;

deletevehicle _Left_wheel_sensor;
deletevehicle _Right_wheel_sensor;

Exit;
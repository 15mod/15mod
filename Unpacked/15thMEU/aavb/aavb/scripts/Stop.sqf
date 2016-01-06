private ["_tank","_dir","_speed","_vel"];
_tank = _this select 0;

if (isNil{_tank getVariable "ScriptRunning"}) then
{

	_tank setVariable ["ScriptRunning",1,true];


	// SLOW DOWN
	while {speed _tank > 0} do
	{

		_dir = getDir _tank;

		_speed = -0.1;

		_vel = velocity _tank;

		_tank setVelocity
		[
		         (_vel select 0)+((sin _dir)*_speed),
		         (_vel select 1)+((cos _dir)*_speed),
		         0
		];
		sleep 0.1;

	};

	// SPEED UP
	while {speed _tank < 0} do
	{

		_dir = getDir _tank;

		_speed = 0.1;

		_vel = velocity _tank;

		_tank setVelocity
		[
		         (_vel select 0)+((sin _dir)*_speed),
		         (_vel select 1)+((cos _dir)*_speed),
		         0
		];
		sleep 0.1;

	};

	sleep 1;
	_tank setVariable ["ScriptRunning",nil,true];

};
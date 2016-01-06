private ["_tank","_tankSpeed","_tankVelocity","_currentDirection","_newDir","_currentAngle","_vecdx","_vecdy","_vecdz","_directionChangeVariable"];
_tank = _this select 0;

if (isNil{_tank getVariable "ScriptRunning"}) then
{
	// PREVENTS SCRIPT FROM BEING RUN TOO MANY TIMES QUICKLY
	_tank setVariable ["ScriptRunning",1,true];

	// GET SPEED OF tank
	_tankSpeed = speed _tank;

	if ((_tankSpeed <= 10) and (_tankSpeed >= -10)) then
	{

		// _tankVelocity = velocity _tank;

		_directionChangeVariable = 0.02;
		for "_i" from 1 to 24 /* step +1 */ do
		{


			_directionChangeVariable = _directionChangeVariable + 0.02;
			_currentDirection = getDir _tank;
			_newDir = _currentDirection - _directionChangeVariable;
			_currentAngle = 0;
			_vecdx = (sin(_newDir)) * (cos(_currentAngle));
			_vecdy = (cos(_newDir)) * (cos(_currentAngle));
			_vecdz = sin(_currentAngle);
			_tank setVectorDir  [_vecdx,_vecdy,_vecdz];

			sleep 0.01;

		};

		for "_i" from 1 to 7 /* step +1 */ do
		{



			_currentDirection = getDir _tank;
			_newDir = _currentDirection - 0.5;
			_currentAngle = 0;
			_vecdx = (sin(_newDir)) * (cos(_currentAngle));
			_vecdy = (cos(_newDir)) * (cos(_currentAngle));
			_vecdz = sin(_currentAngle);
			_tank setVectorDir  [_vecdx,_vecdy,_vecdz];

			sleep 0.01;

		};

		for "_i" from 1 to 24 /* step +1 */ do
		{

			_directionChangeVariable = _directionChangeVariable - 0.02;
			_currentDirection = getDir _tank;
			_newDir = _currentDirection - _directionChangeVariable;
			_currentAngle = 0;
			_vecdx = (sin(_newDir)) * (cos(_currentAngle));
			_vecdy = (cos(_newDir)) * (cos(_currentAngle));
			_vecdz = sin(_currentAngle);
			_tank setVectorDir  [_vecdx,_vecdy,_vecdz];

			sleep 0.01;

		};

		// _tank setVelocity _tankVelocity;


	} else
	{
	};

	sleep 0.8;
	_tank setVariable ["ScriptRunning",nil,true];

};


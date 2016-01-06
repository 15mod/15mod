
if(IsServer)then{

	_veh = _This select 0;

	_temppos = "center_HD_top";
	_tempdir = getdir _veh;
	_typeToSpawn = "ATLAS_LHD_Light";
	_height = 6;
	
	///////////////////////////////////////////////////////////////////////////////////
	//Hangar Deck
	///////////////////////////////////////////////////////////////////////////////////
	//white Lights
	_tempArray = [-25,-16,-8,0,8,16,24,32,40,48,56,64,72,80,88];
	{
	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[-4,_x,_height],_temppos];

	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[2,_x,_height],_temppos];

	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[-10,_x,_height],_temppos];

	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[8,_x,_height],_temppos];

	} forEach _tempArray;

	///////////////////////////////////////////////////////////////////////////////////
	//Well Deck
	///////////////////////////////////////////////////////////////////////////////////
	//white Lights
	_temppos = "center_WD_top";
	_height = 5.25;
	_tempArray = [-18,-9,0,9,18];
	_tempoffset = 6;
	{
	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[0,_x,_height],_temppos];

	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[-(_tempoffset),_x,_height],_temppos];

	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[(_tempoffset),_x,_height],_temppos];

	} forEach _tempArray;

	///////////////////////////////////////////////////////////////////////////////////
	//Green Lights
	_typeToSpawn = "ATLAS_LHD_Light_RED";
	_tempArray = [27,36,45,54,63,72,81];
	{
	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[-(_tempoffset),_x,_height],_temppos];

	_tempVar = createVehicle [_typeToSpawn,position _veh, [], 0, "NONE"];
	_tempVar attachTo [_veh,[(_tempoffset),_x,_height],_temppos];

	} forEach _tempArray;
};
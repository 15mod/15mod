if(isNil "ATLAS_Official")then{ATLAS_Official = false;};
if(isserver && !Atlas_Official)then{
	_veh = _this select 0;
	_ciws = "";
	_ram = "";
	_ss ="";
	_group = "";
	if ((side _veh) == EAST)then
	{
		_group = creategroup east;
		_ciws = "ATLAS_O_Phalanx";
		_ss = "ATLAS_O_SS_Launcher_Naval";
		_ram = "ATLAS_O_RAM_Launcher_Naval";
	};
	if ((side _veh) == WEST)then
	{
		_group = creategroup west;
		_ciws = "ATLAS_B_Phalanx";
		_ss = "ATLAS_B_SS_Launcher_Naval";
		_ram = "ATLAS_B_RAM_Launcher_Naval";
	};
	if ((side _veh) == RESISTANCE)then
	{
		_group = creategroup resistance;
		_ciws = "ATLAS_I_Phalanx";
		_ss = "ATLAS_I_SS_Launcher_Naval";
		_ram = "ATLAS_I_RAM_Launcher_Naval";
	};
	_ciws_1 = createvehicle [_ciws,_veh,[],0,"NONE"];
	_ciws_1 attachto [_veh,[-8.4,-21.3,5]];
	
	_ciws_2 = createvehicle [_ciws,_veh,[],0,"NONE"];
	_ciws_2 attachto [_veh,[13.6,123.8,-7.8]];
	
	_ss_1 = createvehicle [_ss,_veh,[],0,"NONE"];
	_ss_1 attachto [_veh,[-12.1,-33.6,1]];
	
	_ss_2 = createvehicle [_ss,_veh,[],0,"NONE"];
	_ss_2 attachto [_veh,[0,123,-6]];
	
	_ram_1 = createvehicle [_ram,_veh,[],0,"NONE"];
	_ram_1 attachto [_veh,[-12.1,-41.1,2]];
	
	_ram_2 = createvehicle [_ram,_veh,[],0,"NONE"];
	_ram_2 attachto [_veh,[-13.6,124.2,-7.8]];
	

	_weapons1 = [_ciws_1,_ss_1,_ram_1];
	_weapons2 = [_ciws_2,_ss_2,_ram_2];
	{
		detach _x;
		_x setdir (getdir _veh)-180;
		[_x] joinsilent _group;
		createvehiclecrew _x;	
	}foreach _weapons1;
	{
		detach _x;
		[_x] joinsilent _group;
		createvehiclecrew _x;
	}foreach _weapons2;
};
// TS check if running on dedi
if (isDedicated) exitWith {};

// TS initialize variable
deckCheck = ""; 

//Load proper map in briefing room based on current world
waitUntil{alive nimHang4};
sleep 0.1;
_map = worldName;
switch(_map) do
{
	case "utes": {nimHang4 setObjectTexture [8, "\JDG_carrier\tex\mapUtes.paa"]};
	case "Chernarus": {nimHang4 setObjectTexture [8, "\JDG_carrier\tex\mapChernarus.paa"]};
	case "Altis": {nimHang4 setObjectTexture [8, "\JDG_carrier\tex\mapboard_altis_co.paa"]};
	case "Stratis": {nimHang4 setObjectTexture [8, "\JDG_carrier\tex\mapboard_stratis_co.paa"]};
};
sleep 1;

//Enable aircraft towing ability
_initTowing = nimspots execVM "\JDG_carrier\scr\dll_tow\enabletowing.sqf";
sleep 1;

// TS initialize some globals
nimCat1FX = 0;
nimCat2FX = 0;
nimCat3FX = 0;
nimCat4FX = 0;
// End TS
"JDG_steamFX" addPublicVariableEventHandler {_steamStart = [_this select 1]execVM "\JDG_carrier\scr\fx_steamStart.sqf"; JDG_steamFX = 0};
"JDG_steamFXshot" addPublicVariableEventHandler {_steamShot = [_this select 1]execVM "\JDG_carrier\scr\fx_steamShot.sqf"; JDG_steamFXshot = 0};

//Add IFLOLS action to jets
// and
//Enable jets to be arrested on carrier landing
// TS _planes = nearestObjects [nimspots, ["Plane"], 10000];
// don't think nearestObjects works reliable anymore
// therefor replaced by the array NimitzPlanes
if (isNil "NimitzPlanes") then {
  NimitzPlanes = [];
};
_planes = NimitzPlanes;
{
	// _startIFLOLS = _x addAction[("<t color=""#00A0FA"">" + ("IFLOLS") + "</t>"), "\JDG_carrier\scr\iflols_calc.sqf", [], 1, false, true, "", 
				     // "((_target distance nimspots) < 3000) and ((_target distance nimspots) > 200)
					// and ([nimspots, _target] call BIS_fnc_relativeDirTo < 182) 
				        // and ([nimspots, _target] call BIS_fnc_relativeDirTo > 164)"];
	// TS
	_startIFLOLS = _x addAction[("<t color=""#00A0FA"">" + ("IFLOLS") + "</t>"), "\JDG_carrier\scr\iflols_calc.sqf", [], 1, false, true, "", 
								"((getPosASL _target) select 2 < 250)
								and ((_target distance nimspots) > 200)
								and ((_target distance nimspots) < 3500)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo < 182)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo > 164)"];
								
	// _enableArrest = _x addAction[("<t color=""#00A0FA"">" + ("Tailhook Down") + "</t>"), "\JDG_carrier\scr\arrestAddHandler.sqf", [], 5, false, true, "", 
					// "((getPosASL _target) select 2 > 20) and ((_target distance nimspots) < 5000)
					// and (speed _target > 150) and (speed _target < 500)"];
	// TS
	_enableArrest = _x addAction[("<t color=""#00A0FA"">" + ("Tailhook Down") + "</t>"), "\JDG_carrier\scr\arrestAddHandler.sqf", [], 5, false, true, "", 
								"((getPosASL _target) select 2 > 20)
								and (speed _target > 150)
								and (speed _target < 500)
								and ((_target distance nimspots) < 5000)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo < 250)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo > 110)"];
	// TS make this variable public
	// _x setVariable ["hasActions",1];	
	_x setVariable ["hasActions",1,true];	
} forEach _planes; 
sleep 1;


// TS safety wait
waitUntil {alive player};

while{true}do{
	_jet = (vehicle player);
	_actionID = _jet getVariable "Cat_Action";
	_hasActions = _jet getVariable "hasActions";
	
//CATAPULT AREA
	if(deckCheck == "check")then{
	//Kick out of script if ineligible
	// TS this seems to only work in single player, for whatever reasons client_deckChecks stays active
	// change the exit to waitUntil the condition is true
		// TS if((player distance nimspots) > 200) exitWith{};
		// TS if(!((vehicle player) isKindOf "PLANE")) exitWith{};
		waitUntil {(player distance nimspots) < 200};
		waitUntil {(vehicle player) isKindOf "PLANE"};
	// Check distances to each catapult line
		
		
		_distC1 = (player distance (nimspots modeltoworld (nimspots selectionposition "C1")));
		_distC2 = (player distance (nimspots modeltoworld (nimspots selectionposition "C2")));
		_distC3 = (player distance (nimspots modeltoworld (nimspots selectionposition "C3")));
		_distC4 = (player distance (nimspots modeltoworld (nimspots selectionposition "C4")));
	//Catapult 1
			// TS _actionId might be changed by the action below
			_actionID = _jet getVariable "Cat_Action";
			if (_distC1 < 10) then
			{	
				if (isNil "_actionID") then
				{
					// TS _enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [1], 5, false, true, "", "driver _target == _this"];
					_enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar Cat 1") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [1], 5, false, true, "", "driver _target == _this"];
					_jet setVariable ["Cat_Action",_enableCat];
				};
			
			};
		//Catapult 2	
			// TS _actionId might be changed by the action below
			_actionID = _jet getVariable "Cat_Action";
			if (_distC2 < 10) then
			{	
				if (isNil "_actionID") then
				{
					// TS _enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [2], 5, false, true, "", "driver _target == _this"];
					_enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar Cat 2") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [2], 5, false, true, "", "driver _target == _this"];
					_jet setVariable ["Cat_Action",_enableCat];
				};
			
			};
		//Catapult 3	
			// TS _actionId might be changed by the action below
			_actionID = _jet getVariable "Cat_Action";
			if (_distC3 < 10) then
			{	
				if (isNil "_actionID") then
				{
					// TS _enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [3], 5, false, true, "", "driver _target == _this"];
					_enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar Cat 3") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [3], 5, false, true, "", "driver _target == _this"];
					_jet setVariable ["Cat_Action",_enableCat];
				};
			
			};
		//Catapult 4	
			// TS _actionId might be changed by the action below
			_actionID = _jet getVariable "Cat_Action";
			if (_distC4 < 10) then
			{	
				if (isNil "_actionID") then
				{
					// _enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [4], 5, false, true, "", "driver _target == _this"];
					_enableCat = _jet addAction[("<t color=""#FFFF66"">" + ("Lower Launch Bar Cat 4") + "</t>"), "\JDG_carrier\scr\sys_catapult_2.sqf", [4], 5, false, true, "", "driver _target == _this"];
					_jet setVariable ["Cat_Action",_enableCat];
				};
			
			};
		//Prevent stacking of action	
			if ((_distC1 > 10) and (_distC2 > 10) and (_distC3 > 10) and (_distC4 > 10)) then
			{
				// TS make public
				//if !(isNil "_actionID") then {_jet removeAction _actionID ; _jet setVariable ["Cat_Action",nil]};
				if !(isNil "_actionID") then {_jet removeAction _actionID ; _jet setVariable ["Cat_Action",nil,true]};
			};
	};
	
	// TS if (isNil "_hasActions") then{
	if (isNil "_hasActions" && _jet isKindOf "PLANE") then{
		// TS just a test to always see when actions are added
		_startIFLOLS = _jet addAction[("<t color=""#00A0FA"">" + ("IFLOLS") + "</t>"), "\JDG_carrier\scr\iflols_calc.sqf", [], 2, false, true, "", 
								"((getPosASL _target) select 2 < 250)
								and ((_target distance nimspots) > 200)
								and ((_target distance nimspots) < 3500)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo < 182)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo > 164)"];
		_enableArrest = _jet addAction[("<t color=""#00A0FA"">" + ("Tailhook Down") + "</t>"), "\JDG_carrier\scr\arrestAddHandler.sqf", [], 5, false, true, "", 
								"((getPosASL _target) select 2 > 20)
								and (speed _target > 150)
								and (speed _target < 350)
								and ((_target distance nimspots) < 5000)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo < 182)
								and ([nimspots, _target] call BIS_fnc_relativeDirTo > 164)"];
		// TS make this variable public
		// _jet setVariable ["hasActions",2];
		_jet setVariable ["hasActions",2,true];
	};

	

deckCheck = ""; 
sleep 1;
};

//script to animate cought wire on carrier deck
//original authors: JDog (thank's man)
//modified to for use on this addon by John_Spartan (with JDog's permission)


private ["_pointFA18","_dWide","_dLong","_dHigh","_FA18","_pointWire1","_pointWire2","_pointWire3","_pointWire4","_hookPosA","_hookPosB","_dist1","_dist2","_dist3","_dist4","_cableA","_cableB","_cable","_nimCar3","_nimCar4"];

_FA18 = _this select 0;
_nimCar3 = ["nimCar3"] call TTT_fnc_global;
_nimCar4 = ["nimCar4"] call TTT_fnc_global;
_pointWire1 = _nimCar4 selectionPosition "wire1pos";
_pointWire2 = _nimCar4 selectionPosition "wire2pos";
_pointWire3 = _nimCar3 selectionPosition "wire3pos";
_pointWire4 = _nimCar3 selectionPosition "wire4pos";

_hookPosA = _nimCar4 worldToModel (_FA18 modelToWorld (_FA18 selectionPosition "tailhook"));
_hookPosB = _nimCar3 worldToModel (_FA18 modelToWorld (_FA18 selectionPosition "tailhook"));

_dist1 = _pointWire1 distance _hookPosA;
_dist2 = _pointWire2 distance _hookPosA;
_dist3 = _pointWire3 distance _hookPosB;
_dist4 = _pointWire4 distance _hookPosB;

_cableA = _dist1 min _dist2;
_cableB = _dist3 min _dist4;
_cable = _cableA min _cableB;

switch(_cable) do
{
	case _dist1: {
		while{true} do{
			_pointFA18 = _nimCar4 worldToModel (_FA18 modelToWorld (_FA18 selectionPosition "tailhook"));
			_dWide = (_pointFA18 select 0) - (_pointWire1 select 0);
			_dLong = (_pointFA18 select 1) - (_pointWire1 select 1);
			_dHigh = ((_pointFA18 select 2) - (_pointWire1 select 2));

			_nimCar4 animate["ani_cable1_wide", _dWide];
			_nimCar4 animate["ani_cable1_long", _dLong];
			_nimCar4 animate["ani_cable1_high", _dHigh];
			sleep 0.04;
			
			if (_FA18 animationphase "tailhook" < 0.29) exitWith {};
			};

			_nimCar4 animate["ani_cable1_wide", 0];
			_nimCar4 animate["ani_cable1_long", 0];
			_nimCar4 animate["ani_cable1_high", 0];
		};
	case _dist2: {
		while{true} do{
			_pointFA18 = _nimCar4 worldToModel (_FA18 modelToWorld (_FA18 selectionPosition "tailhook"));
			_dWide = (_pointFA18 select 0) - (_pointWire2 select 0);
			_dLong = (_pointFA18 select 1) - (_pointWire2 select 1);
			_dHigh = ((_pointFA18 select 2) - (_pointWire2 select 2));

			_nimCar4 animate["ani_cable2_wide", _dWide];
			_nimCar4 animate["ani_cable2_long", _dLong];
			_nimCar4 animate["ani_cable2_high", _dHigh];
			sleep 0.04;
			
			if (_FA18 animationphase "tailhook" < 0.29) exitWith {};
			};
			
			_nimCar4 animate["ani_cable2_wide", 0];
			_nimCar4 animate["ani_cable2_long", 0];
			_nimCar4 animate["ani_cable2_high", 0];
		};
	case _dist3: {
		while{true} do{
			_pointFA18 = _nimCar3 worldToModel (_FA18 modelToWorld (_FA18 selectionPosition "tailhook"));
			_dWide = (_pointFA18 select 0) - (_pointWire3 select 0);
			_dLong = (_pointFA18 select 1) - (_pointWire3 select 1);
			_dHigh = ((_pointFA18 select 2) - (_pointWire3 select 2));

			_nimCar3 animate["ani_cable3_wide", _dWide];
			_nimCar3 animate["ani_cable3_long", _dLong];
			_nimCar3 animate["ani_cable3_high", _dHigh];
			sleep 0.04;
			
			if (_FA18 animationphase "tailhook" < 0.29) exitWith {};
			};
			
			_nimCar3 animate["ani_cable3_wide", 0];
			_nimCar3 animate["ani_cable3_long", 0];
			_nimCar3 animate["ani_cable3_high", 0];
		};
	case _dist4: {
		while{true} do{
			_pointFA18 = _nimCar3 worldToModel (_FA18 modelToWorld (_FA18 selectionPosition "tailhook"));
			_dWide = (_pointFA18 select 0) - (_pointWire4 select 0);
			_dLong = (_pointFA18 select 1) - (_pointWire4 select 1);
			_dHigh = ((_pointFA18 select 2) - (_pointWire4 select 2));

			_nimCar3 animate["ani_cable4_wide", _dWide];
			_nimCar3 animate["ani_cable4_long", _dLong];
			_nimCar3 animate["ani_cable4_high", _dHigh];
			sleep 0.04;
			
			if (_FA18 animationphase "tailhook" < 0.29) exitWith {};
			};
			
			_nimCar3 animate["ani_cable4_wide", 0];
			_nimCar3 animate["ani_cable4_long", 0];
			_nimCar3 animate["ani_cable4_high", 0];
		};
};

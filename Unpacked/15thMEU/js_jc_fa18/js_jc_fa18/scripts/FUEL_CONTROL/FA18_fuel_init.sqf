//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned on
//to enable this feature in missions init put: FA18_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 5 auxilary tanks equipped and full

private ["_FA18","_Fuel_tank_count", "_Initial_fuel","_External_fuel","_loadout"];
_FA18 = _this select 0;
_Fuel_tank_count = {_x == "js_m_fa18_wing_tank_x1"} count magazines _FA18;
_Initial_fuel = fuel _FA18;
_External_fuel = _FA18 animationPhase "auxtank_switch";
_loadout = magazines _FA18;


If ((_Fuel_tank_count == 0) and (_Initial_fuel > 0.9)) Then 
{	
	_FA18 animate ["auxtank_switch",0];
};

If ((_Fuel_tank_count == 1) and (_Initial_fuel > 0.9)) Then 
{	
	_FA18 animate ["auxtank_switch",0.2];
};

If ((_Fuel_tank_count == 2) and (_Initial_fuel > 0.9)) Then 
{	
	_FA18 animate ["auxtank_switch",0.4];
};

If ((_Fuel_tank_count == 3) and (_Initial_fuel > 0.9)) Then 
{	
	_FA18 animate ["auxtank_switch",0.6];
};

If ((_Fuel_tank_count == 4) and (_Initial_fuel > 0.9)) Then 
{	
	_FA18 animate ["auxtank_switch",0.8];
};

If ((_Fuel_tank_count == 5) and (_Initial_fuel > 0.9)) Then 
{	
	_FA18 animate ["auxtank_switch",1.0];
};

sleep 0.05;
_External_fuel = _FA18 animationPhase "auxtank_switch";

If (("js_m_fa18_buddypod_x1" in _loadout)) Then 
{	
	
	If (_Fuel_tank_count > 1) Then 
	{	
		_FA18 animate ["auxtank_switch",(_External_fuel + 0.2)];
	};
	If (_Fuel_tank_count < 1) Then 
	{	
		_FA18 animate ["auxtank_switch",0.2];
	};

};

Exit;

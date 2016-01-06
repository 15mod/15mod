//script to simulate fuel usage with external fuel tanks fitted
//by default this feature is turned on
//to enable this feature in missions init put: FA18_FUEL_CONTROL = True;
//created by John_Spartan
//
//External fuel is calculated based on animation state "auxtank_switch"
//0 = no external fuel
//1 = all 5 auxilary tanks equipped and full

private ["_FA18","_weapon_fired","_ammo_fired","_External_fuel","_Fuel_tank_count"];
_FA18 = _this select 0;
_weapon_fired = _this select 1;
_ammo_fired = _this select 4;


If (_weapon_fired == "js_w_fa18_fueltank_holder") 

Then 
{
		_External_fuel = _FA18 animationPhase "auxtank_switch";
		_Fuel_tank_count = {_x == "js_m_fa18_wing_tank_x1"} count magazines _FA18;

		If (_External_fuel > 0.2) Then 
		{
			_FA18 animate ["auxtank_switch",(_External_fuel -0.2)];
		};
		If (_External_fuel <= 0.2) Then 
		{
			_FA18 animate ["auxtank_switch",0.0];
		};
};
		

Exit;
	
	

 


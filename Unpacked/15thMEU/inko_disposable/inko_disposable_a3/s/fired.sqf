/*
	inko_disposable\s\fired.sqf
	by Inkompetent

	Executed by firedEH
	
	Arguments:
	0 = Unit that fired
	1 = Weapon-class that fired
*/	

#define __config configFile >> "CfgWeapons" >> _weapon

_unit = _this select 0;
_weapon = _this select 1;

// Fetch all config-variables needed
_usedWeapon = getText (__config >> "inko_disposable_used");
_tubeModel = getText (__config >> "inko_disposable_tube");


// Swap the fired weapon for the "used" dummy
_unit addWeapon _usedWeapon;
_unit removeWeapon _weapon;
_unit selectWeapon _usedWeapon;

// Pause before allowing the player to throw away the launcher. Muscular counter-recoil recovery, so to say.
if (_unit == player) then
{
	while {toUpper (currentWeapon _unit) in [toUpper(_usedWeapon), toUpper (_weapon)]} do { sleep 0.3 };
} else { sleep 1.2 };

sleep 0.3;

// Removal of weapons and execution of throw-away script
if ((alive _unit) && !(isNil "_unit")) then
{
	// Remove all possible existances of real and dummy weapon
	if (_usedWeapon in weapons _unit) then { _unit removeWeapon _usedWeapon };

	// Make AI units get their weapon up after firing
	if (_unit != player) then
	{
		private "_handgun";
		_unit doTarget objNull;
		if (count weapons _unit > 0) then
		{
			// remove handgun to force selection of primaryWeapon
			if (handgunWeapon _unit != "") then
			{
				_handgun = handgunWeapon _unit;
				_unit removeWeapon _handgun;
			};
			
			// select the main weapon muzzle if several exist
			private['_type', '_muzzles'];
			 _type = ((weapons player) select 0);
			_muzzles = getArray (configFile >> "cfgWeapons" >> _type >> "muzzles");
			if (count _muzzles > 1) then
			{
				_unit selectWeapon (_muzzles select 0);
			}
			else
			{
				_unit selectWeapon _type;
			};
			
			// add back handgun if one existed in the first place
			if (!isNil "_handgun") then
			{
				_unit addWeapon _handgun;
			};
		};
	};

	// Execute throw-away on all machines
	inko_disp_throw = [_unit,_tubeModel];
	publicVariable "inko_disp_throw";
	if (!isDedicated) then { inko_disp_throw call inko_disposable_throw; };
};
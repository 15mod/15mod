/*
	inko_disposable\s\ammo_ai.sqf
	by Inkompetent
	
	Main loop that runs indefinitely
	
	Executed from XEH_PostInit.sqf
*/

#define __cfgWeapon configFile >> "CfgWeapons" >> _weapon

waitUntil {
	_unitsArray = if (isServer) then {allUnits} else {units (group player)};
	{	// forEach loop
		if ((local _x) && !(isPlayer _x)) then
		{
			private ["_weapons","_weaponCfg","_magazine"];
			_weapon = secondaryWeapon _x;
			_weaponCfg = if ((getNumber (__cfgWeapon >> "inko_disposable")) == 1) then { 1 } else { 0 }; 
			_magazine = (getArray (__cfgWeapon >> "magazines")) select 0;
			
			// IF UNIT HAS A DISPOSABLE LAUNCHER
			if (_weaponCfg == 1) then
			{
				// Remove excess magazines if any
				if (_magazine in magazines _x) then
				{
					_x removeMagazines _magazine;
				};
			}
			else	// UNIT HAS NO DISPOSABLE LAUNCHER
			{
				private "_unit";
				_unit = _x;		// unit that the magazine-array "magazines _x" belongs to
				{	// forEach loop
					// IF MAGAZINE BELONGS TO A DISPOSABLE WEAPON
					if ((getNumber (configFile >> "CfgMagazines" >> _x >> "inko_disposable")) == 1) then
					{
						_unit removeMagazines _x;
					};
				} forEach magazines _x;
			};
		};
	} forEach _unitsArray;
	sleep (sqrt (count _unitsArray) + 10);
	false
};
//15th FORECON special loadout
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removebackpack _unit;
 _unit addBackpack "B_Parachute";
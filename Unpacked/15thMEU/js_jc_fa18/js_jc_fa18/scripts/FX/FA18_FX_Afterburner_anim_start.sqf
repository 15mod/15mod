_FA18 = _this select 0;
If (!Local _FA18) ExitWith {};
_i = 1;

_FA18 setObjectTextureGlobal [8, "\js_jc_fa18\data\fa18_engine_fire_high_ca.paa"];
_FA18 setObjectTextureGlobal [9, "\js_jc_fa18\data\fa18_engine_fire_high_ca.paa"];

_FA18 animate ["afterburner_left",0]; 
_FA18 animate ["afterburner_right",0]; 
_FA18 animate ["afterburner_left_strech",1];
_FA18 animate ["afterburner_right_strech",1];

for "_x" from 1 to 10 do 
{
	 
	_engine_nozzle_left_inner_pos = (format ["engine_nozzle_left_inner_%1",_i]);
	_engine_nozzle_left_outer_pos = (format ["engine_nozzle_left_outer_%1",_i]);
	_engine_nozzle_right_inner_pos = (format ["engine_nozzle_right_inner_%1",_i]); 
	_engine_nozzle_right_outer_pos = (format ["engine_nozzle_right_outer_%1",_i]);

	_FA18 animate [_engine_nozzle_left_inner_pos,0.9];
	_FA18 animate [_engine_nozzle_left_outer_pos,0.75];
	_FA18 animate [_engine_nozzle_right_inner_pos,0.9];
	_FA18 animate [_engine_nozzle_right_outer_pos,0.75];
	_i= _i +1;

};




Exit;
_light = _This select 0;

if (local _light) then 
{
	 _rnd1 = floor random 30;
	 if(_rnd1 == 1)then{
		_light animate ["Light_hide",1];
	 };
};
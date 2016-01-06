//script to animate and simulate afterburners on FA-18 
//to activate use "SeagullFastForward" key or useraction in action menu
//original authors: Gnat and lethal
//modified to for use on this addon by John_Spartan (with Gnat's permission)


private ["_MaxIntensity","_Boost","_Intensity","_looptime", "_plane"];

_MaxIntensity = 1;
_Boost = 0.6;
_Intensity = 0.4;
_maxspeed = 1250;
_plane = _this select 0;
_fueldrag = 2000;

sleep 0.5;
_looptime = 0.1;
_runtime = 200;


while {(alive _plane) and (_plane animationphase "ab_switch" >= 0.1) and (isengineon _plane)} do {
if (isengineon _plane) then 
{
if (((getpos _plane) select 2)<5) then {_Boost = 0.0;} else {_Boost = 0.6;};
if (_Intensity < _MaxIntensity) then {_Intensity = _Intensity + 0.1*(15*_looptime)};
if ((speed _plane) < _maxspeed) then {_plane setVelocity [(velocity _plane select 0)+((vectordir _plane) select 0)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 1)+((vectordir _plane) select 1)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 2)+((vectordir _plane) select 2)*((_Boost*_Intensity/2)*(15*_looptime))]};
if (fuel _plane > 0) then {_plane setFuel ((fuel _plane)-((1/_fueldrag)*(3*_looptime)))};
} 
else {if (_Intensity > 0) then {_Intensity = _Intensity - 0.2*(15*_looptime)}};


sleep 0.05;
_runtime = _runtime - 1;
};

sleep 0.01;

[_plane] spawn JS_JC_fnc_FA18_FX_Afterburner_anim_end;

Exit;



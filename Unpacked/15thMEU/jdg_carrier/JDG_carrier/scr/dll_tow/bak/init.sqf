nodir = false;
//create functions
waituntil {!isnil "bis_fnc_init"};
dll_tow = compile preprocessfile "tow.sqf";
dll_debug = true;

//set offsets


a10 setVariable ["front_axis_offset", [0,8]];
a10 setVariable ["wheel_offset", [0,-1]];

av8b setVariable ["front_axis_offset", [0,7.5]];
av8b setVariable ["wheel_offset", [0,-1]];

c130 setVariable ["front_axis_offset", [0,15]];
c130 setVariable ["wheel_offset", [0,-5]];

gen setVariable ["front_axis_offset", [0,-5]];
gen setVariable ["wheel_offset", [0,2]];
gen setVariable ["static", true];

hmmwv setVariable ["back_axis_offset", [0, -2.5]];

mh60 setVariable ["front_axis_offset", [0,7]];
mh60 setVariable ["wheel_offset", [0,-1]];

mi17 setVariable ["front_axis_offset", [0,8]];
mi17 setVariable ["wheel_offset", [0,0]];

mi24 setVariable ["front_axis_offset", [0,9]];
mi24 setVariable ["wheel_offset", [0,-1]];

plane setVariable ["front_axis_offset", [0,7]];
plane setVariable ["wheel_offset", [0,-3.5]];

su25 setVariable ["front_axis_offset", [0,5.5]];
su25 setVariable ["wheel_offset", [0,-1]];

su34 setVariable ["front_axis_offset", [0,6]];
su34 setVariable ["wheel_offset", [0,-2]];

towtractor setVariable ["back_axis_offset", [0.25, -2]];

tractor setVariable ["back_axis_offset", [0, -2.3]];

tractor_1 setVariable ["back_axis_offset", [0, -2.3]];

train setVariable ["back_axis_offset", [0,-7]];

train setVariable ["front_axis_offset", [0,8.2]];
train setVariable ["wheel_offset", [0,-3]];
train setVariable ["static", true];

truck setVariable ["back_axis_offset", [0, -4]];
truck setVariable ["front_axis_offset", [0,5.5]];
truck setVariable ["wheel_offset", [0,-3]];

truck_1 setVariable ["back_axis_offset", [0, -4]];
truck_1 setVariable ["front_axis_offset", [0,5.5]];
truck_1 setVariable ["wheel_offset", [0,-3]];

truck_2 setVariable ["back_axis_offset", [0, -4]];
truck_2 setVariable ["front_axis_offset", [0,5.5]];
truck_2 setVariable ["wheel_offset", [0,-3]];

w1 setVariable ["back_axis_offset", [0,-8.7]];
w1 setVariable ["front_axis_offset", [0,8.2]];
w1 setVariable ["wheel_offset", [0,-3]];
w1 setVariable ["static", true];

w2 setVariable ["back_axis_offset", [0,-7]];
w2 setVariable ["front_axis_offset", [0,5.65]];
w2 setVariable ["wheel_offset", [0,-3]];
w2 setVariable ["static", true];






[towtractor] execVM "initT.sqf";
[tractor] execVM "initT.sqf";
[tractor_1] execVM "initT.sqf";
[truck] execVM "initT.sqf";
[truck_1] execVM "initT.sqf";
[truck_2] execVM "initT.sqf";
[hmmwv] execVM "initT.sqf";
[train] execVM "initT.sqf";
[w1] execVM "initT.sqf";
[w2] execVM "initT.sqf";


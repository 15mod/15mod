dll_tow_debug = false; //set true for some debug spam and roadcones
dll_tow_search_radius = 10000; //vehicles within this radius are searched for suitability. Too large may take a long time to init (??).
dll_tow_velocity_impl = true; //false for acceleration implementation, true for velocity, see tow.sqf

//set nil for not set
//if front axis AND wheels is defined (not nil), it can be towed)
//if back axis is defined, it can tow other items
//0 classname or base class - 1 front axis offset - 2 wheel offset - 3 back axis offset - 4 static (bool) 
dll_tow_defs =   [["TowingTractor",       nil,     nil,       [0.25, -2], false],
                  ["B_UGV_01_F",          nil,     nil,       [0, -2],   false],
                  ["Tractor",             nil,     nil,       [0, -2.3],   false],
                  ["HMMWV_Base",          nil,     nil,       [0, -2.5],   false],
                  ["UAZ_Base",            nil,     nil,       [0, -2.5],   false],                   
                  ["Land_loco_742_blue",  [0,8.2],[0,-3],    [0,-7],     true],
                  ["Land_wagon_flat",     [0,8.2],[0,-3],   [0,-8.7],   true],
                  ["Land_wagon_tanker",   [0,5.65],[0,-3],   [0,-7],     true],
                  ["Land_wagon_box",      [0,5.65],[0,-3],   [0,-7],     true],
                  ["PowGen_Big",          [0,-5],  [0,0],     nil,         true],
                  ["Ural_Base_withTurret",[0,5.5],[0,-3],   [0, -4],     false], 
                  ["MTVR",                [0,5.5],[0,-1.5], [0, -4],     false], 
                  ["Kamaz_Base",          [0,5.5],[0,-1.5], [0, -4],     false], 
                  ["Mi24_Base ",          [0,9],   [0,-1],   nil,         false],    
                  ["A10",                 [0,8],   [0,-1],   nil,         false],
                  ["AV8B2",               [0,7.5],[0,-1],   nil,         false],  
                  ["MH60S",               [0,-9], [0,-1],   nil,         false],  
                  ["Mi17_base",           [0,8],   [0,0],     nil,         false],  
                  ["Mi17_rockets_RU",     [0,8.5],[0,0],     nil,         false],  
                  ["F35B",                [0,7],   [0,-3.5], nil,         false],    
                  ["Su39",                [0,5.5],[0,-1],   nil,         false],
                  ["Su34",                [0,6],   [0,-2],   nil,         false],
                  ["Pchela1T",            [0,2],   [0,-1],   nil,         false],
                  ["MQ9PredatorB",        [0,5.5],[0,-1],   nil,         false],
                  ["USEC_MAULE",          [0,-6],  [0,1],     nil,         false],
                  ["IkaR_F14_AIM_54_ir",  [0,8],   [0,-1],   nil,         false],
                  ["PRACS_F15",           [0,8],   [0,-1],   nil,         false],
                  ["PRACS_F18",           [0,8],   [0,-1],   nil,         false],
                  ["JS_JC_FA18E",         [0,7],   [0,-1],   nil,         false],
                  ["JS_JC_FA18F",         [0,7],   [0,-1],   nil,         false],
                  ["C130J",               [0,15],  [0,-5],   nil,        false]];

//end config

//create list of only classnames from defs
dll_tow_classlist = [];
{
  dll_tow_classlist = dll_tow_classlist + [_x select 0];
} foreach dll_tow_defs;

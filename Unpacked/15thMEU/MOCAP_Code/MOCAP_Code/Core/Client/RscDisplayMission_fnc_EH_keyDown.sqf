/*******************************************************************************
* Project:          MOCAP
* Module:           RscDisplayMission_fnc_EH_keyDown.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_RscDisplayMission_fnc_EH_keyDown
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

private
[
    "_key",
    "_shift",
    "_ctrl",
    "_alt",
    "_handled",
    "_currentWeapon",
    "_relativeDirection",
    "_cursorTarget",
    "_playerStance",
    "_targetStance"
];

//disableSerialization;
_key = _this;
_handled = false;

if ((alive player) && (player == (vehicle player))) then
{
    call
    {
        // Knock
        if ((_key == "hand") && {!(player getVariable ["MOCAP_lockControls", false])} && {!(player getVariable ["MOCAP_animationInProgress", false])} && {(stance player) in ["STAND", "CROUCH"]}) exitWith
        {
            0.1 call MOCAP_fnc_KeyAntispam;

            _currentWeapon = currentWeapon player;
            _currentWeaponEmpty = ((currentWeapon player) == (""));

            call
            {
                // Knock using hands
                if (_currentWeaponEmpty) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_WEAP_NONE] spawn MOCAP_fnc_Animate;
                };
                // Knock using rifle
                if (_currentWeapon == (primaryWeapon player)) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_WEAP_RIFLE] spawn MOCAP_fnc_Animate;
                };
                 _WeapLikesMelee = configName (inheritsFrom (configFile >> "CfgWeapons" >> _currentWeapon));
                // Knock using pistol
                if ((_currentWeapon == (handgunWeapon player)) and !(_WeapLikesMelee == "mocap_melee")) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_WEAP_PISTOL] spawn MOCAP_fnc_Animate;
                };
                 // Knock using launcher
                if (_currentWeapon == (secondaryWeapon player)) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_WEAP_LAUNCHER] spawn MOCAP_fnc_Animate;
                };
            };

            //_handled = false;
        };
		// knife
        /*if ((_key == 'melee') && {!(player getVariable ["MOCAP_lockControls", false])} && {!(player getVariable ["MOCAP_animationInProgress", false])} && {(stance player) in ["STAND", "CROUCH"]} && {(configName (inheritsFrom (configFile >> "CfgWeapons" >> currentWeapon player))) == "mocap_melee"}) exitWith
        {
          0.1 call MOCAP_fnc_KeyAntispam;
          //_currentWeapon = currentWeapon player;
         // _currentWeaponEmpty = ((currentWeapon player) == (""));
        // Knock using melee
            //    _WeapLikesMelee = configName (inheritsFrom (configFile >> "CfgWeapons" >> _currentWeapon));
             //   if (_WeapLikesMelee == "mocap_melee") exitWith {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_WEAP_MELEE] spawn MOCAP_fnc_Animate;
              //  };
        };*/

        // Kick
        if ((_key == "leg") && {!(player getVariable ["MOCAP_lockControls", false])} && {!(player getVariable ["MOCAP_animationInProgress", false])} && {(stance player) == "STAND"}) exitWith
        {
            0.1 call MOCAP_fnc_KeyAntispam;

            _currentWeapon = currentWeapon player;
            _currentWeaponEmpty = ((currentWeapon player) == (""));

            call
            {
                // Kick wearing nothing
                if (_currentWeaponEmpty) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_LEG_WEAP_NONE] spawn MOCAP_fnc_Animate;
                };
                // Kick wearing melee
                /*_WeapLikesMelee = configName (inheritsFrom (configFile >> "CfgWeapons" >> _currentWeapon));
                if (_WeapLikesMelee == "mocap_melee") exitWith {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_LEG_WEAP_MELEE] spawn MOCAP_fnc_Animate;
                };*/
                // Kick wearing rifle
                if (_currentWeapon == (primaryWeapon player)) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_LEG_WEAP_RIFLE] spawn MOCAP_fnc_Animate;
                };
                // Kick wearing pistol
                if (_currentWeapon == (handgunWeapon player)) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_LEG_WEAP_PISTOL] spawn MOCAP_fnc_Animate;
                };
                // Kick wearing launcher
               if (_currentWeapon == (secondaryWeapon player)) exitWith
                {
                    [player, cursorTarget, MOCAP_PUNCHTYPE_LEG_WEAP_LAUNCHER] spawn MOCAP_fnc_Animate;
                };
            };
            //_handled = false;
        };

        // Grab
        if ((_key == "grab") && {!(player getVariable ["MOCAP_lockControls", false])} && {!(player getVariable ["MOCAP_animationInProgress", false])}) exitWith
        {
            0.1 call MOCAP_fnc_KeyAntispam;

            _cursorTarget = cursorTarget;
            _relativeDirection = [_cursorTarget, player] call BIS_fnc_RelativeDirTo;

            if ((!isNull _cursorTarget) && {(alive _cursorTarget) && (_cursorTarget isKindOf "CAManBase") && ((player distance _cursorTarget) <= MOCAP_BACK_GRAB_DISTANCE) && (_relativeDirection >= 150) && (_relativeDirection <= 210)}) then
            {
                _playerStance = stance player;
                _targetStance = stance _cursorTarget;

                call
                {
                    if ((_playerStance == "STAND") && (_targetStance == "STAND")) exitWith
                    {
                        [player, _cursorTarget, MOCAP_BACK_GRAB_AERC_PERC] spawn MOCAP_fnc_Animate;
                    };
                    if ((_playerStance == "CROUCH") && (_targetStance == "STAND")) exitWith
                    {
                        [player, _cursorTarget, MOCAP_BACK_GRAB_AKNL_PERC] spawn MOCAP_fnc_Animate;
                    };
                    if ((_playerStance == "CROUCH") && (_targetStance == "CROUCH")) exitWith
                    {
                        [player, _cursorTarget, MOCAP_BACK_GRAB_AKNL_PKNL] spawn MOCAP_fnc_Animate;
                    };
                     if ((_playerStance == "STAND") && (_targetStance == "CROUCH")) exitWith
                    {
                        [player, _cursorTarget, MOCAP_BACK_GRAB_AERC_PKNL] spawn MOCAP_fnc_Animate;
                    };
                     if ((_playerStance == "CROUCH") && (_targetStance == "PRONE")) exitWith
                    {
                        [player, _cursorTarget, MOCAP_BACK_GRAB_AKNL_PPNE] spawn MOCAP_fnc_Animate;
                    };
                };
            };

            //_handled = false;
        };

    };
};


_handled;
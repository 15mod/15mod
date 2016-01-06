/*******************************************************************************
* Project:          MOCAP
* Module:           initCore.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

private
[
    "_errorCode",
    "_timeOut",
    "_display_46"
];

// Common init
// =================================================================================================================
if (isServer || isClient) then
{
    // API
    // ----------------------------
    MOCAP_fnc_HasWeapon = CFPPFLN("MOCAP_Code\Core\Common\API\fnc_HasWeapon.sqf")
    MOCAP_fnc_DropWeapon = CFPPFLN("MOCAP_Code\Core\Common\API\fnc_DropWeapon.sqf")
    // ----------------------------

    // Common functions compilation
    // ----------------------------
    // ----------------------------

    // RFE
    // ----------------------------
    MOCAP_fnc_PlayAnimation = CFPPFLN("MOCAP_Code\Core\Common\RFE\fnc_PlayAnimation.sqf")
    // ----------------------------
};
// =================================================================================================================

// Server init
// =================================================================================================================
if (isServer) then
{

};
// =================================================================================================================

// Singleplayer init
// =================================================================================================================
if (isSingleplayer) then
{
    // Reserved
};
// =================================================================================================================

// Client init
// =================================================================================================================
if (isClient && !isHeadless) then
{
    // Client functions compilation
    // ----------------------------
    MOCAP_RscDisplayMission_fnc_EH_keyDown = CFPPFLN("MOCAP_Code\Core\Client\RscDisplayMission_fnc_EH_keyDown.sqf")
    MOCAP_fnc_StrokeEffects = CFPPFLN("MOCAP_Code\Core\Client\fnc_StrokeEffects.sqf")
    MOCAP_fnc_Animate = CFPPFLN("MOCAP_Code\Core\Client\fnc_Animate.sqf")
    MOCAP_fnc_KeyAntispam = CFPPFLN("MOCAP_Code\Core\Client\fnc_KeyAntispam.sqf")
    // ----------------------------

    DF ["[INF] [INIT] Waiting for <player> variable... | player: %1 | MOCAP_player: %2", player, MOCAP_player];

    // Wait for <player> variable init
    // -------------------------------
    _errorCode = NEGATIVE;
    _timeOut = time + 10;
    waitUntil {sleep 0.113; _errorCode = if ((isNull player) || {!alive player}) then {ERROR_UNIT_UNPLAYABLE} else {ERROR_SUCCESS}; (_errorCode == ERROR_SUCCESS) || (time > _timeOut)};
    // -------------------------------

    DF ["[INF] [INIT] <player> variable search finished | player: %1 | MOCAP_player: %2 | _errorCode: %3", player, MOCAP_player, _errorCode];

    if (_errorCode == ERROR_SUCCESS) then
    {
        // Player is valid
        DC "[INF] [INIT] <player> variable is valid";

        player setVariable ["MOCAP_animationInProgress", false, false];
        player setVariable ["MOCAP_lockControls", false, false];

        // Looking for display 46 (RscDisplayMission IDD)
        // ----------------------------------------------
        disableSerialization;
        _display_46 = displayNull;
       waitUntil {sleep 0.109; _display_46 = findDisplay 46; !isNull _display_46};
       sleep 1;
        //(findDisplay 46) displayAddEventHandler ["MouseButtonDown", {if ((_this select 1) == 0) then {"melee" call MOCAP_RscDisplayMission_fnc_EH_keyDown};}];
    // ----------------------------------------------
     // Keys
["MOCAP", "Main attack button", ["Main attack button"], {if (isNil 'MOCAP_disabled_fighting') then {"hand" call MOCAP_RscDisplayMission_fnc_EH_keyDown};}, [DIK_T, [false, false, false]]] call cba_fnc_addKeybind;  
["MOCAP", "Legs kick", ["Legs kick"], {if (isNil 'MOCAP_disabled_fighting') then {"leg" call MOCAP_RscDisplayMission_fnc_EH_keyDown};}, [DIK_T, [false, false, false]]] call cba_fnc_addKeybind;
["MOCAP", "Takedowns/Grabs", ["Takedowns/Grabs"], {if (isNil 'MOCAP_disabled_grabs') then {"grab" call MOCAP_RscDisplayMission_fnc_EH_keyDown};}, [DIK_T, [false, false, false]]] call cba_fnc_addKeybind;
    }
    else
    {
        // Player has unplayable unit or it is dead
        DC "[WRN] [INIT] <player> variable is null";
    };
};
// =================================================================================================================
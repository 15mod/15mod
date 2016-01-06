private ["_nimitzHash", "_msg", "_key", "_val"];

_nimitzHash = [];

_nimitzHash = _nimitzHash + [["nimCableReady", nimCableReady] ];
// _nimitzHash = _nimitzHash + [["deckCheck", deckCheck] ];
_nimitzHash = _nimitzHash + [["JDG_steamFX", JDG_steamFX]];
_nimitzHash = _nimitzHash + [["JDG_steamFXshot", JDG_steamFX]];
_nimitzHash = _nimitzHash + [["nimCat1FX", nimCat1FX]];
_nimitzHash = _nimitzHash + [["nimCat2FX", nimCat2FX]];
_nimitzHash = _nimitzHash + [["nimCat3FX", nimCat3FX]];
_nimitzHash = _nimitzHash + [["nimCat4FX", nimCat4FX]];
_nimitzHash = _nimitzHash + [["nimCat1Use", nimCat1Use]];
_nimitzHash = _nimitzHash + [["nimCat2Use", nimCat2Use]];
_nimitzHash = _nimitzHash + [["nimCat3Use", nimCat3Use]];
_nimitzHash = _nimitzHash + [["nimCat4Use", nimCat4Use]];
_nimitzHash = _nimitzHash + [["soundOff", soundOff]];
_nimitzHash = _nimitzHash + [["jdgNimArrestor", jdgNimArrestor]];
_nimitzHash = _nimitzHash + [["nimCRRCbusy", nimCRRCbusy]];
_nimitzHash = _nimitzHash + [["nimCRRCready", nimCRRCready]];
_nimitzHash = _nimitzHash + [["nimCRRCspawn", nimCRRCspawn]];
_nimitzHash = _nimitzHash + [["nimCar2", nimCar2]];
_nimitzHash = _nimitzHash + [["nimCar3", nimCar3]];
_nimitzHash = _nimitzHash + [["nimCar4", nimCar4]];
_nimitzHash = _nimitzHash + [["nimHang4", nimHang4]];
_nimitzHash = _nimitzHash + [["nimspots", nimspots]];

{
  _key = _x select 0;
  _val = _x select 1;
  if (!isNil "_val") then {
    _msg = format["key: %1, value: %2", _key, _val];
  } else {
    _msg = format["key: %1, value: undefined", _key];
  };
  _msg call BIS_fnc_log;
  player groupChat _msg;
} forEach _nimitzHash;
_nimitzHash

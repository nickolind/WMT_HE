/*
    Name: WMT_fnc_PlayerKilled

    Author(s):
        Ezhuk

    Description:
        Callback for event "killed"

    Parameters:
        Nothing

    Returns:
        Nothing
*/

#define PR(x) private ['x']; x

if(wmt_param_Statistic==0)exitWith{};

closeDialog 0;

PR(_killer) = _this select 1;
PR(_killerName) = _killer getVariable ["PlayerName", localize "STR_WMT_Unknow"];
PR(_killerSide) = _killer getVariable ["PlayerSide", sideLogic];

WMT_Local_Killer = [_killerName, _killerSide];

if (not isnil '_killer' and {not isnull _killer}) then {
    [ [ [WMT_Local_PlayerName,playerSide], { WMT_Local_Kills pushback (_this); } ],"bis_fnc_spawn",_killer] call bis_fnc_mp;
};

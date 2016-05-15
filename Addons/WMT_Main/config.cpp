/**********************************************
 Original file: config.bin
 Binarized size: 20607b
 Classes count: 26
 Datestamp: 14.05.2016 3:31:26
 Debinarized with Blender's tools
 http://www.arma3.ru
**********************************************/

class RscButton;
class RscButtonMenu;
class RscText;
class RscEdit;
class RscCheckBox;
class RscWMTButtonMenu_ext:RscButtonMenu {
    w = 0.3;
    h = 0.1;
    color[]={    
        0.543,
        0.5742,
        0.4102,
        1
    };
    class ShortcutPos {
        left = 0.0204;
        top = 0.026;
        w = 0.0392157;
        h = 0.0522876;
    };
    class TextPos {
        left = 0.06;
        top = 0.034;
        right = 0.005;
        bottom = 0.005;
    };
    period = 0.5;
    font = "PuristaMedium";
    size = 0.03921;
    sizeEx = 0.03921;
    class Attributes {
        font = "PuristaMedium";
        color = "#E5E5E5";
        align = "left";
        shadow = 0;
    };
    class AttributesImage {
        font = "PuristaMedium";
        color = "#E5E5E5";
        align = 0;
    };
};
class RscWMTText_ext {
    type = 0;
    h = 0.037;
    w = 0.3;
    style = 256;
    font = "PuristaMedium";
    SizeEx = 0.03921;
    colorText[]={    
        0.543,
        0.5742,
        0.4102,
        1
    };
    colorBackground[]={    
        0,
        0,
        0,
        0
    };
};
class RscWMTXSliderH_ext {
    idc = -1;
    type = 43;
    style = "0x400 + 0x10";
    x = 0;
    y = 0;
    h = 0.029412;
    w = 0.4;
    color[]={    
        1,
        1,
        1,
        0.4
    };
    colorActive[]={    
        1,
        1,
        1,
        1
    };
    colorDisabled[]={    
        1,
        1,
        1,
        0.2
    };
    arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
    arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
    border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
    thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};
class RscWMTButton_ext:RscButton {
    type = 1;
    colorDisabled[]={    
        0.4,
        0.4,
        0.4,
        1
    };
    colorBackground[]={    
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
        0.9
    };
    colorBackgroundDisabled[]={    
        0.95,
        0.95,
        0.95,
        1
    };
    colorBackgroundActive[]={    
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
        1
    };
    colorFocused[]={    
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
        1
    };
    colorBorder[]={    
        0,
        0,
        0,
        1
    };
    w = 0.16;
    h = 0.04;
    shadow = 0;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
};
class ArgumentsBaseUnits;
class CfgVehicles {
    class Logic;
    class Module_F:Logic {
        class ModuleDescription {
            class AnyBrain;
        };
    };
    class WMT_Main:Module_F {
        scope = 2;
        author = "Ezhuk";
        displayName = "Main";
        category = "WMT";
        function = "WMT_fnc_initModuleMain";
        icon = "\WMT_main\pic\main.paa";
        functionPriority = 2;
        isGlobal = 1;
        isTriggerActivated = 0;
        class Arguments:ArgumentsBaseUnits {
            class MaxViewDistance {
                displayName = "$STR_WMT_ViewDistance";
                description = "$STR_WMT_ViewDistance_Desc";
                typeName = "NUMBER";
                defaultValue = 2500;
            };
            class MaxViewDistanceTerrain {
                displayName = "$STR_WMT_ViewDistanceTerrain";
                description = "$STR_WMT_ViewDistanceTerrain_Desc";
                typeName = "NUMBER";
                defaultValue = 10000;
            };
            class HeavyLossesCoeff {
                displayName = "$STR_WMT_HeavyLossesCoeff";
                description = "";
                typeName = "NUMBER";
                defaultValue = 0.1;
            };
            class TI {
                displayName = "$STR_WMT_TI";
                description = "";
                typeName = "NUMBER";
                class values {
                    class Enable {
                        name = "$STR_WMT_TI_Enable";
                        value = 0;
                        default = 1;
                    };
                    class DisableInVehs {
                        name = "$STR_WMT_TI_DisableInVehicle";
                        value = 1;
                    };
                    class Disable {
                        name = "$STR_WMT_TI_Disable";
                        value = 2;
                    };
                };
            };
            class ExtendedBriefing {
                displayName = "$STR_WMT_ExtendedBriefing";
                description = "$STR_WMT_ExtendedBriefingInfo";
                typeName = "NUMBER";
                class values {
                    class Disable {
                        name = "$STR_WMT_Disable";
                        value = 0;
                    };
                    class Enable {
                        name = "$STR_WMT_Enable";
                        value = 1;
                        default = 1;
                    };
                };
            };
            class NameTag {
                displayName = "$STR_WMT_NameTag";
                description = "";
                typeName = "NUMBER";
                class values {
                    class Disable {
                        name = "$STR_WMT_Disable";
                        value = 0;
                    };
                    class Enable {
                        name = "$STR_WMT_Enable";
                        value = 1;
                        default = 1;
                    };
                };
            };
            class IndetifyTheBody {
                displayName = "$STR_WMT_IndetifyTheBody";
                description = "";
                typeName = "NUMBER";
                class values {
                    class Disable {
                        name = "$STR_WMT_Disable";
                        value = 0;
                    };
                    class Enable {
                        name = "$STR_WMT_Enable";
                        value = 1;
                        default = 1;
                    };
                };
            };
            class GenerateFrequencies {
                displayName = "$STR_WMT_MOD_GENFREQS";
                description = "";
                typeName = "NUMBER";
                class values {
                    class Disable {
                        name = "$STR_WMT_Disable";
                        value = 0;
                    };
                    class Enable {
                        name = "$STR_WMT_Enable";
                        value = 1;
                        default = 1;
                    };
                };
            };
            class AI {
                displayName = "$STR_WMT_AI";
                description = "";
                typeName = "NUMBER";
                class values {
                    class Disable {
                        name = "$STR_WMT_Disable";
                        value = 0;
                        default = 1;
                    };
                    class Enable {
                        name = "$STR_WMT_Enable";
                        value = 1;
                    };
                };
            };
            class Statistic {
                displayName = "$STR_WMT_Statistic";
                description = "$STR_WMT_Statistic_Desc";
                typeName = "NUMBER";
                class values {
                    class Disable {
                        name = "$STR_WMT_Disable";
                        value = 0;
                    };
                    class Enable {
                        name = "$STR_WMT_Enable";
                        value = 1;
                        default = 1;
                    };
                };
            };
        };
    };
    class WMT_Time:Module_F {
        scope = 2;
        author = "Ezhuk";
        displayName = "Time";
        category = "WMT";
        function = "WMT_fnc_initModuleTime";
        icon = "\WMT_main\pic\time.paa";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        class Arguments:ArgumentsBaseUnits {
            class MissionTime {
                displayName = "$STR_WMT_MissionTime";
                typeName = "NUMBER";
                defaultValue = 60;
            };
            class WinnerByTime {
                displayName = "$STR_WMT_WinnerSide";
                description = "$STR_WMT_WinnerSide_Desc";
                typeName = "NUMBER";
                class values {
                    class Empty {
                        name = "$STR_WMT_Nobody";
                        value = 4;
                        default = 4;
                    };
                    class East {
                        name = "$STR_WMT_East";
                        value = 0;
                    };
                    class West {
                        name = "$STR_WMT_West";
                        value = 1;
                    };
                    class Guer {
                        name = "$STR_WMT_Resistance";
                        value = 2;
                    };
                    class Civ {
                        name = "$STR_WMT_Civilian";
                        value = 3;
                    };
                };
            };
            class WinnerByTimeText {
                displayName = "$STR_WMT_Message";
                description = "$STR_WMT_Message_Desc";
                typeName = "STRING";
                defaultValue = "End time";
            };
            class PrepareTime {
                displayName = "$STR_WMT_PrepareTime";
                description = "";
                typeName = "NUMBER";
                defaultValue = 5;
            };
            class StartZone {
                displayName = "$STR_WMT_StartZone";
                description = "";
                typeName = "NUMBER";
                defaultValue = 100;
            };
            class RemoveBots {
                displayName = "$STR_WMT_RemoveBots";
                description = "";
                typeName = "NUMBER";
                defaultValue = 3;
            };
        };
    };
    class WMT_StartPosition:Module_F {
        scope = 2;
        author = "Ezhuk";
        displayName = "Start Position";
        category = "WMT";
        function = "WMT_fnc_InitModuleStartPosition";
        icon = "\WMT_main\pic\startPos.paa";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        class Arguments:ArgumentsBaseUnits {
            class Text {
                displayName = "$STR_WMT_Text";
                description = "$STR_WMT_SP_Text_Desc";
                typeName = "STRING";
                defaultValue = "";
            };
            class Owner {
                displayName = "$STR_WMT_SP_Owner";
                description = "$STR_WMT_SP_Owner_Desc";
                typeName = "STRING";
                defaultValue = "";
            };
            class CenterObject {
                displayName = "$STR_WMT_SP_Center";
                description = "$STR_WMT_SP_Center_Desc";
                typeName = "STRING";
                defaultValue = "";
            };
            class Positions {
                displayName = "$STR_WMT_SP_Positions";
                description = "";
                typeName = "STRING";
                defaultValue = "";
            };
            class MarkerSide {
                displayName = "$STR_WMT_SP_ShowMarkers";
                description = "";
                typeName = "NUMBER";
                class values {
                    class All {
                        name = "$STR_WMT_All";
                        value = 0;
                        default = 1;
                    };
                    class East {
                        name = "$STR_WMT_East";
                        value = 1;
                    };
                    class West {
                        name = "$STR_WMT_West";
                        value = 2;
                    };
                    class Guer {
                        name = "$STR_WMT_Resistance";
                        value = 3;
                    };
                    class Civ {
                        name = "$STR_WMT_Civilian";
                        value = 4;
                    };
                };
            };
            class Time {
                displayName = "$STR_WMT_SP_Time";
                description = "$STR_WMT_SP_Time_Desc";
                typeName = "NUMBER";
                defaultValue = 3;
            };
        };
    };
    class ModuleCreateDiaryRecord_F:Module_F {
        functionPriority = 5;
    };
};
class CfgFunctions {
    class WMT {
        class Main {
            file = "WMT_Main\functions";
            class PrecompileMain {
                preInit = 1;
            };
            class BoundingBoxMarker {};
            class BriefingMap {};
            class CreateDiaryRecord {};
            class CreateLocalMarker {};
            class CreateGlobalMarker {};
            class CreateTrigger {};
            class EndMission {};
            class LongGroupNameToShort {};
            class ZoneCaptured {};
        };
    };
};
class RscWMTMainMenu {
    idd = "IDD_DSIAPLAY_MAINMENU";
    onLoad = "['init',_this] call WMT_fnc_HandlerMenu";
    onUnload = "['close',_this] call WMT_fnc_HandlerMenu";
    class controlsBackground {
        class BackgroundTop:RscWMTText_ext {
            colorBackground[]={            
                0,
                0,
                0,
                0.7
            };
            idc = -1;
            x = 0.02;
            y = 0.18;
            w = 0.3;
            h = 0.07;
            text = "$STR_WMT_MainMenu";
        };
    };
    class controls {
        class Button_Options:RscWMTButtonMenu_ext {
            idc = 61001;
            x = 0.02;
            y = 0.255;
            text = "$STR_WMT_Options";
            action = "['options',_this] call WMT_fnc_HandlerMenu";
        };
        class Button_FeedBack:RscWMTButtonMenu_ext {
            idc = 61002;
            x = 0.02;
            y = 0.36;
            text = "$STR_WMT_FeedBack";
            action = "['admin',_this] call WMT_fnc_HandlerMenu";
        };
        class Button_Console:RscWMTButtonMenu_ext {
            idc = 61006;
            x = 0.02;
            y = 0.465;
            text = "$STR_WMT_Console";
            action = "['console',_this] call WMT_fnc_HandlerMenu";
        };
        class Button_Close:RscWMTButtonMenu_ext {
            idc = 61003;
            x = 0.02;
            y = 0.57;
            text = "$STR_WMT_Close";
            action = "closeDialog 0;";
        };
        class Button_TeamReady:RscWMTButtonMenu_ext {
            idc = 61004;
            x = 0.7;
            y = 0.255;
            text = "$STR_WMT_FreezeVoteStart";
            action = "['teamready',_this] call WMT_fnc_HandlerMenu";
        };
        class Button_TeamNotReady:RscWMTButtonMenu_ext {
            idc = 61005;
            x = 0.7;
            y = 0.36;
            h = 0.15;
            text = "$STR_WMT_FreezeVoteWait";
            action = "['teamnotready',_this] call WMT_fnc_HandlerMenu";
        };
    };
};
class RscButtonMenuOK;
class RscWMTOptions {
    movingEnable = 1;
    idd = 171000;
    onLoad = "['init',_this] call WMT_fnc_HandlerOptions";
    onUnload = "['close',_this] call WMT_fnc_HandlerOptions";
    class controlsBackground {
        class Background:RscText {
            x = 0.04;
            y = 0.16;
            w = 0.45;
            h = 0.57;
            colorBackground[]={            
                0,
                0,
                0,
                0.75
            };
        };
        class Title:RscText {
            text = "$STR_WMT_Options";
            x = 0.04;
            y = 0.116;
            w = 0.45;
            h = 0.04;
            colorBackground[]={            
                "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
                0.9
            };
        };
    };
    class controls {
        class Text_ViewDistance:RscText {
            text = "$STR_WMT_ViewDistance";
            x = 0.05;
            y = 0.18;
            w = 0.425;
            h = 0.04;
        };
        class Text_Terrain:RscText {
            text = "$STR_WMT_Terrain";
            x = 0.05;
            y = 0.23;
            w = 0.13;
            h = 0.04;
            tooltip = "$STR_WMT_Tooltip_terrain";
        };
        class Slider_Terrain:RscWMTXSliderH_ext {
            idc = 171013;
            x = 0.19;
            y = 0.23;
            w = 0.2;
            h = 0.04;
            onSliderPosChanged = "['setDistanceTerrain',[_this]] call WMT_fnc_HandlerOptions";
        };
        class Value_Terrain:RscText {
            idc = 171023;
            text = "";
            x = 0.4;
            y = 0.23;
            w = 0.09;
            h = 0.04;
        };
        class Text_Preset_1:RscText {
            text = "$STR_WMT_Preset1";
            x = 0.05;
            y = 0.28;
            w = 0.13;
            h = 0.04;
            tooltip = "$STR_WMT_Tooltip_preset1";
        };
        class Slider_Preset_1:RscWMTXSliderH_ext {
            idc = 171010;
            x = 0.19;
            y = 0.28;
            w = 0.2;
            h = 0.04;
            onSliderPosChanged = "['setDistance',[_this,0]] call WMT_fnc_HandlerOptions";
        };
        class Value_Preset_1:RscText {
            idc = 171020;
            text = "";
            x = 0.4;
            y = 0.28;
            w = 0.13;
            h = 0.04;
        };
        class Text_Preset_2:RscText {
            text = "$STR_WMT_Preset2";
            x = 0.05;
            y = 0.33;
            w = 0.13;
            h = 0.04;
            tooltip = "$STR_WMT_Tooltip_preset2";
        };
        class Slider_Preset_2:RscWMTXSliderH_ext {
            idc = 171011;
            x = 0.19;
            y = 0.33;
            w = 0.2;
            h = 0.04;
            onSliderPosChanged = "['setDistance',[_this,1]] call WMT_fnc_HandlerOptions";
        };
        class Value_Preset_2:RscText {
            idc = 171021;
            text = "";
            x = 0.4;
            y = 0.33;
            w = 0.09;
            h = 0.04;
        };
        class Text_Preset_3:RscText {
            text = "$STR_WMT_Preset3";
            x = 0.05;
            y = 0.38;
            w = 0.13;
            h = 0.04;
            tooltip = "$STR_WMT_Tooltip_preset3";
        };
        class Slider_Preset_3:RscWMTXSliderH_ext {
            idc = 171012;
            x = 0.19;
            y = 0.38;
            w = 0.2;
            h = 0.04;
            onSliderPosChanged = "['setDistance',[_this,2]] call WMT_fnc_HandlerOptions";
        };
        class Value_Preset_3:RscText {
            idc = 171022;
            text = "";
            x = 0.4;
            y = 0.38;
            w = 0.09;
            h = 0.04;
        };
        class Text_sound_settings:RscText {
            text = "$STR_WMT_SoundSettings";
            x = 0.05;
            y = 0.45;
            w = 0.425;
            h = 0.04;
        };
        class Text_Muting:RscText {
            text = "$STR_WMT_Muting";
            x = 0.05;
            y = 0.5;
            w = 0.13;
            h = 0.04;
            tooltip = "$STR_WMT_Tooltip_mute";
        };
        class Slider_Muting:RscWMTXSliderH_ext {
            idc = 171050;
            x = 0.19;
            y = 0.5;
            w = 0.2;
            h = 0.04;
            onSliderPosChanged = "['setMutingLevel',[_this]] call WMT_fnc_HandlerOptions";
        };
        class Value_Muting:RscText {
            idc = 171051;
            text = "";
            x = 0.4;
            y = 0.5;
            w = 0.09;
            h = 0.04;
        };
        class Text_SaveTerrainSettings:RscText {
            text = "$STR_WMT_SaveTerrainSettings";
            x = 0.05;
            y = 0.57;
            w = 0.35;
            h = 0.04;
            tooltip = "$STR_WMT_Tooltip_Checkbox_terrain";
        };
        class Checkbox_SaveTerrainSettings:RscCheckbox {
            idc = 17091;
            x = 0.42;
            y = 0.57;
            w = "0.04*safeZoneH/safeZoneW";
            h = 0.04;
            onCheckedChanged = "profilenamespace setvariable ['WMT_Profile_ViewDistance_TerraineSave', (_this select 1)]";
        };
        class Text_UIShowNickName:RscText {
            text = "$STR_WMT_UIShowNickName";
            x = 0.05;
            y = 0.62;
            w = 0.35;
            h = 0.04;
        };
        class Checkbox_UIShowNickName:RscCheckbox {
            idc = 17090;
            x = 0.42;
            y = 0.62;
            w = "0.04*safeZoneH/safeZoneW";
            h = 0.04;
            onCheckedChanged = "profilenamespace setvariable ['WMT_ShowNickNameOption', (_this select 1)]";
        };
        class Text_Beep:RscText {
            idc = "IDC_WMT_OPTIONS_RSCTEXT_1014";
            text = "$STR_WMT_PlaySoundOnFreezeEnd";
            x = 0.05;
            y = 0.67;
            w = 0.35;
            h = 0.04;
        };
        class Checkbox_Beep:RscCheckbox {
            idc = 17092;
            x = 0.42;
            y = 0.67;
            w = "0.04*safeZoneH/safeZoneW";
            h = 0.04;
            onCheckedChanged = "profilenamespace setvariable ['WMT_BeepAfterFreezeOption', (_this select 1)]";
        };
        class ButtonClose:RscButtonMenuOK {
            x = 0.34;
            y = 0.734;
            w = 0.15;
            h = 0.04;
            text = "$STR_WMT_Close";
            action = "closedialog 0;";
        };
    };
};
class RscWMTAdminPanel {
    movingEnable = 1;
    idd = 62000;
    onLoad = "['init',_this] call WMT_fnc_HandlerAdminPanel";
    onUnload = "['close',_this] call WMT_fnc_HandlerAdminPanel";
    class controlsBackground {
        class Background1:RscText {
            colorBackground[]={            
                0,
                0,
                0,
                0.75
            };
            idc = -1;
            x = 0;
            y = 0.35;
            w = 0.7;
            h = 0.09;
        };
        class Background2:RscText {
            colorBackground[]={            
                0,
                0,
                0,
                0.75
            };
            idc = -1;
            x = 0;
            y = 0.5;
            w = 0.7;
            h = 0.09;
        };
        class Background3:RscText {
            colorBackground[]={            
                0,
                0,
                0,
                0.75
            };
            idc = 62013;
            x = 0;
            y = 0.65;
            w = 0.7;
            h = 0.09;
        };
        class BackgroundHead:RscText {
            colorBackground[]={            
                "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
                0.9
            };
            idc = -1;
            x = 0;
            y = 0.305;
            w = 0.7;
            h = 0.04;
            text = "$STR_WMT_AdminPanel";
        };
    };
    class controls {
        class Text:RscEdit {
            idc = 62001;
            x = 0.05;
            y = 0.53;
            w = 0.6;
            h = 0.05;
            text = "";
        };
        class Button_Announcement:RscWMTButton_ext {
            idc = 62003;
            x = 0;
            y = 0.595;
            w = 0.22;
            text = "$STR_WMT_Announcement";
            action = "['announcement',_this] call WMT_fnc_HandlerAdminPanel";
        };
        class Button_EndMission:RscWMTButton_ext {
            idc = 62004;
            x = 0.24;
            y = 0.595;
            w = 0.22;
            text = "$STR_WMT_EndMission";
            action = "['endMission',_this] call WMT_fnc_HandlerAdminPanel";
        };
        class Button_Close:RscWMTButton_ext {
            idc = 62002;
            x = 0.48;
            y = 0.595;
            w = 0.22;
            text = "$STR_WMT_Close";
            action = "closeDialog 0;";
        };
        class Text_Time:RscText {
            idc = 62005;
            x = 0.05;
            y = 0.375;
            w = 0.4;
            text = "Left time: 45:12";
        };
        class Button_addTime10:RscWMTButton_ext {
            idc = 62007;
            x = 0.48;
            y = 0.445;
            w = 0.22;
            text = "$STR_WMT_Add10Min";
            action = "['changeTime',10] call WMT_fnc_HandlerAdminPanel";
        };
        class Button_addTime5:RscWMTButton_ext {
            idc = 62006;
            x = 0.24;
            y = 0.445;
            w = 0.22;
            text = "$STR_WMT_Add5Min";
            action = "['changeTime',5] call WMT_fnc_HandlerAdminPanel";
        };
        class Button_subtractTime:RscWMTButton_ext {
            idc = 62008;
            x = 0;
            y = 0.445;
            w = 0.22;
            text = "$STR_WMT_Sub5Min";
            action = "['changeTime',-5] call WMT_fnc_HandlerAdminPanel";
        };
        class freezeText_Time:RscText {
            idc = 62009;
            x = 0.05;
            y = 0.675;
            w = 0.4;
            text = "Left freezetime: 45:12";
        };
        class Button_freezeAddTime5:RscWMTButton_ext {
            idc = 62011;
            x = 0.48;
            y = 0.745;
            w = 0.22;
            text = "$STR_WMT_Add5Min";
            action = "['freezeTime',5] call WMT_fnc_HandlerAdminPanel";
        };
        class Button_freezeAddTime1:RscWMTButton_ext {
            idc = 62010;
            x = 0.24;
            y = 0.745;
            w = 0.22;
            text = "$STR_WMT_Add1Min";
            action = "['freezeTime',1] call WMT_fnc_HandlerAdminPanel";
        };
        class Button_freezeSubtractTime:RscWMTButton_ext {
            idc = 62012;
            x = 0;
            y = 0.745;
            w = 0.22;
            text = "$STR_WMT_Sub1Min";
            action = "['freezeTime',-1] call WMT_fnc_HandlerAdminPanel";
        };
    };
};
class RscWMTFeedback {
    movingEnable = 1;
    idd = 63000;
    onLoad = "['init',_this] call WMT_fnc_HandlerFeedback";
    onUnload = "['close',_this] call WMT_fnc_HandlerFeedback";
    class controlsBackground {
        class Background:RscText {
            colorBackground[]={            
                0,
                0,
                0,
                0.75
            };
            idc = -1;
            x = 0;
            y = 0.35;
            w = 0.6;
            h = 0.18;
        };
        class BackgroundHead:RscText {
            colorBackground[]={            
                "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
                0.9
            };
            idc = 63010;
            x = 0;
            y = 0.305;
            w = 0.6;
            h = 0.04;
            text = "$STR_WMT_FeedBack";
        };
    };
    class controls {
        class Text:RscEdit {
            idc = 63001;
            x = 0.05;
            y = 0.46;
            w = 0.5;
            h = 0.05;
            text = "";
        };
        class Admin:RscText {
            idc = 63003;
            x = 0.05;
            y = 0.36;
            w = 0.5;
            h = 0.04;
            text = "$STR_WMT_GameAdmin";
        };
        class Admin_Name:RscText {
            idc = 63004;
            x = 0.1;
            y = 0.4;
            w = 0.4;
            h = 0.04;
            text = "";
            colorText[]={            
                0.85,
                0.57,
                0.11,
                1
            };
        };
        class Button_Send:RscWMTButton_ext {
            idc = 63005;
            x = 0;
            y = 0.535;
            text = "$STR_WMT_Send";
            action = "['send',_this] call WMT_fnc_HandlerFeedback";
        };
        class Button_Close:RscWMTButton_ext {
            idc = 63002;
            x = 0.44;
            y = 0.535;
            text = "$STR_WMT_Close";
            action = "closeDialog 0;";
        };
    };
};
class RscMap;
class RscMapControl;
class RscWMTChooseMarker:RscMap {
    idd = 62100;
    onLoad = "['init',_this] call WMT_fnc_chooseMarker_handler";
    onUnload = "['close',_this] call WMT_fnc_chooseMarker_handler";
    onKeyUp = "['keyUp',_this] call WMT_fnc_chooseMarker_handler";
    class controls {
        class bgpic {
            idc = 62103;
            text = "\WMT_Main\pic\tablet.paa";
            x = -0.57575;
            y = -0.1916;
            w = 2.175;
            h = 1.46822;
            access = 0;
            type = 0;
            style = 48;
            colorBackground[]={            
                0,
                0,
                0,
                0
            };
            colorText[]={            
                1,
                1,
                1,
                1
            };
            font = "TahomaB";
            sizeEx = 0;
            lineSpacing = 0;
            fixedWidth = 0;
            shadow = 0;
        };
        class hddpic {
            idc = 62104;
            text = "\wmt_main\pic\led_red.paa";
            x = -0.194948;
            y = 0.7;
            w = 0.194949;
            h = 0.2;
            access = 0;
            type = 0;
            style = 48;
            colorBackground[]={            
                0,
                0,
                0,
                0
            };
            colorText[]={            
                1,
                1,
                1,
                1
            };
            font = "TahomaB";
            sizeEx = 0;
            lineSpacing = 0;
            fixedWidth = 0;
            shadow = 0;
        };
        class netpic {
            idc = 62105;
            text = "\wmt_main\pic\led_blue.paa";
            x = -0.197096;
            y = 0.653604;
            w = 0.2;
            h = 0.2;
            access = 0;
            type = 0;
            style = 48;
            colorBackground[]={            
                0,
                0,
                0,
                0
            };
            colorText[]={            
                1,
                1,
                1,
                1
            };
            font = "TahomaB";
            sizeEx = 0;
            lineSpacing = 0;
            fixedWidth = 0;
            shadow = 0;
        };
        class Map:RscMapControl {
            idc = 62101;
            x = 0.0124995;
            y = 0.05999999;
            w = 0.982322;
            h = 0.93148;
            sizeExNames = 0.044;
        };
        class Text:RscText {
            idc = 62102;
            type = 13;
            style = 0;
            x = 0.0124995;
            y = 0.00999999;
            w = 0.982322;
            h = 0.05;
            font = "puristaMedium";
            sizeEx = 0.04;
            size = 0.04;
            text = "";
            colorText[]={            
                1,
                1,
                1,
                1
            };
            colorBackground[]={            
                0,
                0,
                0,
                1
            };
        };
    };
};
class CfgPatches {
    class WMT_Main {
        units[]={        
            "WMT_Main",
            "WMT_Time",
            "WMT_StartPosition"
        };
        weapons[]={};
        requiredVersion = 1;
        requiredAddons[]={        
            "A3_UI_F",
            "cba_keybinding"
        };
        author[]={        
            "Ezhuk",
            "Zealot"
        };
        authorUrl = "https://github.com/iEzhuk/WMT_MapTools";
        version = "1.5.0";
        versionStr = "1.5.0";
        versionAr[]={        
            1,
            5,
            0
        };
    };
};
class CfgSounds {
    sounds[]={};
    class wmt_beep {
        name = "WMT Freeze end beep";
        sound[]={        
            "\wmt_main\sounds\buzz.ogg",
            "1db",
            1
        };
        titles[]={};
    };
};
class CfgFactionClasses {
    class WMT {
        displayName = "WMT";
        priority = 0;
        side = 7;
    };
};
class RscTitles {
    class RscWMTDisableTI {
        idd = 59000;
        fadeout = 0;
        fadein = 0;
        duration = 100000;
        onLoad = "['full', _this] spawn WMT_fnc_disableTI";
        class controls {
            class DisableTI {
                idc = 59001;
                type = 13;
                style = 0;
                x = "0.0 * safezoneW + safezoneX";
                y = "0.0 * safezoneH + safezoneY";
                w = "1.0 * safezoneW";
                h = "1.0 * safezoneH";
                font = "puristaMedium";
                sizeEx = 0.038;
                size = 0.038;
                text = "";
                colorText[]={                
                    1,
                    1,
                    1,
                    1
                };
                colorBackground[]={                
                    0,
                    0,
                    0,
                    0
                };
                class Attributes {
                    font = "PuristaMedium";
                    align = "center";
                    valign = "middle";
                };
                class TextPos {
                    left = 0.06;
                    top = 0.46;
                    right = 0.005;
                    bottom = 0.005;
                };
            };
        };
    };
    class RscWMTNameTag {
        idd = 59100;
        fadeout = 0;
        fadein = 0;
        duration = 90000;
        onLoad = "_this spawn WMT_fnc_nameTag";
        class controls {
            class RscPlayerNameText {
                idc = 59101;
                type = 13;
                style = 0;
                x = 0.55;
                y = 0.45;
                w = 0.4;
                h = 0.05;
                font = "puristaMedium";
                sizeEx = 0.035;
                size = 0.035;
                text = "";
                colorText[]={                
                    1,
                    1,
                    1,
                    1
                };
                colorBackground[]={                
                    0,
                    0,
                    0,
                    0
                };
                class Attributes {
                    font = "PuristaMedium";
                    align = "left";
                    valign = "middle";
                };
            };
        };
    };
    class RscWMTDogTag {
        idd = -1;
        fadeout = 0;
        fadein = 0;
        duration = 2.5;
        onLoad = "uiNamespace setVariable ['RscWMTDogTag', _this select 0]";
        onUnLoad = "uiNamespace setVariable ['RscWMTDogTag', nil]";
        class controlsBackground {
            class RscWMTDogTagPic {
                idc = 59168;
                text = "\wmt_main\pic\dogtag0.paa";
                x = 0.0375;
                y = 0.6;
                w = 0.52;
                h = 0.26;
                fade = 0;
                type = 0;
                style = 2096;
                colorBackground[]={                
                    0,
                    0,
                    0,
                    0
                };
                colorText[]={                
                    1,
                    1,
                    1,
                    1
                };
                font = "TahomaB";
                sizeEx = 0;
                lineSpacing = 0;
                fixedWidth = 0;
                shadow = 0;
                tooltipColorText[]={                
                    1,
                    1,
                    1,
                    1
                };
                tooltipColorBox[]={                
                    1,
                    1,
                    1,
                    1
                };
                tooltipColorShade[]={                
                    0,
                    0,
                    0,
                    0.65
                };
            };
        };
        class controls {
            class RscWMTDogTagText {
                idc = 59167;
                type = 0;
                style = 0;
                x = 0.18;
                y = 0.6;
                w = 0.28;
                h = 0.26;
                fixedWidth = 0;
                font = "puristaMedium";
                sizeEx = 0.038;
                size = 0.038;
                shadow = 1;
                text = "";
                colorText[]={                
                    0.465,
                    0.449,
                    0.433,
                    1
                };
                colorBackground[]={                
                    0,
                    0,
                    0,
                    0
                };
                colorShadow[]={                
                    1,
                    1,
                    1,
                    0.5
                };
                linespacing = 1;
            };
        };
    };
    class RscWMTVehicleCrew {
        idd = 5000;
        fadeout = 0;
        fadein = 0;
        duration = 3;
        onLoad = "_this call WMT_fnc_ShowCrew;";
        class controls {
            class RscWMTVehicleCrewText {
                idc = 5001;
                type = 13;
                style = 0;
                x = "0.83 * safezoneW + safezoneX";
                y = "0.25 * safezoneH + safezoneY";
                w = "0.17 * safezoneW";
                h = "0.65 * safezoneH";
                font = "puristaMedium";
                sizeEx = 0.02;
                size = 0.02;
                text = "";
                colorText[]={                
                    0.8,
                    0.8,
                    0.8,
                    1
                };
                colorBackground[]={                
                    0,
                    0,
                    0,
                    0
                };
            };
        };
    };
};
class RscDisplayOptionsVideo {
    onLoad = "['onLoad',_this,'RscDisplayOptionsVideo','GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay'); ['disableOptions', _this] call WMT_fnc_HandlerOptions;";
};
class CfgWeapons {
    class ItemMap;
    class ItemMapFake_WMT:ItemMap {
        displayName = "Fake map";
        descriptionShort = "Fake map";
    };
};

class RscControlsGroup;
class RscText;

class RscInGameUI {
    class RscWeaponRangeArtillery {
        class CA_IGUI_elements_group: RscControlsGroup {};
    };
    class ACE_Mk6_RscWeaponRangeArtillery: RscWeaponRangeArtillery {
        onLoad = QUOTE(uiNamespace setVariable [ARR_2('ACE_Mk6_RscWeaponRangeArtillery',(_this select 0))]; _this call FUNC(turretDisplayLoaded););
        controls[] = {"ACE_MILS_GROUP", "CA_IGUI_elements_group","CA_RangeElements_group"};
        class ACE_MILS_GROUP: CA_IGUI_elements_group {
            idc = 80170;
            class controls {
                class CA_Elev_MILS: RscText {
                    idc = 80175;
                    style = 1;
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706,0.0745,0.0196,1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "80.5";
                    x = "36.8 * 		(0.01875 * SafezoneH)";
                    y = "29.3 * 		(0.025 * SafezoneH)";
                    w = "5.2 * 		(0.01875 * SafezoneH)";
                    h = "1.2 * 		(0.025 * SafezoneH)";
                };
                class CA_Elev_Need_MILS: CA_Elev_MILS {
                    idc = 80176;
                    y = "30.8 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
};

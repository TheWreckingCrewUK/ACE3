class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(BFT) {
                    displayName = "BFT";
                    condition = QUOTE(count ([_player] call EFUNC(bft,getOwnedDevices)) > 0);
                    statement = "";
                    showDisabled = 0;
                    priority = 2;
                    // TODO icon = PATHTOF(UI\inventory\DK10_icon.paa);
                    exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
                    insertChildren = QUOTE(_this call FUNC(getBFTActionChildren));
                };
            };
        };
    };

    #define MACRO_ADD_BFT_ACTIONS \
            class ACE_SelfActions { \
                class GVAR(BFT) { \
                    displayName = "BFT"; \
                    distance = 4; \
                    condition = QUOTE(count ([_target] call EFUNC(bft,getOwnedDevices)) > 0); \
                    statement = ""; \
                    exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"}; \
                    priority = 2; \
                    insertChildren = QUOTE(_this call FUNC(getBFTActionChildren)); \
                }; \
            };

        class LandVehicle;
        class Car: LandVehicle {
            MACRO_ADD_BFT_ACTIONS
        };
        class Tank: LandVehicle {
            MACRO_ADD_BFT_ACTIONS
        };

        class Air;
        class Helicopter: Air {
            MACRO_ADD_BFT_ACTIONS
        };
        class Plane: Air {
            MACRO_ADD_BFT_ACTIONS
        };

        class Ship;
        class Ship_F: Ship {
            MACRO_ADD_BFT_ACTIONS
        };

    // Boxes
    class Box_NATO_Support_F;
    class ACE_Box_BFT_b: Box_NATO_Support_F {
        author = "$STR_ACE_Common_ACETeam";
        displayName = CSTRING(Box_b);
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportItems {
            //MACRO_ADDITEM(ACE_HelmetCam,25);
        };
    };
    class Box_East_Support_F;
    class ACE_Box_BFT_o: Box_East_Support_F {
        author = "$STR_ACE_Common_ACETeam";
        displayName = CSTRING(Box_o);
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportItems {
            //MACRO_ADDITEM(ACE_HelmetCam,25);
        };
    };
    class Box_IND_Support_F;
    class ACE_Box_BFT_i: Box_IND_Support_F {
        author = "$STR_ACE_Common_ACETeam";
        displayName = CSTRING(Box_i);
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportItems {
            //MACRO_ADDITEM(ACE_HelmetCam,25);
        };
    };

    // Vehicles

    // MRAPs
    class MRAP_01_base_F;
    class B_MRAP_01_F: MRAP_01_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_01_hmg_base_F;
    class B_MRAP_01_hmg_F : MRAP_01_hmg_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_01_gmg_base_F;
    class B_MRAP_01_gmg_F : MRAP_01_gmg_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_02_base_F;
    class O_MRAP_02_F : MRAP_02_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_02_hmg_base_F;
    class O_MRAP_02_hmg_F : MRAP_02_hmg_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_02_gmg_base_F;
    class O_MRAP_02_gmg_F : MRAP_02_gmg_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_03_base_F;
    class I_MRAP_03_F : MRAP_03_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_i";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_03_hmg_base_F;
    class I_MRAP_03_hmg_F : MRAP_03_hmg_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_i";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    class MRAP_03_gmg_base_F;
    class I_MRAP_03_gmg_F : MRAP_03_gmg_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_i";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
    };

    // Tanks
    class B_MBT_01_base_F;
    class B_MBT_01_cannon_F : B_MBT_01_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
        EGVAR(bft,defaultInformation)[] = {"Armor", 0, "", 0};
    };

    class O_MBT_02_base_F;
    class O_MBT_02_cannon_F : O_MBT_02_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
        EGVAR(bft,defaultInformation)[] = {"Armor", 0, "", 0};
    };

    class I_MBT_03_base_F;
    class I_MBT_03_cannon_F : I_MBT_03_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_i";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
        EGVAR(bft,defaultInformation)[] = {"Armor", 0, "", 0};
    };

    // Artillery
    class B_MBT_01_arty_base_F;
    class B_MBT_01_arty_F : B_MBT_01_arty_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
        EGVAR(bft,defaultInformation)[] = {"Artillery", 0, "", 0};
    };

    class B_MBT_01_mlrs_base_F;
    class B_MBT_01_mlrs_F : B_MBT_01_mlrs_base_F { // Rocket artillery
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
        EGVAR(bft,defaultInformation)[] = {"Artillery", 0, "", 0};
    };

    class O_MBT_02_arty_base_F;
    class O_MBT_02_arty_F : O_MBT_02_arty_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {"JV5"};
        EGVAR(bft,defaultInformation)[] = {"Artillery", 0, "", 0};
    };

    // Tracked APCs
    class B_APC_Tracked_01_base_F;
    class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F { // APC
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };
    class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F { // Support (dozer)
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };
    class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F { // AA
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };

    class O_APC_Tracked_02_base_F;
    class O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_base_F { // APC
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };
    class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F { // AA
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };

    class I_APC_tracked_03_base_F;
    class I_APC_tracked_03_cannon_F : I_APC_tracked_03_base_F { // APC
        EGVAR(bft,vehicleDevice) = "GroundVehicle_i";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };

    // Wheeled APCs
    class B_APC_Wheeled_01_base_F;
    class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };

    class O_APC_Wheeled_02_base_F;
    class O_APC_Wheeled_02_rcws_F : O_APC_Wheeled_02_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };

    class I_APC_Wheeled_03_base_F;
    class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_i";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver","Turret"}}};
        EGVAR(bft,defaultInformation)[] = {"Mechanized", 0, "", 0};
    };

    // Trucks
    class Truck_01_base_F;
    class B_Truck_01_transport_F : Truck_01_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
    };
    class B_Truck_01_mover_F : B_Truck_01_transport_F { // Towing, Box, Ammo, Fuel
        EGVAR(bft,defaultInformation)[] = {"Service", 0, "", 0};
    };
    class B_Truck_01_medical_F : B_Truck_01_transport_F { // Medical
        EGVAR(bft,defaultInformation)[] = {"Medical", 0, "", 0};
    };
    class B_Truck_01_Repair_F : B_Truck_01_mover_F { // Repair
        EGVAR(bft,defaultInformation)[] = {"Maintenance", 0, "", 0};
    };

    class Truck_03_base_F;
    class O_Truck_03_transport_F : Truck_03_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
    };
    class O_Truck_03_covered_F : Truck_03_base_F {
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
    };
    class O_Truck_03_repair_F : Truck_03_base_F { // Repair
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
        EGVAR(bft,defaultInformation)[] = {"Maintenance", 0, "", 0};
    };
    class O_Truck_03_ammo_F : Truck_03_base_F { // Ammo
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
        EGVAR(bft,defaultInformation)[] = {"Service", 0, "", 0};
    };
    class O_Truck_03_fuel_F : Truck_03_base_F { // Fuel
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
        EGVAR(bft,defaultInformation)[] = {"Service", 0, "", 0};
    };
    class O_Truck_03_device_F : Truck_03_base_F { // Electrical generator
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
        EGVAR(bft,defaultInformation)[] = {"Service", 0, "", 0};
    };
    class O_Truck_03_medical_F : Truck_03_base_F { // Medical
        EGVAR(bft,vehicleDevice) = "GroundVehicle_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Cargo",{0}}}}};
        EGVAR(bft,defaultInformation)[] = {"Medical", 0, "", 0};
    };

    // Naval
    class Boat_Armed_01_minigun_base_F;
    class B_Boat_Armed_01_minigun_F : Boat_Armed_01_minigun_base_F {
        EGVAR(bft,vehicleDevice) = "Naval_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Turret",{0}}}}};
    };
    class I_Boat_Armed_01_minigun_F : Boat_Armed_01_minigun_base_F {
        EGVAR(bft,vehicleDevice) = "Naval_i";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Turret",{0}}}}};
    };

    class Boat_Armed_01_base_F;
    class O_Boat_Armed_01_hmg_F : Boat_Armed_01_base_F {
        EGVAR(bft,vehicleDevice) = "Naval_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"JV5",{"Driver",{"Turret",{0}}}}};
    };

    // Helicopters
    class Heli_Light_01_armed_base_F;
    class B_Heli_Light_01_armed_F: Heli_Light_01_armed_base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };

    class Heli_Light_01_unarmed_base_F;
    class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };

    class Heli_Transport_01_base_F;
    class B_Heli_Transport_01_F: Heli_Transport_01_base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };

    class Helicopter_Base_F;
    class Heli_Attack_01_base_F : Helicopter_Base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };
    class Heli_Attack_02_base_F : Helicopter_Base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };
    class Heli_light_03_base_F : Helicopter_Base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_i";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };

    class Helicopter_Base_H;
    class Heli_Transport_03_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevice) = "Aircraft_b";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };
    class Heli_Light_02_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevice) = "Aircraft_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };
    class Heli_Transport_02_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevice) = "Aircraft_i";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };
    class Heli_Transport_04_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevice) = "Aircraft_o";
        EGVAR(bft,vehicleInterfaces)[] = {{"TAD",{"Driver",{"Turret",{0}}}}};
    };

    // Planes
    class Plane_Base_F;
    class Plane_CAS_01_base_F: Plane_Base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_b";
        EGVAR(bft,vehicleInterfaces)[] = {"TAD"};
        EGVAR(bft,defaultInformation)[] = {"Plane", 0, "", 0};
    };
    class Plane_CAS_02_base_F: Plane_Base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_o";
        EGVAR(bft,vehicleInterfaces)[] = {"TAD"};
        EGVAR(bft,defaultInformation)[] = {"Plane", 0, "", 0};
    };
    class Plane_Fighter_03_base_F: Plane_Base_F {
        EGVAR(bft,vehicleDevice) = "Aircraft_i";
        EGVAR(bft,vehicleInterfaces)[] = {"TAD"};
        EGVAR(bft,defaultInformation)[] = {"Plane", 0, "", 0};
    };

    // UAVs
    class UAV_01_base_F;
    class B_UAV_01_F: UAV_01_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_b";
    };
    class O_UAV_01_F: UAV_01_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_o";
    };
    class I_UAV_01_F: UAV_01_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_i";
    };

    class UAV_02_base_F;
    class B_UAV_02_F: UAV_02_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_b";
    };
    class O_UAV_02_F: UAV_02_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_o";
    };
    class I_UAV_02_F: UAV_02_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_i";
    };

    class UAV_02_CAS_base_F;
    class B_UAV_02_CAS_F : UAV_02_CAS_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_b";
    };
    class O_UAV_02_CAS_F : UAV_02_CAS_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_o";
    };
    class I_UAV_02_CAS_F : UAV_02_CAS_base_F {
        EGVAR(bft,vehicleDevice) = "UAV_i";
    };

    // UGVs
    class UGV_01_base_F;
    class B_UGV_01_F : UGV_01_base_F{
        EGVAR(bft,vehicleDevice) = "UGV_b";
    };
    class O_UGV_01_F : UGV_01_base_F{
        EGVAR(bft,vehicleDevice) = "UGV_o";
    };
    class I_UGV_01_F : UGV_01_base_F{
        EGVAR(bft,vehicleDevice) = "UGV_i";
    };

    class UGV_01_rcws_base_F;
    class B_UGV_01_rcws_F : UGV_01_rcws_base_F {
        EGVAR(bft,vehicleDevice) = "UGV_b";
    };
    class O_UGV_01_rcws_F : UGV_01_rcws_base_F {
        EGVAR(bft,vehicleDevice) = "UGV_o";
    };
    class I_UGV_01_rcws_F : UGV_01_rcws_base_F {
        EGVAR(bft,vehicleDevice) = "UGV_i";
    };
};

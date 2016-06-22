class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 1500, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 2500, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 5000, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 7500, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 20000, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 12500, { "driver" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 5000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 5000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 5000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 5000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 1000, { "" }, { "", "", -1 } },
            { "I_Truck_02_medical_F", 5000, { "" }, { "", "", -1 } },
            { "O_Truck_03_medical_F", 5000, { "" }, { "", "", -1 } },
            { "B_Truck_01_medical_F", 1000, { "" }, { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 10000, { "mAir" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 15000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 20000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 25000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 30000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 35000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_transport_F", 400000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 45000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 50000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 55000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 12500, { "" }, { "", "", -1 } },
            { "O_MRAP_02_F", 150000, { "" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 325000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 750000, { "rebel" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", 0, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 0, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 0, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_F", 0, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "B_T_LSV_01_unarmed_F", 0, { "" }, { "life_coplevel", "SCALAR", 6 } },
            { "B_MRAP_01_hmg_F", 0, { "" }, { "life_coplevel", "SCALAR", 8 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 25000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 50000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", 0, { "cAir" }, { "", "", 2 } },
			{ "B_Heli_Light_01_F", 0, { "cAir" }, { "", "", 3 } },
			{ "I_Heli_light_03_unarmed_F", 0, { "cAir" }, { "", "", 4 } },
            { "B_Heli_Transport_01_F", 0, { "cAir" }, { "life_coplevel", "SCALAR", 6 } },
            { "B_Heli_Transport_01_camo_F", 0, { "cAir" }, { "life_coplevel", "SCALAR", 8 } }
            { "B_T_VTOL_01_infantry_F", 0, { "cAir" }, { "life_coplevel", "SCALAR", 9 } }
            { "B_T_VTOL_01_vehicle_F", 0, { "cAir" }, { "life_coplevel", "SCALAR", 9 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 0, { "cg" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 0, { "cg" }, { "", "", -1 } },
            { "B_SDV_01_F", 10000, { "cg" }, { "", "", 3 } }
            { "I_C_Boat_Transport_02_F", 0, { "cg" }, { "", "", 3 } }
            { "B_Boat_Armed_01_minigun_F", 0, { "cg" }, { "life_coplevel", "SCALAR", 8 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 500, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 2200, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 15000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *       INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2200;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 3000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 16000;
        chopShop = 450;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 0;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 2200;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 625;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1100;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1750;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 7500;
        textures[] = { };
    };

    class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1250;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Police", "cop", {
                "textures\MaxC_PD_Offroad_V2.paa"
            } },
            { "Medic", "med", {
                "textures\MaxC_Medic_Offroad_V1.paa"
            } }
        };
    };


    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 1500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 1500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 1500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 1500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 5500;
        chopShop = 4000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Police", "cop", {
                "textures\MaxC_PD_Hatchback_V1.paa"
            } },
            { "Medic", "med", {
                "textures\MaxC_Medic_Hatchback_V1.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 650;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 6500;
        chopShop = 500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 6500;
        chopShop = 1500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1500;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1750;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
            { "Police", "cop", {
                "textures\MaxC_PD_Hatchback_V1.paa"
            } },
            { "Medic", "med", {
                "textures\MaxC_Medic_Hatchback_V1.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
            { "Police", "cop", {
                "textures\MaxC_PD_SUV_V1.paa"
            } },
            { "Medic", "med", {
                "textures\MaxC_Medic_SUV_V1.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1250;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Police", "cop", {
                "MaxC_PD_Hunter_Front V1.paa",
                "MaxC_PD_Hunter_Back_V1.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1500;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1500;
        textures[] = {};
    };
};
/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 5000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 5950, -1 },
            { "hgun_ACPC2_F", "", 7500, -1 },
            { "hgun_PDW2000_F", "", 15000, -1 },
            { "optic_ACO_grn_smg", "", 250, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			//Explosives
			//{ "V_HarnessOGL_brn", "Suicide Vest", 950000, 0 }, Put in blackmarket
			//{ "SatchelCharge_Remote_Mag", "Satchel Charge", 1000000, 0 }, Put in blackmarket
			//AK Family
 		   	{ "arifle_AKS_F", "", 50000, -1 }, //5.45mm
			{ "arifle_AKM_F", "", 75000, -1 }, //7.62mm
			{ "arifle_AK12_F", "", 150000, -1 }, //7.62mm
			//5.56mm
			{ "arifle_TRG20_F", "", 125000, -1 },
			//6.5mm
			{ "arifle_Katiba_F", "", 200000, -1 },
            //7.62mm (Excluding AK)
			{ "srifle_DMR_01_F", "", 250000, -1 },
			{ "srifle_DMR_06_olive_F", "", 275000, -1 },
			//Other Guns
			//{ "srifle_GM6_camo_F", "", 500000, -1 }, Put in blackmarket
            { "arifle_SDAR_F", "", 100000, -1 },
			//Sights/Other
			{ "optic_ACO_grn", "", 350, -1 },
            { "optic_Holosight", "", 360, -1 },
            { "optic_Hamr", "", 750, -1 },
			{ "optic_MRCO", "", 750, -1 },
			//{ "optic_LRPS", "", 750, -1 }, Put in blackmarket
			{ "optic_SOS", "", 750, -1 },
			{ "optic_KHS_hex", "", 750, -1 },
            { "acc_flashlight", "", 100, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 30 },
            { "30Rnd_65x39_caseless_green", "", 25 },
            { "10Rnd_762x54_Mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "5Rnd_127x108_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 25 }
            { "30Rnd_545x39_Mag_F", "", 25 }
            { "30Rnd_762x39_Mag_F", "", 25 }

        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 5000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 5950, -1 },
            { "hgun_ACPC2_F", "", 7500, -1 },
            { "hgun_PDW2000_F", "", 15000, -1 },
            { "optic_ACO_grn_smg", "", 250, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Tanoa Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 50, 45 },
            { "ItemMap", "", 25, 15 },
            { "ItemCompass", "", 25, 15 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 125, 75 },
            { "FirstAidKit", "", 75, 65 },
            { "NVGoggles", "", 1000, 980 },
            { "Chemlight_red", "", 100, -1 },
            { "Chemlight_yellow", "", 100, 50 },
            { "Chemlight_green", "", 100, 50 },
            { "Chemlight_blue", "", 100, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Item Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cadet!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 },
            { "hgun_P07_F", "", 0, -1 },
            { "Binocular", "", 0, -1 },
            { "ItemGPS", "", 0, -1 },
            { "ToolKit", "", 0, -1 },
            { "FirstAidKit", "", 0, -1 },
            { "Medikit", "", 0, -1 },
            { "NVGoggles", "", 0, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 0 }
        };
    };

    class cop_cadet {
        name = "Cadet Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cadet!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol
			//Attachments / Misc
            { "muzzle_snds_L", "", 0, -1 } //9mm Suppresor
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 },
            { "16Rnd_9x21_Mag", "", 0 }
        };
    };

        class cop_officer {
        name = "Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Officer!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 } // 9mm Suppresor
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, // 30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, // 16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, // 30Rnd 5.56mm 
            { "30Rnd_45ACP_Mag_SMG_01", "", 0 } // 30Rnd .45
        };
    };

        class cop_corporal {
        name = "Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Corporal!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol
            { "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod          
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 } //30Rnd 6.5mm 
        };
    };

     class cop_sergeant {
        name = "Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm
			{ "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm
			{ "arifle_MX_Black_F", "", 0, -1 }, //MX
            { "arifle_MXM_Black_F", "", 0, -1 }, //MXM
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod          
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
            { "optic_SOS", "", 0, -1 } //MOS
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }, //Flashbang
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 }, //30Rnd 6.5mm 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 0 } //100Rnd 6.5mm 
        };
    };  
	
	class cop_snrsergeant {
        name = "Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Sergeant!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm
			{ "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm
			{ "arifle_MX_Black_F", "", 0, -1 }, //MX
            { "arifle_MXM_Black_F", "", 0, -1 }, //MXM
            { "srifle_DMR_03_F", "", 0, -1 }, //Mk1
            { "srifle_EBR_F", "", 0, -1 }, //Mk18
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod          
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
            { "optic_SOS", "", 0, -1 }, //MOS
            { "optic_AMS", "", 0, -1 }, //AMS
            { "muzzle_snds_M", "", 0, -1 }, //5.56mm Suppresor	
            { "muzzle_snds_H", "", 0, -1 }, //6.5mm Suppresor	
            { "muzzle_snds_B", "", 0, -1 } //7.62mm Suppresor	
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }, //Flashbang
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 }, //30Rnd 6.5mm 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 0 }, //100Rnd 6.5mm 
            { "20Rnd_762x51_Mag", "", 0 } //20Rnd 7.62mm 
        };
    };  
	
    class cop_lieutenant {
        name = "Lieutenant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Lieutenant!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm
			{ "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm
            { "arifle_MX_Black_F", "", 0, -1 }, //MX
            { "arifle_MXM_Black_F", "", 0, -1 }, //MXM
            { "arifle_MX_SW_Black_F", "", 0, -1 }, //MXSW
            { "srifle_DMR_03_F", "", 0, -1 }, //Mk1
            { "srifle_EBR_F", "", 0, -1 }, //Mk18
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod
			{ "optic_Arco_blk_F", "", 0, -1 }, //ARCO Black			
			{ "optic_ERCO_blk_F", "", 0, -1 }, //ERCO Black
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
            { "optic_SOS", "", 0, -1 }, //MOS
            { "optic_AMS", "", 0, -1 }, //AMS	
            { "muzzle_snds_M", "", 0, -1 }, //5.56mm Suppresor	
            { "muzzle_snds_H", "", 0, -1 }, //6.5mm Suppresor	
            { "muzzle_snds_B", "", 0, -1 } //7.62mm Suppresor
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }, //Flashbang
		};
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 }, //30Rnd 6.5mm 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 0 }, //100Rnd 6.5mm 
            { "20Rnd_762x51_Mag", "", 0 } //20Rnd 7.62mm 
        };
    }; 

    class cop_captain {
        name = "Captain Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Captain!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm [Level 1]
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol [Level 1]
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm [Level 2]
			{ "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm [Level 3]
            { "arifle_MX_Black_F", "", 0, -1 }, //MX [Level 4]
            { "arifle_MXM_Black_F", "", 0, -1 }, //MXM [Level 4]
            { "srifle_DMR_03_F", "", 0, -1 }, //Mk1 [Level 5]
            { "srifle_EBR_F", "", 0, -1 }, //Mk18 [Level 5]
			{ "arifle_MX_SW_Black_F", "", 0, -1 }, //MXSW [Level 6]
            { "arifle_SPAR_03_blk_F", "", 0, -1 }, //SPAR 7.62 [Level 6]
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod     
			{ "optic_Arco_blk_F", "", 0, -1 }, //ARCO Black			
			{ "optic_ERCO_blk_F", "", 0, -1 }, //ERCO Black			
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
            { "optic_SOS", "", 0, -1 }, //MOS
            { "optic_AMS", "", 0, -1 }, //AMS	
            { "muzzle_snds_M", "", 0, -1 }, //5.56mm Suppresor	
            { "muzzle_snds_H", "", 0, -1 }, //6.5mm Suppresor	
            { "muzzle_snds_B", "", 0, -1 } //7.62mm Suppresor	
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }, //Flashbang
		};
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 }, //30Rnd 6.5mm 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 0 }, //100Rnd 6.5mm 
            { "20Rnd_762x51_Mag", "", 0 } //20Rnd 7.62mm 
		};
    }; 

	class cop_commander {
        name = "Commander Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be a Commander!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm [Level 1]
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol [Level 1]
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm [Level 2]
			{ "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm [Level 3]
            { "arifle_MX_Black_F", "", 0, -1 }, //MX [Level 4]
            { "arifle_MXM_Black_F", "", 0, -1 }, //MXM [Level 4]
            { "srifle_DMR_03_F", "", 0, -1 }, //Mk1 [Level 5]
            { "srifle_EBR_F", "", 0, -1 }, //Mk18 [Level 5]
			{ "arifle_MX_SW_Black_F", "", 0, -1 }, //MXSW [Level 6]
            { "arifle_SPAR_03_blk_F", "", 0, -1 }, //SPAR 7.62 [Level 6]
            { "srifle_DMR_02_F", "", 0, -1 }, //Mar10 [Level 7]
            { "launch_B_Titan_tna_F", "", 0, -1 }, //Titan AA
            { "launch_B_Titan_short_tna_F", "", 0, -1 }, //Titan AT
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod     
			{ "optic_Arco_blk_F", "", 0, -1 }, //ARCO Black			
			{ "optic_ERCO_blk_F", "", 0, -1 }, //ERCO Black			
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
            { "optic_SOS", "", 0, -1 }, //MOS
            { "optic_AMS", "", 0, -1 }, //AMS	
            { "muzzle_snds_M", "", 0, -1 }, //5.56mm Suppresor	
            { "muzzle_snds_H", "", 0, -1 }, //6.5mm Suppresor	
            { "muzzle_snds_B", "", 0, -1 }, //7.62mm Suppresor	
            { "NVGogglesB_blk_F", "Night/Thermal Vision", 20000, -1 } //Thermal Goggles!!!
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }, //Flashbang
		};
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 } //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 }, //30Rnd 6.5mm 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 0 }, //100Rnd 6.5mm 
            { "20Rnd_762x51_Mag", "", 0 }, //20Rnd 7.62mm 
            { "150Rnd_556x45_Drum_Mag_F", "", 0 }, //10Rnd .338
            { "Titan_AA", "", 0 }, //Titan AA
            { "Titan_AT", "", 0 } //Titan AT
		};
    }; 

	class cop_chief {
        name = "Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "You must be a Chief or Deputy Chief!" };
        items[] = {
            { "SMG_05_F", "", 0, -1 }, //Protector 9mm [Level 1]
            { "hgun_P07_snds_F", "Stun Pistol", 0, -1 }, //Taser Pistol [Level 1]
            { "SMG_02_F", "", 0, -1 }, //Sting 9mm [Level 2]
			{ "arifle_SPAR_01_blk_F", "", 0, -1 }, //SPAR 5.56mm [Level 3]
            { "arifle_MX_Black_F", "", 0, -1 }, //MX [Level 4]
            { "arifle_MXM_Black_F", "", 0, -1 }, //MXM [Level 4]
            { "srifle_DMR_03_F", "", 0, -1 }, //Mk1 [Level 5]
            { "srifle_EBR_F", "", 0, -1 }, //Mk18 [Level 5]
			{ "arifle_MX_SW_Black_F", "", 0, -1 }, //MXSW [Level 6]
            { "arifle_SPAR_03_blk_F", "", 0, -1 }, //SPAR 7.62 [Level 6]
            { "srifle_DMR_02_F", "", 0, -1 }, //Mar10 [Level 7]
            { "arifle_SPAR_02_blk_F", "", 0, -1 }, //SPAR 5.56 LMG [Level 7]
            { "srifle_LRR_F", "", 0, -1 }, //M320 [Level 7]
            { "launch_B_Titan_tna_F", "", 0, -1 }, //Titan AA
            { "launch_B_Titan_short_tna_F", "", 0, -1 }, //Titan AT
			//Attachments / Misc
            { "optic_Holosight_smg_blk_F", "", 0, -1 }, //Holosight SMG
            { "optic_Holosight_blk_F", "", 0, -1 }, //Holosight
            { "muzzle_snds_L", "", 0, -1 }, //9mm Suppresor
            { "bipod_01_F_blk", "", 0, -1 }, //Bipod     
			{ "optic_Arco_blk_F", "", 0, -1 }, //ARCO Black			
			{ "optic_ERCO_blk_F", "", 0, -1 }, //ERCO Black			
			{ "optic_SOS", "", 0, -1 }, //MOS
			{ "optic_Hamr", "", 0, -1 }, //RCO		
            { "optic_DMS", "", 0, -1 }, //DMS
            { "optic_SOS", "", 0, -1 }, //MOS
            { "optic_AMS", "", 0, -1 }, //AMS	
            { "muzzle_snds_M", "", 0, -1 }, //5.56mm Suppresor	
            { "muzzle_snds_H", "", 0, -1 }, //6.5mm Suppresor	
            { "muzzle_snds_B", "", 0, -1 }, //7.62mm Suppresor	
            { "muzzle_snds_338_black", "", 0, -1 }, //.338 Suppresor	
            { "NVGogglesB_blk_F", "Night/Thermal Vision", 20000, -1 } //Thermal NVGs!!!
			{ "HandGrenade_Stone", "Flashbang", 0, -1 }, //Flashbang
		};
        mags[] = {
            { "30Rnd_9x21_Mag", "", 0 }, //30Rnd 9mm
            { "16Rnd_9x21_Mag", "", 0 }, //16Rnd 9mm
            { "30Rnd_556x45_Stanag", "", 0 }, //30Rnd 5.56mm 
            { "30Rnd_65x39_caseless_mag", "", 0 }, //30Rnd 6.5mm 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 0 }, //100Rnd 6.5mm 
            { "20Rnd_762x51_Mag", "", 0 }, //20Rnd 7.62mm 
            { "150Rnd_556x45_Drum_Mag_F", "", 0 }, //10Rnd .338
            { "7Rnd_408_Mag", "", 0 }, //7Rnd .408
            { "Titan_AA", "", 0 }, //Titan AA
            { "Titan_AT", "", 0 } //Titan AT
		};
    }; 


    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 10, 5 },
            { "Binocular", "", 15, -1 },
            { "ToolKit", "", 250, 5 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 120, 98 }
        };
        mags[] = {};
    };
};

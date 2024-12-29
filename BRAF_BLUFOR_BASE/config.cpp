  class cfgPatches
{
  class BRAF_B_BRAF_Bluforce
  {
    units[]={
    "BRAF_B_AM11_Unarmed",
    "BRAF_B_AM11_Armed",
    "BRAF_B_AM21_Ammo",
    "BRAF_B_AM21_Fuel",
    "BRAF_B_AM21_Opened",
    "BRAF_B_AM21_Covered",
    "BRAF_B_AM21_Cargo",
    "BRAF_B_Worker_Ammo",
    "BRAF_B_Worker_Cargo",
    "BRAF_B_Worker_Fuel",
    "BRAF_B_Worker_Health",
    "BRAF_B_Worker_Repair",
    "BRAF_B_Worker_Covered",
    "BRAF_B_Fennec_80s",
    "BRAF_B_Fennec_Cargo",
    "BRAF_B_Fennec_Armed",
    "BRAF_B_Fennec_SAR",
    "BRAF_B_Fennec_Unarmed",
    "BRAF_B_Pantera_K2_2BAvEx",
    "BRAF_B_Pantera_K2_FFV_2BAvEx",
    "BRAF_B_Pantera_K2_3BAvEx",
    "BRAF_B_Pantera_K2_FFV_3BAvEx",
    "BRAF_B_Pantera_K2_4BAvEx",
    "BRAF_B_Pantera_K2_FFV_4BAvEx",
    "BRAF_B_Pantera_K2_80s",
    "BRAF_B_Pantera_K2_FFV_80s",
    "BRAF_B_Jaguar_Fast_Rope",
    "BRAF_B_Jaguar_SAR",
    "BRAF_B_Jaguar_Transport",
    "BRAF_B_Voadeira_PAPACU",
    "BRAF_B_Voadeira_PAPAXOTA",
    "BRAF_B_Voadeira_PAUNOLOMBO",
    "braf_B_characters_aviation_army_aviation_pilot",
    "braf_B_guarani_eb_remax",
    "BRAF_B_EE9_Cascavel_EB",
    "BRAF_B_LMV_EB_RCWS",
    "BRAF_B_LMV_EB",
    "BRAF_B_AM21_GLO",
    "BRAF_B_AM11_Armed_UN",
    "BRAF_B_AM11_UN",
    "BRAF_B_AM21_UN",
    "BRAF_B_AM21_GLO_UN",
    "BRAF_B_Worker_Cargo_UN",
    "BRAF_B_Worker_Health_UN",
    "BRAF_B_Worker_UN",
    "braf_b_I_Metis_AAF",
    "braf_b_I_M252_AAF",
    "braf_b_I_M2StaticMG_AAF",
    "braf_b_I_M2StaticMG_MiniTripod_AAF",
    "braf_b_characters_aviation_air_force_fighter_pilot", 
    "braf_b_characters_aviation_air_force_pilot", 
    "braf_b_characters_aviation_navy_fighter_pilot", 
    "braf_b_characters_aviation_navy_pilot", 
    "BRAF_b_Worker_Fuel_FAB", 
    "BRAF_b_Worker_Ammo_FAB", 
    "BRAF_b_Worker_Ammo_CFN", 
    "BRAF_b_Worker_Fuel_CFN", 
    "braf_b_A29_EDA", 
    "braf_b_A29A", 
    "braf_b_A29B_Jambock", 
    "braf_b_A29B_100k", 
    "braf_b_A29B_90k", 
    "braf_b_A29B", 
    "BRAF_b_GripenNG", 
    "braf_b_guarani_eb_unarmed", 
    "BRAF_b_Worker_Fuel_UN", 
    "braf_b_m120"
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"braf_characters_aviation"};
  };
};

class cfgFactionClasses
{
  class BRAF_B_BRAF_Bluforce
  {
    icon="";
    displayName="Brazillian Army";
    side=1;
    priority=1;
    backpack_tf_faction_radio="braf_radio_backpack_olive_notvp";
		personal_tf_faction_radio="TFAR_anprc152";
		rifleman_tf_faction_radio="TFAR_rf7800str";
		airbourne_tf_faction_radio="TFAR_anarc210";
  };
};

class cfgVehicles
{
class BRAF_AM11_Unarmed;
class BRAF_AM11_Armed;
class BRAF_AM21_Ammo;
class BRAF_AM21_Fuel;
class BRAF_AM21_Opened;
class BRAF_AM21_Covered;
class BRAF_AM21_Cargo;
class BRAF_Worker_Ammo;
class BRAF_Worker_Cargo;
class BRAF_Worker_Fuel;
class BRAF_Worker_Health;
class BRAF_Worker_Repair;
class BRAF_Worker_Covered;
class BRAF_Worker_Fuel_UN;
class BRAF_AM11_Armed_UN;
class BRAF_AM11_UN;
class BRAF_AM21_UN;
class BRAF_AM21_GLO_UN;
class BRAF_Worker_Cargo_UN;
class BRAF_Worker_Repair_UN;
class BRAF_Worker_Health_UN;
class BRAF_Worker_UN;
class braf_I_Metis_AAF;
class braf_I_M252_AAF;
class braf_I_M2StaticMG_AAF;
class braf_I_M2StaticMG_MiniTripod_AAF;
class braf_m120;
class BRAF_Worker_Fuel_FAB;
class BRAF_Worker_Ammo_FAB;
class BRAF_Worker_Ammo_CFN;
class BRAF_Worker_Fuel_CFN;
//   VEICULOS TERRESTRES

  class BRAF_B_Worker_Fuel_FAB: BRAF_Worker_Fuel_FAB
    {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
    };
  class BRAF_B_Worker_Ammo_FAB: BRAF_Worker_Ammo_FAB
    {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
    };
  class BRAF_B_Worker_Ammo_CFN: BRAF_Worker_Ammo_CFN
    {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
    };
  class BRAF_B_Worker_Fuel_CFN: BRAF_Worker_Fuel_CFN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM11_Unarmed: braf_AM11_Unarmed
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM11_Armed: braf_AM11_Armed
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_Ammo: BRAF_AM21_Ammo
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_Fuel: BRAF_AM21_Fuel
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_Opened: BRAF_AM21_Opened
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_Covered: BRAF_AM21_Covered
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_Cargo: BRAF_AM21_Cargo
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Covered: braf_Worker_Covered
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Repair: braf_Worker_Repair
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Health: braf_Worker_Health
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Fuel: braf_Worker_Fuel
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Cargo: braf_Worker_Cargo
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Ammo: braf_Worker_Ammo
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
//UN
  class BRAF_B_AM11_Armed_UN: BRAF_AM11_Armed_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM11_UN: BRAF_AM11_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_UN: BRAF_AM21_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_GLO_UN: BRAF_AM21_GLO_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Cargo_UN: BRAF_Worker_Cargo_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Fuel_UN: BRAF_Worker_Fuel_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Repair_UN: BRAF_Worker_Repair_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_Health_UN: BRAF_Worker_Health_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Worker_UN: BRAF_Worker_UN
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  
  
//     BLINDADOS
 class braf_guarani_eb_remax;
 class braf_guarani_eb_unarmed;
 class BRAF_EE9_Cascavel_EB;
 class BRAF_LMV_EB_RCWS;
 class BRAF_LMV_EB;
 class BRAF_AM21_GLO;
 class braf_B_guarani_eb_unarmed: braf_guarani_eb_unarmed
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_army_modern_crewman_2020";
    typicalCargo[]={"braf_B_army_modern_crewman_2020"};
  };
 class braf_B_guarani_eb_remax: braf_guarani_eb_remax
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_army_modern_crewman_2020";
    typicalCargo[]={"braf_B_army_modern_crewman_2020"};
  };
   class BRAF_B_EE9_Cascavel_EB: BRAF_EE9_Cascavel_EB
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_army_modern_crewman_2020";
    typicalCargo[]={"braf_B_army_modern_crewman_2020"};
  };
   class BRAF_B_LMV_EB_RCWS: BRAF_LMV_EB_RCWS
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
   class BRAF_B_LMV_EB: BRAF_LMV_EB
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_AM21_GLO: BRAF_AM21_GLO
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
//     AERONAVES
  class BRAF_Fennec_80s;
  class BRAF_Fennec_Cargo;
  class BRAF_Fennec_Armed;
  class BRAF_Fennec_SAR;
  class BRAF_Fennec_Unarmed;
  class BRAF_Pantera_K2_2BAvEx;
  class BRAF_Pantera_K2_FFV_2BAvEx;
  class BRAF_Pantera_K2_3BAvEx;
  class BRAF_Pantera_K2_FFV_3BAvEx;
  class BRAF_Pantera_K2_4BAvEx;
  class BRAF_Pantera_K2_FFV_4BAvEx;
  class BRAF_Pantera_K2_80s;
  class BRAF_Pantera_K2_FFV_80s;
  class BRAF_Caracal_1;
  class BRAF_Caracal_2;
  class BRAF_Caracal_3;
  class braf_characters_aviation_army_aviation_pilot;
  class braf_characters_aviation_air_force_fighter_pilot;
  class braf_characters_aviation_air_force_pilot;
  class braf_characters_aviation_navy_fighter_pilot;
  class braf_characters_aviation_navy_pilot;
  class braf_A29_EDA; 
  class braf_A29A;
  class braf_A29B_Jambock; 
  class braf_A29B_100k; 
  class braf_A29B_90k;
  class braf_A29B;
  class BRAF_GripenNG;
  class braf_B_characters_aviation_army_aviation_pilot: braf_characters_aviation_army_aviation_pilot
  {
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  modelSides[] = {3,2,1,0};
  };
  class braf_B_characters_aviation_army_aviation_pilot:braf_characters_aviation_army_aviation_pilot
  {
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  modelSides[] = {3,2,1,0};
  };
  class braf_B_characters_aviation_air_force_fighter_pilot:braf_characters_aviation_air_force_fighter_pilot
  {
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  modelSides[] = {3,2,1,0};
  };
  class braf_B_characters_aviation_air_force_pilot:braf_characters_aviation_air_force_pilot
  {
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  modelSides[] = {3,2,1,0};
  };
  class braf_B_characters_aviation_navy_fighter_pilot:braf_characters_aviation_navy_fighter_pilot
  {
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  modelSides[] = {3,2,1,0};
  };
  class braf_B_characters_aviation_navy_pilot:braf_characters_aviation_navy_pilot
  {
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  modelSides[] = {3,2,1,0};
  };
  class BRAF_B_Fennec_80s: BRAF_Fennec_80s
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Cargo: braf_Fennec_Cargo
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Armed: BRAF_Fennec_Armed
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_SAR: BRAF_Fennec_SAR
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Unarmed: BRAF_Fennec_Unarmed
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_2BAvEx: BRAF_Pantera_K2_2BAvEx
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_FFV_2BAvEx: BRAF_Pantera_K2_FFV_2BAvEx
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_3BAvEx: BRAF_Pantera_K2_3BAvEx
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_FFV_3BAvEx: BRAF_Pantera_K2_FFV_3BAvEx
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_4BAvEx: BRAF_Pantera_K2_4BAvEx
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_FFV_4BAvEx: BRAF_Pantera_K2_FFV_4BAvEx
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
   class BRAF_B_Pantera_K2_80s: BRAF_Pantera_K2_80s
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Pantera_K2_FFV_80s: BRAF_Pantera_K2_FFV_80s
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Jaguar_Fast_Rope: braf_Caracal_1
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Jaguar_SAR: braf_Caracal_2
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Jaguar_Transport: braf_Caracal_3
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class braf_B_A29_EDA: braf_A29_EDA
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class braf_B_A29A: braf_A29A
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class braf_B_A29B_Jambock:  braf_A29B_Jambock
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class braf_B_A29B_100k: braf_A29B_100k
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class braf_B_A29B_90k: braf_A29B_90k
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class braf_B_A29B: braf_A29B
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_GripenNG: BRAF_GripenNG
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
//    EMBARCAÇÕES
  class braf_voadeira_01;
  class braf_voadeira_02;
  class braf_voadeira_07;
  class BRAF_B_Voadeira_PAPACU: braf_voadeira_01
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Voadeira_PAPAXOTA: braf_voadeira_02
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class BRAF_B_Voadeira_PAUNOLOMBO: braf_voadeira_07
  {
    faction="BRAF_B_BRAF_Bluforce";
    side=1;
    crew="Braf_B_army_rifleman_regular_2020";
    typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
// ESTÁTICAS
  class braf_b_I_Metis_AAF: braf_I_Metis_AAF
  {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class braf_b_I_M252_AAF: braf_I_M252_AAF
  {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class braf_b_I_M2StaticMG_AAF: braf_I_M2StaticMG_AAF
  {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class braf_b_I_M2StaticMG_MiniTripod_AAF: braf_I_M2StaticMG_MiniTripod_AAF
  {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      crew="Braf_B_army_rifleman_regular_2020";
      typicalCargo[]={"Braf_B_army_rifleman_regular_2020"};
  };
  class braf_b_m120: braf_m120
  faction="BRAF_B_BRAF_Bluforce";
  side=1;
  crew="Braf_B_army_rifleman_regular_2020";
  typicalCargo[]={"Braf_B_army_rifleman_regular_2000"};
};

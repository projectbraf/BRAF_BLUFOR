class cfgPatches
{
  class BRAF_B_FARDA
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"braf_characters_aviation"};
  };
};

class cfgVehicles
{
  class I_Soldier_F;
  class braf_army_ammo_base;
  class braf_army_ar_base;
  class braf_army_medic_base;
  class braf_army_crewman_base;
  class braf_army_eng_base;
  class braf_army_dmr_base;
  class braf_army_launcher_base;
  class braf_army_support_base;
  class braf_army_of_base;
  class braf_army_sl_base;
  class braf_army_tl_base;
  class braf_army_sniper_base;
  class braf_army_rifleman_base: I_Soldier_F
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_tl_regular_2020: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_unarmed_regular_2020: braf_army_rifleman_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_ar_regular_2020: braf_army_ar_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_sl_jungle_2020: braf_army_sl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_lat_jungle_2020: braf_army_launcher_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_tl_commando_2020: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_ar_commando_2020: braf_army_ar_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_medic_caatinga_2020: braf_army_medic_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_tl_airborne_2020: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_ar_airborne_2020: braf_army_ar_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class Braf_army_mg_airborne_2020: braf_army_ar_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_rifleman_regular_2000: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_tl_regular_2000: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_sl_regular_2000: braf_army_sl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_sniper_regular_2000: braf_army_sniper_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_of_regular_2000: braf_army_of_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_medic_regular_2000: braf_army_medic_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_rifleman_jungle_2000: braf_army_rifleman_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_tl_jungle_2000: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  }; 
  class braf_army_medic_jungle_2000: braf_army_medic_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_rifleman_airborne_2000: braf_army_rifleman_base 
  {
    modelSides[] = {3,2,1,0};
  }; 
 class braf_army_medic_airborne_2000: braf_army_medic_base 
  {
    modelSides[] = {3,2,1,0};
  }; 
  class braf_army_sniper_jungle_2000: braf_army_sniper_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_tl_commando_2000: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_tl_airborne_2000: braf_army_tl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_sl_airborne_2000: braf_army_sl_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_sniper_airborne_2000: braf_army_sniper_base 
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_of_airborne_2000: braf_army_of_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_gloves: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_acu_regular: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_acu_regular_gloves: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_acu_rolled_regular: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_acu_rolled_regular_gloves: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_camo: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_gloves_camo: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_black: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_gloves_black: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_jungle: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_jungle_gloves: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_regular_CoverallCrew: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_camo_airborne: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_combat_shirt_camo_gloves_airborne: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_jacket_lizard: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_jacket_gloves_lizard: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_jacket_woodland: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_jacket_woodland_gloves: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_jacket_woodland_commando: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_Army_safe: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_Army_safe_airborne: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_Army_safe_jungle: braf_army_rifleman_base

  {
    modelSides[] = {3,2,1,0};
  };
  class braf_army_of_caatinga_2000: braf_army_of_base
  {
    modelSides[] = {3,2,1,0};
  };
};
class cfgPatches
{
  class BRAF_B_FA
  {
    units[]=
    {
      "braf_b_fab_rifleman", 
      "braf_b_fab_aa", 
      "braf_b_fab_mg", 
      "braf_b_fab_sl", 
      "braf_b_fab_of", 
      "braf_b_fab_tl"
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"braf_characters_aviation"};
  };
};

class cfgFactionClasses
{
  class BRAF_B_BRAF_Bluforce_FA
  {
    icon="";
    displayName="Brazilian Air Force";
    side=1;
    priority=1;
    backpack_tf_faction_radio="braf_radio_backpack_olive_notvp";
		personal_tf_faction_radio="TFAR_anprc152";
		rifleman_tf_faction_radio="TFAR_rf7800str";
		airbourne_tf_faction_radio="TFAR_anarc210";
  };
};
class CfgEditorSubcategories 
{
    class BRAF_FA
    {
      displayname = "Men (Infantry)";
    };
};

class cfgVehicles
{
//CLASS
  class braf_army_rifleman_regular_2000;
  class braf_army_aa_regular_2000;
  class braf_army_ar_regular_2000;
  class braf_army_sl_regular_2000;
  class braf_army_of_regular_2000;
  class braf_army_tl_regular_2000;
  class braf_fab_rifleman: braf_army_rifleman_regular_2000
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_aa: braf_army_aa_regular_2000
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_mg: braf_army_ar_regular_2000
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_sl: braf_army_sl_regular_2000
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_of: braf_army_of_regular_2000
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_tl: braf_army_tl_regular_2000
  {
    displayName="Guard Leader";
    modelSides[] = {3,2,1,0};
  };
// UNITS
  class braf_b_fab_rifleman: braf_fab_rifleman
      {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_aa: braf_fab_aa
      {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_mg: braf_fab_mg
      {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_sl: braf_fab_sl
        {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_of: braf_fab_of
        {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_tl: braf_fab_tl
        {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
};
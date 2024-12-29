class cfgPatches
{
  class BRAF_B_FA_PM
  {
    units[]=
    {
      "braf_b_fab_pa_rifleman", 
      "braf_b_fab_pa_shotgun", 
      "braf_b_fab_pa_tl"
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={};
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

    class BRAF_FA_PM
    {
      displayname = "Men (Military Police)";
    };
};

class cfgVehicles
{
//CLASS
  class braf_army_rifleman_base;
  class braf_fab_pa_rifleman: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_pa_shotgun: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_fab_pa_tl: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
// UNITS
  class braf_b_fab_pa_rifleman:braf_fab_pa_rifleman
        {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_pa_shotgun:braf_fab_pa_shotgun
        {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  class braf_b_fab_pa_tl:braf_fab_pa_tl
        {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      modelSides[] = {3,2,1,0};

      };
  
};
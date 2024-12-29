class cfgPatches
{
  class BRAF_B_Marinha
  {
    units[]=
    {
      "braf_b_marines_ammo", 
      "braf_b_marines_ar", 
      "braf_b_marines_medic", 
      "braf_b_marines_eng", 
      "braf_b_marines_eod", 
      "braf_b_marines_m2_a", 
      "braf_b_marines_m2", 
      "braf_b_marines_dmr", 
      "braf_b_marines_aa", 
      "braf_b_marines_at", 
      "braf_b_marines_mortar_a", 
      "braf_b_marines_mortar", 
      "braf_b_marines_officer", 
      "braf_b_marines_rifleman", 
      "braf_b_marines_lat", 
      "braf_b_marines_sl", 
      "braf_b_marines_tl"
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={"braf_characters_aviation"};
  };
};

class cfgFactionClasses
{
  class BRAF_B_BRAF_Bluforce_marines
  {
    icon="";
    displayName="Brazilian Navy";
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
    class BRAF_marines
    {
      displayname = "Men (Marines)";
    };
};

class cfgVehicles
{
//CLASS
  class braf_army_rifleman_base;
  class braf_marines_ammo: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_ar: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_medic: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_eng: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_eod: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_m2_a: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_m2: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_dmr: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_aa: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_at: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_mortar_a: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_mortar: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_officer: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_rifleman: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_lat: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_sl: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
  class braf_marines_tl: braf_army_rifleman_base
  {
    modelSides[] = {3,2,1,0};
  };
//UNITS
class braf_b_marines_ammo:braf_marines_ammo
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_ar:braf_marines_ar
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_medic:braf_marines_medic
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_eng:braf_marines_eng
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_eod:braf_marines_eod
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_m2_a:braf_marines_m2_a
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_m2:braf_marines_m2
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_dmr:braf_marines_dmr
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_aa:braf_marines_aa
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_at:braf_marines_at
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_mortar_a:braf_marines_mortar_a
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_mortar:braf_marines_mortar
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_officer:braf_marines_officer
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_rifleman:braf_marines_rifleman
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_lat:braf_marines_lat
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_sl:braf_marines_sl
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
class braf_b_marines_tl:braf_marines_tl
{
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      modelSides[] = {3,2,1,0};

      };
};
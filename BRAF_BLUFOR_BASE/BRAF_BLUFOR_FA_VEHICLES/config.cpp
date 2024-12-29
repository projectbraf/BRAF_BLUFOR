class cfgPatches
{
  class BRAF_B_FA_VE
  {
    units[]=
    {
      "BRAF_B_AM11_FAB", 
      "BRAF_B_AM21_FAB", 
      "BRAF_B_Worker_Cargo_FAB", 
      "BRAF_B_Worker_Health_FAB", 
      "BRAF_B_Worker_Repair_FAB", 
      "BRAF_B_Worker_FAB", 
      "BRAF_B_Caracal_7", 
      "BRAF_B_Caracal_8", 
      "BRAF_B_Caracal_9", 
      "BRAF_B_Fennec_Cargo_FAB", 
      "BRAF_B_Fennec_SAR_FAB", 
      "BRAF_B_Fennec_Unarmed_FAB", 
      "BRAF_B_Fennec_Armed_FAB"
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

class cfgVehicles
{
//class
  class BRAF_AM11_FAB;
  class BRAF_AM21_FAB;
  class BRAF_Worker_Cargo_FAB;
  class BRAF_Worker_Health_FAB;
  class BRAF_Worker_Repair_FAB;
  class BRAF_Worker_FAB;
  class BRAF_Caracal_7;
  class BRAF_Caracal_8;
  class BRAF_Caracal_9;
  class BRAF_Fennec_Cargo_FAB;
  class BRAF_Fennec_SAR_FAB;
  class BRAF_Fennec_Unarmed_FAB;
  class BRAF_Fennec_Armed_FAB;
// UNITS
  class BRAF_B_AM11_FAB:BRAF_AM11_FAB
  {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      crew="braf_b_fab_rifleman";
      typicalCargo[]={"braf_b_fab_rifleman"};
      hiddenSelectionsTextures[]=
      {
            "braf\braf_soft\BRAF_Marrua\AM11\Data\FAB\їю*дш_1_co.paa",
            "braf\braf_soft\BRAF_Marrua\AM11\Data\FAB\ТУјжщп*сФЭ_2_co.paa",
            "braf\braf_soft\BRAF_Marrua\AM11\Data\фчЩ?љЧ_ca.paa"
      };
  };
  class BRAF_B_AM21_FAB:BRAF_AM21_FAB
  {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      crew="braf_b_fab_rifleman";
      typicalCargo[]={"braf_b_fab_rifleman"};
  };
  class BRAF_B_Worker_Cargo_FAB:BRAF_Worker_Cargo_FAB
  {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      crew="braf_b_fab_rifleman";
      typicalCargo[]={"braf_b_fab_rifleman"};
  };
  class BRAF_B_Worker_Health_FAB:BRAF_Worker_Health_FAB
  {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      crew="braf_b_fab_rifleman";
      typicalCargo[]={"braf_b_fab_rifleman"};
  };
  class BRAF_B_Worker_Repair_FAB:BRAF_Worker_Repair_FAB
  {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      crew="braf_b_fab_rifleman";
      typicalCargo[]={"braf_b_fab_rifleman"};
  };
  class BRAF_B_Worker_FAB:BRAF_Worker_FAB
  {
      faction="BRAF_B_BRAF_Bluforce_FA";
      side=1;
      crew="braf_b_fab_rifleman";
      typicalCargo[]={"braf_b_fab_rifleman"};
  };
//HELI
class BRAF_B_Fennec_Cargo_FAB: braf_Fennec_Cargo_FAB
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Armed_FAB: BRAF_Fennec_Armed_FAB
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_SAR_FAB: BRAF_Fennec_SAR_FAB
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Unarmed_FAB: BRAF_Fennec_Unarmed_FAB
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Caracal_7: BRAF_Caracal_7
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Caracal_8: BRAF_Caracal_8
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Caracal_9: BRAF_Caracal_9
  {
    faction="BRAF_B_BRAF_Bluforce_FA";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
};
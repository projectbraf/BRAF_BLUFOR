class cfgPatches
{
  class BRAF_B_MB_VE
  {
    units[]=
    {
      "BRAF_B_AM11_CFN", 
      "BRAF_B_AM11_Armed_CFN",
      "BRAF_B_AM21_CFN", 
      "BRAF_B_Worker_Cargo_CFN", 
      "BRAF_B_Worker_Health_CFN", 
      "BRAF_B_Worker_Repair_CFN", 
      "BRAF_B_Worker_CFN", 
      "BRAF_B_Caracal_4", 
      "BRAF_B_Caracal_5", 
      "BRAF_B_Caracal_6", 
      "BRAF_B_Fennec_Cargo_MB", 
      "BRAF_B_Fennec_SAR_MB", 
      "BRAF_B_Fennec_Unarmed_MB", 
      "BRAF_B_Fennec_Armed_MB"
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={};
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

class cfgVehicles
{
//class
  class BRAF_AM11_CFN;
  class BRAF_AM11_Armed_CFN;
  class BRAF_AM21_CFN;
  class BRAF_Worker_Cargo_CFN;
  class BRAF_Worker_Health_CFN;
  class BRAF_Worker_Repair_CFN;
  class BRAF_Worker_CFN;
  class BRAF_Caracal_4;
  class BRAF_Caracal_5;
  class BRAF_Caracal_6;
  class BRAF_Fennec_Cargo_MB;
  class BRAF_Fennec_SAR_MB;
  class BRAF_Fennec_Unarmed_MB;
  class BRAF_Fennec_Armed_MB;
// UNITS
  class BRAF_B_AM11_CFN:BRAF_AM11_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
      hiddenSelectionsTextures[]=
      {
            "braf\braf_soft\BRAF_Marrua\AM11\Data\CFN\їю*дш_1_co.paa",
					"braf\braf_soft\BRAF_Marrua\AM11\Data\CFN\ТУјжщп*сФЭ_2_co.paa",
					"braf\braf_soft\BRAF_Marrua\AM11\Data\фчЩ?љЧ_ca.paa"
      };
  };
  class BRAF_B_AM11_Armed_CFN:BRAF_AM11_Armed_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
      hiddenSelectionsTextures[]=
      {
            "braf\braf_soft\BRAF_Marrua\AM11\Data\CFN\їю*дш_1_co.paa",
					"braf\braf_soft\BRAF_Marrua\AM11\Data\CFN\ТУјжщп*сФЭ_2_co.paa",
					"braf\braf_soft\BRAF_Marrua\AM11\Data\фчЩ?љЧ_ca.paa"
      };
  };
  class BRAF_B_AM21_CFN:BRAF_AM21_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
  };
  class BRAF_B_Worker_Cargo_CFN:BRAF_Worker_Cargo_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
  };
  class BRAF_B_Worker_Health_CFN:BRAF_Worker_Health_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
  };
  class BRAF_B_Worker_Repair_CFN:BRAF_Worker_Repair_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
  };
  class BRAF_B_Worker_CFN:BRAF_Worker_CFN
  {
      faction="BRAF_B_BRAF_Bluforce_marines";
      side=1;
      crew="braf_b_marines_rifleman";
      typicalCargo[]={"braf_b_marines_rifleman"};
  };
//HELI
class BRAF_B_Fennec_Cargo_MB: braf_Fennec_Cargo_MB
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Armed_MB: BRAF_Fennec_Armed_MB
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_SAR_MB: BRAF_Fennec_SAR_MB
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Fennec_Unarmed_MB: BRAF_Fennec_Unarmed_MB
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Caracal_4: BRAF_Caracal_4
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Caracal_5: BRAF_Caracal_5
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
  class BRAF_B_Caracal_6: BRAF_Caracal_6
  {
    faction="BRAF_B_BRAF_Bluforce_marines";
    side=1;
    crew="braf_B_characters_aviation_army_aviation_pilot";
    typicalCargo[]={"braf_B_characters_aviation_army_aviation_pilot"};
  };
};
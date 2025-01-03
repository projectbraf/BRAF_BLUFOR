class cfgPatches
{
  class BRAF_B_BRAF_Bluforce_jungle
  {
    units[]={
    "Braf_B_army_ammo_jungle_2020",
    "Braf_B_army_ar_jungle_2020",
    "Braf_B_army_medic_jungle_2020",
    "Braf_B_army_eng_jungle_2020",
    "Braf_B_army_m2_a_jungle_2020",
    "Braf_B_army_m2_jungle_2020",
    "Braf_B_army_mg_jungle_2020",
    "Braf_B_army_mg_a_jungle_2020",
    "Braf_B_army_dmr_jungle_2020",
    "Braf_B_army_aa_jungle_2020",
    "Braf_B_army_mortar_a_jungle_2020",
    "Braf_B_army_mortar_jungle_2020",
    "Braf_B_army_of_jungle_2020",
    "Braf_B_army_radioop_jungle_2020",
    "Braf_B_army_rifleman_jungle_2020",
    "Braf_B_army_at_jungle_2020",
    "Braf_B_army_lat_jungle_2020",
    "Braf_B_army_sniper_jungle_2020",
    "Braf_B_army_sl_jungle_2020",
    "Braf_B_army_tl_jungle_2020"
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
class CfgEditorSubcategories {
    class BRAF_jungle_C
    {
      displayname = "[2020] Infantry (jungle)";
    };
};

class cfgVehicles
{
  class Braf_army_ammo_jungle_2020;
  class Braf_army_ar_jungle_2020;
  class Braf_army_medic_jungle_2020;
  class Braf_army_eng_jungle_2020;
  class Braf_army_m2_a_jungle_2020;
  class Braf_army_m2_jungle_2020;
  class Braf_army_mg_jungle_2020;
  class Braf_army_mg_a_jungle_2020;
  class Braf_army_dmr_jungle_2020;
  class Braf_army_aa_jungle_2020;
  class Braf_army_mortar_a_jungle_2020;
  class Braf_army_mortar_jungle_2020;
  class Braf_army_of_jungle_2020;
  class Braf_army_radioop_jungle_2020;
  class Braf_army_rifleman_jungle_2020;
  class Braf_army_at_jungle_2020;
  class Braf_army_lat_jungle_2020;
  class Braf_army_sniper_jungle_2020;
  class Braf_army_sl_jungle_2020;
  class Braf_army_tl_jungle_2020;
  class Braf_B_army_ammo_jungle_2020:Braf_army_ammo_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_ar_jungle_2020:Braf_army_ar_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_medic_jungle_2020:Braf_army_medic_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_eng_jungle_2020:Braf_army_eng_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_m2_a_jungle_2020:Braf_army_m2_a_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_m2_jungle_2020:Braf_army_m2_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_mg_jungle_2020:Braf_army_mg_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_mg_a_jungle_2020:Braf_army_mg_a_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_dmr_jungle_2020:Braf_army_dmr_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_aa_jungle_2020:Braf_army_aa_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_mortar_a_jungle_2020:Braf_army_mortar_a_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_mortar_jungle_2020:Braf_army_mortar_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_of_jungle_2020:Braf_army_of_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_radioop_jungle_2020:Braf_army_radioop_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_rifleman_jungle_2020:Braf_army_rifleman_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_at_jungle_2020:Braf_army_at_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_lat_jungle_2020:Braf_army_lat_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_sniper_jungle_2020:Braf_army_sniper_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_sl_jungle_2020:Braf_army_sl_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
  class Braf_B_army_tl_jungle_2020:Braf_army_tl_jungle_2020
      {
      faction="BRAF_B_BRAF_Bluforce";
      side=1;
      modelSides[] = {3,2,1,0};
      
      };
};
//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
    class BRAF_Bluforce
    {
      name="BRAF";

      class jungle
      {
        name="jungle";

        class BRAF_B_Grupo_de_combate
        {
          name="Grupo de combate";
          faction="BRAF_B_BRAF_Bluforce";
          scope=2;
          side=1;
          class Unit0
          {
            side=1;
            vehicle="Braf_B_army_sl_jungle_2020";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={1,-1,0};
          };
          class Unit2
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={-1,-1,0};
          };
          class Unit3
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={1,-2,0};
          };
          class Unit4
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={1,-3,0};
          };
          class Unit5
          {
            side=1;
            vehicle="Braf_B_army_lat_jungle_2020";
            rank="PRIVATE";
            position[]={1,-4,0};
          };
          class Unit8
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-2,0};
          };
          class Unit9
          {
            side=1;
            vehicle="Braf_B_army_lat_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-3,0};
          };
          class Unit10
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-4,0};
          };
        };
        class BRAF_B_Grupo_de_combate_AT
        {
          name="Grupo de combate AT";
          faction="BRAF_B_BRAF_Bluforce";
          scope=2;
          side=1;
          class Unit0
          {
            side=1;
            vehicle="Braf_B_army_sl_jungle_2020";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={1,-1,0};
          };
          class Unit2
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={-1,-1,0};
          };
          class Unit3
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={1,-2,0};
          };
          class Unit4
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={1,-3,0};
          };
          class Unit5
          {
            side=1;
            vehicle="Braf_B_army_at_jungle_2020";
            rank="PRIVATE";
            position[]={1,-4,0};
          };
          class Unit8
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-2,0};
          };
          class Unit9
          {
            side=1;
            vehicle="Braf_B_army_lat_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-3,0};
          };
          class Unit10
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-4,0};
          };
        };
        class BRAF_B_Grupo_de_combate_AA
        {
          name="Grupo de combate AA";
          faction="BRAF_B_BRAF_Bluforce";
          scope=2;
          side=1;
          class Unit0
          {
            side=1;
            vehicle="Braf_B_army_sl_jungle_2020";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={1,-1,0};
          };
          class Unit2
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={-1,-1,0};
          };
          class Unit3
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={1,-2,0};
          };
          class Unit4
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={1,-3,0};
          };
          class Unit5
          {
            side=1;
            vehicle="Braf_B_army_aa_jungle_2020";
            rank="PRIVATE";
            position[]={1,-4,0};
          };
          class Unit8
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-2,0};
          };
          class Unit9
          {
            side=1;
            vehicle="Braf_B_army_aa_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-3,0};
          };
          class Unit10
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-4,0};
          };
        };
        class BRAF_B_Esquadra
        {
          name="Esquadra";
          faction="BRAF_B_BRAF_Bluforce";
          scope=2;
          side=1;
          class Unit0
          {
            side=1;
            vehicle="Braf_B_army_tl_jungle_2020";
            rank="CORPORAL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="Braf_B_army_rifleman_jungle_2020";
            rank="PRIVATE";
            position[]={1,-2,0};
          };
          class Unit2
          {
            side=1;
            vehicle="Braf_B_army_ar_jungle_2020";
            rank="PRIVATE";
            position[]={-1,-2,0};
          };
          class Unit3
          {
            side=1;
            vehicle="Braf_B_army_lat_jungle_2020";
            rank="PRIVATE";
            position[]={2,-4,0};
          };
        };
      };
    };
  };
};

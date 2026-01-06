class CfgPatches
{
	class RB205_medical
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
			"ace_medical_treatment",
			"JLTS_C_Drugs",
			"442_misc_medical"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgWeapons {
    class ACE_ItemCore;

	#define MODEL_BLOOD \
	model="\MRC\JLTS\contraband\Drugs\bacta.p3d"; \
	hiddenSelections[]= \
	{ \
		"camo1", \
		"camo2" \
	}; \
	hiddenSelectionsTextures[]= \
	{ \
		"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa", \
		"#(argb,8,8,3)color(1,0,0,0.8,co)" \
	};

	class ACE_bloodIV: ACE_ItemCore { //BLOOD
		displayName="$STR_205_medical_treatment_Blood_IV";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\bacta_red_ui_ca.paa";
		MODEL_BLOOD
		/*model="\MRC\JLTS\contraband\Drugs\bacta.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(1,0,0,0.8,co)"
		};*/
    };
    class ACE_bloodIV_500: ACE_bloodIV {
		displayName="$STR_205_medical_treatment_Blood_IV_500";
		MODEL_BLOOD
    };
    class ACE_bloodIV_250: ACE_bloodIV {
		displayName="$STR_205_medical_treatment_Blood_IV_250";
		MODEL_BLOOD
    };

	#define MODEL_KOLTO \
	model="\MRC\JLTS\contraband\Drugs\bacta.p3d"; \
	hiddenSelections[]= \
	{ \
		"camo1", \
		"camo2" \
	}; \
	hiddenSelectionsTextures[]= \
	{ \
		"\MRC\JLTS\contraband\Drugs\data\bacta_kolto_co.paa", \
		"#(argb,8,8,3)color(0,0.8,1,0.8,co)" \
	};
	

	class ACE_plasmaIV: ACE_ItemCore { //KOLTO
		displayName="$STR_205_Medical_Treatment_Plasma_IV";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\bacta_kolto_ui_ca.paa";
		MODEL_KOLTO
		/*model="\MRC\JLTS\contraband\Drugs\bacta.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_kolto_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};*/
	};
	class ACE_plasmaIV_500: ACE_plasmaIV {
		displayName="$STR_205_Medical_Treatment_Plasma_IV_500";
		MODEL_KOLTO
	};
	class ACE_plasmaIV_250: ACE_plasmaIV {
		displayName="$STR_205_Medical_Treatment_Plasma_IV_250";
		MODEL_KOLTO
	};

	#define MODEL_BACTA \
	model="\MRC\JLTS\contraband\Drugs\bacta.p3d"; \
	hiddenSelections[]= \
	{ \
		"camo1", \
		"camo2" \
	}; \
	hiddenSelectionsTextures[]= \
	{ \
		"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa", \
		"#(argb,8,8,3)color(0,0.8,1,0.8,co)" \
	};

	class ACE_salineIV: ACE_ItemCore{ //BACTA
		displayName="$STR_205_Medical_Treatment_Saline_IV";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
		MODEL_BACTA
		/*model="\MRC\JLTS\contraband\Drugs\bacta.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};*/
	};
	class ACE_salineIV_500: ACE_salineIV{
		displayName="$STR_205_Medical_Treatment_Saline_IV_500";
		MODEL_BACTA
	};
	class ACE_salineIV_250: ACE_salineIV{
		displayName="$STR_205_Medical_Treatment_Saline_IV_250";
		MODEL_BACTA
	};

	class ACE_morphine: ACE_ItemCore{ //NYEX
		displayName="$STR_205_Medical_Treatment_Morphine_Display";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\stimulant_battle_ui_ca.paa";
		model="\MRC\JLTS\contraband\Drugs\stimulant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_battle_co.paa"
		};
	};
	class ACE_adenosine: ACE_ItemCore{ //PLETHYL-NITRATE
		displayName="$STR_205_Medical_Treatment_Adenosine_Display";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\stimulant_echani_battle_ui_ca.paa";
		model="\MRC\JLTS\contraband\Drugs\stimulant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_echani_battle_co.paa"
		};
	};
	class ACE_epinephrine: ACE_ItemCore{ //QUICKWAKE
		displayName="$STR_205_Medical_Treatment_Epinephrine_Display";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\stimulant_hyper_adrenal_ui_ca.paa";
		model="\MRC\JLTS\contraband\Drugs\stimulant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_hyper_adrenal_co.paa"
		};
	};

	#define BANDAGE_NORMAL \
	picture = "\kobra\442_misc\medical\ui\bandage_ui.paa"; \
	model = "\kobra\442_misc\medical\Bandage.p3d";

	class ACE_fieldDressing: ACE_ItemCore // Medical Tape
	{
		displayName="$STR_205_Medical_Treatment_Bandage_Basic_Display";
		//picture="\z\ace\addons\medical_treatment\ui\fieldDressing_ca.paa";
		BANDAGE_NORMAL
	};
	class ACE_packingBandage: ACE_ItemCore // BACTA BANDAGE
	{
		displayName="$STR_205_Medical_Treatment_Packing_Bandage_Display";
		//picture="\z\ace\addons\medical_treatment\ui\packingBandage_ca.paa";
		picture = "\kobra\442_misc\medical\ui\bactabandage_ui.paa";
		model = "\kobra\442_misc\medical\BactaBandage.p3d";
	};
	class ACE_elasticBandage: ACE_ItemCore // SPRAY BANDAGE
	{
		displayName="$STR_205_Medical_Treatment_Bandage_Elastic_Display";
		//picture="\z\ace\addons\medical_treatment\ui\elasticBandage_ca.paa";
		BANDAGE_NORMAL
	};
	class ACE_quikclot: ACE_ItemCore // DERMASEAL
	{
		displayName="$STR_205_Medical_Treatment_QuikClot_Display";
		//picture="\z\ace\addons\medical_treatment\ui\quickclot_ca.paa";
		BANDAGE_NORMAL
	};
	
	class ACE_surgicalKit: ACE_ItemCore //MEDPAC
	{
		displayName="$STR_205_medical_treatment_SurgicalKit_Display";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\medikit_ui_ca.paa";
		model="\MRC\JLTS\contraband\Drugs\medikit.p3d";
	};
	class ACE_personalAidKit: ACE_ItemCore //ADVANCED MEDPAC
	{
		displayName="$STR_205_medical_treatment_Aid_Kit_Display";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\medikit_ui_ca.paa";
		model="\MRC\JLTS\contraband\Drugs\medikit.p3d";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class ACE_painkillers: CA_Magazine
	{
		displayName="$STR_205_Medical_Treatment_Painkiller_Display";
		model="\MRC\JLTS\contraband\Drugs\protein.p3d";
		picture="\MRC\JLTS\contraband\Drugs\data\ui\protein_ui_ca.paa";
	};
};

class ace_medical_treatment_actions {

	class BasicBandage;
	
	class FieldDressing: BasicBandage {
        displayName="$STR_205_Medical_Treatment_Bandage_Basic_Display";
	};
	class PackingBandage: BasicBandage {
        displayName="$STR_205_Medical_Treatment_Packing_Bandage_Display";
	};
	class ElasticBandage: BasicBandage {
        displayName="$STR_205_Medical_Treatment_Bandage_Elastic_Display";
	};
	class QuikClot: BasicBandage {
        displayName="$STR_205_Medical_Treatment_QuikClot_Display";
	};

	class BloodIV: BasicBandage { //BLOOD
		displayName = "$STR_205_Medical_Treatment_Actions_Blood4_1000"
		displayNameProgress="$STR_205_medical_treatment_Transfusing_Blood";
    };
    class BloodIV_500: BloodIV {
		displayName="$STR_205_medical_treatment_Actions_Blood4_500";
    };
    class BloodIV_250: BloodIV {
		displayName="$STR_205_medical_treatment_Actions_Blood4_250";
    };

	class PlasmaIV: BloodIV { //KOLTO
		displayName="$STR_205_medical_treatment_Actions_Plasma4_1000";
		displayNameProgress="$STR_205_medical_treatment_Transfusing_Plasma";
    };
    class PlasmaIV_500: PlasmaIV {
		displayName="$STR_205_medical_treatment_Actions_Plasma4_500";
    };
    class PlasmaIV_250: PlasmaIV {
		displayName="$STR_205_medical_treatment_Actions_Plasma4_250";
    };

	class SalineIV: BloodIV { //BACTA
		displayName="$STR_205_medical_treatment_Actions_Saline4_1000";
		displayNameProgress="$STR_205_medical_treatment_Transfusing_Saline";
    };
    class SalineIV_500: SalineIV {
		displayName="$STR_205_medical_treatment_Actions_Saline4_500";
    };
    class SalineIV_250: SalineIV {
		displayName="$STR_205_medical_treatment_Actions_Saline4_250";
    };

	class Morphine: FieldDressing { //NYEX
		displayName="$STR_205_medical_treatment_Inject_Morphine";
		displayNameProgress="$STR_205_medical_treatment_Injecting_Morphine";
    };
    class Adenosine: Morphine { //PLETHYL-NITRATE
		displayName="$STR_205_medical_treatment_Inject_Adenosine";
		displayNameProgress="$STR_205_medical_treatment_Injecting_Adenosine";
    };
    class Epinephrine: Morphine { //QUICKWAKE
		displayName="$STR_205_medical_treatment_Inject_Epinephrine";
		displayNameProgress="$STR_205_medical_treatment_Injecting_Epinephrine";
    };
	class Painkillers: Morphine { //COMAREN
		displayName = "$STR_205_Medical_Treatment_Administer_Painkiller";
		displayNameProgress = "$STR_205_Medical_Treatment_Administering_Painkiller";
	};

	class SurgicalKit: FieldDressing {
        displayName = "$STR_205_Medical_Treatment_Use_SurgicalKit";
        displayNameProgress = "$STR_205_Medical_Treatment_Stitching";
	};
	class PersonalAidKit: BasicBandage {
        displayName = "$STR_205_Medical_Treatment_Use_Aid_Kit";
        displayNameProgress = "$STR_205_Medical_Treatment_TreatmentAction";
	};
};
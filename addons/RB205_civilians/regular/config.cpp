class cfgPatches
{
	class RB205_civilians_scientists
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
			"JMSLLTE_civs_mod"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_citizen1",
            "RB205_civ_citizen2",
            "RB205_civ_citizen3",
            "RB205_civ_citizen4",
            "RB205_civ_worker1",
            "RB205_civ_worker2",
            "RB205_civ_worker3"
		};
	};
};

#include "\RB205_civilians\macros.hpp"

//Worker
//Smuggler
//Prisoner

#define ITEMS_CITIZEN {"JLTS_ids_rep_civ","JLTS_credit_card","JLTS_intel_datapad_civ"}
#define ITEMS_SMUGGLER {"JLTS_ids_rep_civ","JLTS_credit_card","JLTS_intel_datapad_civ","JLTS_credits_100","JLTS_credits_50","JLTS_credits_10","JLTS_sabacc_deck"}
#define ITEMS_PRISONER {}

#define EDITOR_DEF \
    scope = 2; \
    scopecurator = 2; \
    side = 3; \
    faction = "RB205_civ"; \
    editorSubcategory = "RB205_civ_regular";

class cfgVehicles
{
    class JMSLLTE_civ_traveler;
    class RB205_civ_citizen1: JMSLLTE_civ_traveler
    {
        displayName = "Citizen 1";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_GenVest_blue"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_GenVest_blue"};
    };
    class JMSLLTE_civ_traveler2;
    class RB205_civ_citizen2: JMSLLTE_civ_traveler2
    {
        displayName = "Citizen 2";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_GenVest_orange"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_GenVest_orange"};
    };
    class JMSLLTE_civ_spacepilot2;
    class RB205_civ_citizen3: JMSLLTE_civ_spacepilot2
    {
        displayName = "Citizen 3";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
    class JMSLLTE_civ_spacepilot3;
    class RB205_civ_citizen4: JMSLLTE_civ_spacepilot3
    {
        displayName = "Citizen 4";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class JMSLLTE_civ_spacepilot;
    class RB205_civ_worker1: JMSLLTE_civ_spacepilot
    {
        displayName = "Worker 1";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_VestPilot_blue"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_VestPilot_blue"};
    };
    class JMSLLTE_civ_worker2;
    class RB205_civ_worker2: JMSLLTE_civ_worker2
    {
        displayName = "Worker 2";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_VestPilot_red"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_VestPilot_red"};
    };
    class JMSLLTE_civ_worker;
    class RB205_civ_worker3: JMSLLTE_civ_worker
    {
        displayName = "Worker 3";
        EDITOR_DEF
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = ITEMS_CITIZEN;
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_VestPilot_black"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSLLTE_c_VestPilot_black"};
    };
};
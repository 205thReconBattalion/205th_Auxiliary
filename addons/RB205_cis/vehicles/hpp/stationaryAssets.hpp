class 3AS_Deka_Static;
class RB205_droideka: 3AS_Deka_Static
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Droideka";
};
class 3as_Deka_Static_Sniper;
class RB205_droideka_sniper: 3as_Deka_Static_Sniper
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Droideka (Sniper)";
};
class k_CIS_Droideka;
class RB205_droideka_heavy: k_CIS_Droideka
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Droideka (Explosive)";
};

class Aux212_Crab_Droid_Light_Static;
class RB205_crab: Aux212_Crab_Droid_Light_Static
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "LM-432 Crab Droid";
};

class 3AS_OG9Turret;
class RB205_OG9: 3AS_OG9Turret
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "OG-9 Homing Spider Droid";
    crew = B1_CREWMAN;
};
class 3as_FlakCannon;
class RB205_flak: 3as_FlakCannon
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Flak Cannon";
    crew = B1_CREWMAN;
};
class 3AS_CIS_Naval_Gun;
class RB205_flak_small: 3AS_CIS_Naval_Gun
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Flak Cannon (Small)";
};
class 3AS_CIS_Naval_Gun_180;
class RB205_flak_small_inverted: 3AS_CIS_Naval_Gun_180
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Flak Cannon (Small/ Inverted)";
};

class 3as_ParticleCannon;
class RB205_particle: 3as_ParticleCannon
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Particle Cannon";
    crew = B1_CREWMAN;
};
class 3AS_J1_Proton_Cannon;
class RB205_proton: 3AS_J1_Proton_Cannon
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Proton Cannon";
    crew = B1_CREWMAN;
};
class 3AS_J1_Proton_Legged;
class RB205_j1_proton: 3AS_J1_Proton_Legged
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "J-1 Proton Cannon";
    crew = B1_CREWMAN;
};

class JLTS_UST_turret_CIS;
class RB205_cis_autoTurret: JLTS_UST_turret_CIS
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Turret Droid";
    class assembleInfo
    {
        displayName = "";
        base = "";
        assembleTo = "";
        dissasembleTo[] = {};
        primary = 1;
    };
}
class ls_turret_pirate_autoturret;
class RB205_cis_defenseTurret: ls_turret_pirate_autoturret
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Defense Turret";
    crew = B1_DEFAULT;
};
class 3AS_J10s_F;
class RB205_j10Turret: 3AS_J10s_F
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "J-10 Dual Blaster Turret";
    crew = B1_DEFAULT;
};
class 3as_CIS_Mortar;
class RB205_cis_mortar: 3as_CIS_Mortar
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Mortar";
    crew = B1_DEFAULT;
    class assembleInfo
    {
        displayName = "";
        base = "";
        assembleTo = "";
        dissasembleTo[] = {};
        primary = 0;
    };
};

class 3AS_CIS_FCP;
class RB205_cis_fcp: 3AS_CIS_FCP
{
    faction = "RB205_cis";
    editorSubCategory = "RB205_cis_turret";
    displayName = "Forward Command Post";
    crew = TACTICAL_DROID;
};
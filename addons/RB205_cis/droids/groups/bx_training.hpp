class RB205_BX_patrol_training
{
    name = "[2] Patrol";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-2,0};
    };
};
class RB205_BX_patrol_sniper_training
{
    name = "[2] Patrol (Sniper)";
    ICON_RECON
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_sniper_training";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_sniper_training";
        rank = "PRIVATE";
        position[] = {0,-2,0};
    };
};
class RB205_BX_fireteam_training
{
    name = "[4] Fireteam";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_heavy_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_fireteam_at_training
{
    name = "[4] Fireteam (Anti-Tank)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_at_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_at_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_fireteam_aa_training
{
    name = "[4] Fireteam (Anti-Air)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_aa_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_aa_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_fireteam_ap_training
{
    name = "[4] Fireteam (Anti-Person)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_ap_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_ap_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX_training";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_squad_training
{
    name = "[8] Squad";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_at_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
    class Unit4
    {
        side = 0;
        vehicle = "RB205_BX_heavy_training";
        rank = "PRIVATE";
        position[] = {0,-6,0};
    };
    class Unit5
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-7.5,0};
    };
    class Unit6
    {
        side = 0;
        vehicle = "RB205_BX_TRAINING";
        rank = "PRIVATE";
        position[] = {0,-9,0};
    };
    class Unit7
    {
        side = 0;
        vehicle = "RB205_BX_sniper_training";
        rank = "PRIVATE";
        position[] = {0,-10.5,0};
    };
};

SPC_PATROL(RB205_BX_patrol_shield_training,"[SHIELD|2] Patrol","RB205_BX_shield_training")
SPC_FIRETEAM(RB205_BX_fireteam_shield_training,"[SHIELD|4] Fireteam","RB205_BX_shield_training")

SPC_PATROL(RB205_BX_patrol_melee_training,"[MELEE|2] Patrol","RB205_BX_melee_training")
SPC_FIRETEAM(RB205_BX_fireteam_melee_training,"[MELEE|4] Fireteam","RB205_BX_melee_training")
SPC_SQUAD(RB205_BX_squad_melee_training,"[MELEE|8] Squad","RB205_BX_melee_training")
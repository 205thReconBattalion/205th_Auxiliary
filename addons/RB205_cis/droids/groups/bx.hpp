class RB205_BX_patrol
{
    name = "[2] Patrol";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-2,0};
    };
};
class RB205_BX_patrol_sniper
{
    name = "[2] Patrol (Sniper)";
    ICON_RECON
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_sniper";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_sniper";
        rank = "PRIVATE";
        position[] = {0,-2,0};
    };
};
class RB205_BX_fireteam
{
    name = "[4] Fireteam";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_heavy";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_fireteam_at
{
    name = "[4] Fireteam (Anti-Tank)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_at";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_at";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_fireteam_aa
{
    name = "[4] Fireteam (Anti-Air)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_aa";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_aa";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_fireteam_ap
{
    name = "[4] Fireteam (Anti-Person)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_ap";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX_ap";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_squad
{
    name = "[8] Squad";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_at";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
    class Unit4
    {
        side = 0;
        vehicle = "RB205_BX_heavy";
        rank = "PRIVATE";
        position[] = {0,-6,0};
    };
    class Unit5
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-7.5,0};
    };
    class Unit6
    {
        side = 0;
        vehicle = "RB205_BX";
        rank = "PRIVATE";
        position[] = {0,-9,0};
    };
    class Unit7
    {
        side = 0;
        vehicle = "RB205_BX_sniper";
        rank = "PRIVATE";
        position[] = {0,-10.5,0};
    };
};

SPC_PATROL(RB205_BX_patrol_shield,"[SHIELD|2] Patrol","RB205_BX_shield")
SPC_FIRETEAM(RB205_BX_fireteam_shield,"[SHIELD|4] Fireteam","RB205_BX_shield")

SPC_PATROL(RB205_BX_patrol_melee,"[MELEE|2] Patrol","RB205_BX_melee")
class RB205_BX_fireteam_melee
{
    name = "[MELEE|4] Fireteam";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain_melee";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_melee";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2: Unit1
    {
        position[] = {0,-3,0};
    };
    class Unit3: Unit1
    {
        position[] = {0,-4.5,0};
    };
};
class RB205_BX_squad_melee
{
    name = "[MELEE|8]  Squad";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_BX_captain_melee";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_BX_melee";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2: Unit1
    {
        position[] = {0,-3,0};
    };
    class Unit3: Unit1
    {
        position[] = {0,-4.5,0};
    };
    class Unit4: Unit1
    {
        position[] = {0,-6,0};
    };
    class Unit5: Unit1
    {
        position[] = {0,-7.5,0};
    };
    class Unit6: Unit1
    {
        position[] = {0,-9,0};
    };
    class Unit7: Unit1
    {
        position[] = {0,-10.5,0};
    };
};
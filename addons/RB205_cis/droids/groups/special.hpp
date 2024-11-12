SPC_PATROL(RB205_B1_patrol_space,"[SPACE|2] Patrol","RB205_B1_space")
SPC_FIRETEAM(RB205_B1_fireteam_space,"[SPACE|4] Fireteam","RB205_B1_space")
SPC_SQUAD(RB205_B1_squad_space,"[SPACE|8] Squad","RB205_B1_space")

class RB205_SCAV_patrol_space
{
    name = "[SCAV|2] Patrol";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-5,0};
    };
};
class RB205_SCAV_fireteam_space
{
    name = "[SCAV|4] Fireteam";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-10,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-15,0};
    };
};
class RB205_SCAV_squad_space
{
    name = "[SCAV|8] Squad";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-10,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-15,0};
    };
    class Unit4
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-20,0};
    };
    class Unit5
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-25,0};
    };
    class Unit6
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-30,0};
    };
    class Unit7
    {
        side = 0;
        vehicle = "RB205_scavenger_droid";
        rank = "PRIVATE";
        position[] = {0,-35,0};
    };
};
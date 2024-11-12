class RB205_CIS_Flitknot_scout_Patrol
{
    name = "Flitknot Scout Patrol";
    ICON_MOTOR
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_flitknot_bx";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_flitknot_bx";
        rank = "PRIVATE";
        position[] = {0,-5,0};
    };
};
class RB205_CIS_Flitknot_scout_Patrol_sniper
{
    name = "Flitknot Scout Patrol (Sniper)";
    ICON_MOTOR
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_flitknot_bx_sniper";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_flitknot_bx_sniper";
        rank = "PRIVATE";
        position[] = {0,-5,0};
    };
};

class RB205_CIS_Flitknot_command_Squad
{
    name = "Flitknot Command Section";
    ICON_MOTOR
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_flitknot";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_flitknot_bx";
        rank = "PRIVATE";
        position[] = {5,-5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_flitknot_bx";
        rank = "PRIVATE";
        position[] = {-5,-5,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_flitknot_bx";
        rank = "PRIVATE";
        position[] = {0,-10,0};
    };
};
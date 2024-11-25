class RB205_B1_patrol_training
{
    name = "[2] Patrol";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-2,0};
    };
};
class RB205_B1_patrol_sniper_training
{
    name = "[2] Patrol (Sniper)";
    ICON_RECON
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_sniper_training";
        rank = "CORPORAL";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_B1_sniper_training";
        rank = "PRIVATE";
        position[] = {0,-2,0};
    };
};
class RB205_B1_fireteam_training
{
    name = "[4] Fireteam";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_B1_heavy_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_B1_fireteam_at_training
{
    name = "[4] Fireteam (Anti-Tank)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_B1_at_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_B1_at_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_B1_fireteam_aa_training
{
    name = "[4] Fireteam (Anti-Air)";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_B1_aa_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_B1_aa_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
};
class RB205_B1_squad_training
{
    name = "[8] Squad";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_commander_training";
        rank = "SERGEANT";
        position[] = {0,0,0};
    };
    class Unit1
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-1.5,0};
    };
    class Unit2
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-3,0};
    };
    class Unit3
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-4.5,0};
    };
    class Unit4
    {
        side = 0;
        vehicle = "RB205_B1_heavy_training";
        rank = "PRIVATE";
        position[] = {0,-6,0};
    };
    class Unit5
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-7.5,0};
    };
    class Unit6
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,-9,0};
    };
    class Unit7
    {
        side = 0;
        vehicle = "RB205_B1_sniper_training";
        rank = "PRIVATE";
        position[] = {0,-10.5,0};
    };
};

class RB205_B1_platoon_training
{
    name = "[XL] Platoon";
    ICON_INFANTRY
    side = 0;
    faction = "RB205_cis";
    class Unit0
    {
        side = 0;
        vehicle = "RB205_B1_training";
        rank = "PRIVATE";
        position[] = {0,0,0};
    };
    class Unit1: Unit0
    {
        position[] = {1,0,0};
    };
    class Unit2: Unit0
    {
        position[] = {2,0,0};
    };
    class Unit3: Unit0
    {
        position[] = {3,0,0};
    };
    class Unit4: Unit0
    {
        position[] = {4,0,0};
    };
    class Unit5: Unit0
    {
        position[] = {5,0,0};
    };
    class Unit6: Unit0
    {
        position[] = {6,0,0};
    };
    class Unit7: Unit0
    {
        position[] = {7,0,0};
    };
    //Reihe 2
    class Unit8: Unit0
    {
        position[] = {0,1.5,0};
    };
    class Unit9: Unit0
    {
        position[] = {1,1.5,0};
    };
    class Unit10: Unit0
    {
        position[] = {2,1.5,0};
    };
    class Unit11: Unit0
    {
        position[] = {3,1.5,0};
    };
    class Unit12: Unit0
    {
        position[] = {4,1.5,0};
    };
    class Unit13: Unit0
    {
        position[] = {5,1.5,0};
    };
    class Unit14: Unit0
    {
        position[] = {6,1.5,0};
    };
    class Unit15: Unit0
    {
        position[] = {7,1.5,0};
    };
    //Reihe 3
    class Unit16: Unit0
    {
        position[] = {0,3,0};
    };
    class Unit17: Unit0
    {
        position[] = {1,3,0};
    };
    class Unit18: Unit0
    {
        position[] = {2,3,0};
    };
    class Unit19: Unit0
    {
        position[] = {3,3,0};
    };
    class Unit20: Unit0
    {
        position[] = {4,3,0};
    };
    class Unit21: Unit0
    {
        position[] = {5,3,0};
    };
    class Unit22: Unit0
    {
        position[] = {6,3,0};
    };
    class Unit23: Unit0
    {
        position[] = {7,3,0};
    };
    //Reihe 3
    class Unit24: Unit0
    {
        position[] = {0,4.5,0};
    };
    class Unit25: Unit0
    {
        position[] = {1,4.5,0};
    };
    class Unit26: Unit0
    {
        position[] = {2,4.5,0};
    };
    class Unit27: Unit0
    {
        position[] = {3,4.5,0};
    };
    class Unit28: Unit0
    {
        position[] = {4,4.5,0};
    };
    class Unit29: Unit0
    {
        position[] = {5,4.5,0};
    };
    class Unit30: Unit0
    {
        position[] = {6,4.5,0};
    };
    class Unit31: Unit0
    {
        position[] = {7,4.5,0};
    };
};
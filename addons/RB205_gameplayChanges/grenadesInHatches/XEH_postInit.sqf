RB205_GIH_compatibleGrenades =
[
    "RB205_thermalDet","RB205_impactGren",
    "3AS_ThermalDetonator","3AS_BaridumCore","3AS_ThrowableCharge",
    "ls_mag_classA_thermalDet","ls_mag_classB_thermalDet","ls_mag_classC_thermalDet","ls_mag_n20_thermalDet"
];

_condition =
{
    (count (RB205_GIH_compatibleGrenades arrayIntersect magazines _player) > 0) && ( alive commander _target);
};

_progressbar = {
    playSound3D ["A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2.wss", _target];
    playSound3D ["\RB205_gameplayChanges\grenadesInHatches\sounds\B1_incGrenade_1.ogg", _target];
    [2, _target, {
        params ["_target"];
        RB205_GIH_grenadeInTank = "APERSMine_Range_Ammo" createVehicle (getPos _target);
        RB205_GIH_grenadeInTank attachTo [_target, [0,-2.25,1.5]];
        _player removeItem ((RB205_GIH_compatibleGrenades arrayIntersect magazines _player) select 0);
    }, {}, "Granate einwerfen", {true}] call ace_common_fnc_progressBar;

    RB205_GIH_targetTank = _target;
    0 spawn {
        sleep 4;
        playSound3D ["\RB205_gameplayChanges\grenadesInHatches\sounds\B1_incGrenade_3.ogg", RB205_GIH_grenadeInTank];
        sleep 2;
        playSound3D ["\RB205_gameplayChanges\grenadesInHatches\sounds\B1_incGrenade_4.ogg", RB205_GIH_grenadeInTank];
        sleep 2;
        RB205_GIH_grenadeInTank setDamage 1;
        RB205_GIH_targetTank setHitPointDamage ["hitEngine", 1];
        RB205_GIH_targetTank setHitPointDamage ["hitHull", 0.75];
        RB205_GIH_targetTank setHitPointDamage ["hitTurret", 1];
        RB205_GIH_targetTank setHitPointDamage ["hitGun", 1];
        { _x setDamage 1 } forEach crew RB205_GIH_targetTank;
    };
};

_action = ["Granate einwerfen", "Granate einwerfen", "",_progressbar,_condition] call ace_interact_menu_fnc_createAction;
["3AS_AAT_base_F", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
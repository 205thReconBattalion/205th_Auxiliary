params ["_position","_dropside","_selection","_linger"];

//variables

	_position= (ASLtoATL _position);

	_spawnpos = _position vectorAdd [random [-100, 0, 100], random [-100, 0, 100], 1000];

    _mainprojectile = createvehicle ["R_MRAAWS_HE_F", _spawnpos, [], 0, "NONE"];

	_mainprojectile setShotParents [player, player];

	_angle = [(_position vectorFromTo _spawnpos)#0, (_position vectorFromTo _spawnpos)#1, ((_position vectorFromTo _spawnpos)#2)];

	_projectile = createvehicle ["ls_ground_droidDispenser", [0, 0, 0], [], 0, "NONE"];
	[_projectile, 0, 0] call BIS_fnc_setPitchBank;
	_projectile setPosATL (getPosATL _mainprojectile);
	[_projectile, _mainprojectile] call BIS_fnc_attachtorelative;
	_projectile allowdamage false;
                    
	[_mainprojectile, _position,_projectile] spawn 
	{
	params ["_mainprojectile", "_position","_projectile"];
	while {alive _mainprojectile} do {
			_mainprojectile setvelocity ((_position vectorFromTo (getPosATL _mainprojectile)) vectorMultiply -100);
		};
	};
                    
[[_projectile], {
	params ["_projectile"];
	_FloodLight = "#lightpoint" createvehiclelocal [0, 0, 0];
	_FloodLight attachto [_projectile, [0, 0, 1]];
	_FloodLight setLightColor [1, 0.8, 0.25];
	_FloodLight setLightAmbient [1, 0.8, 0.25];
	_FloodLight setLightBrightness 0.75;
	_FloodLight setLightDayLight true;
                        
	waitUntil {
		!alive _projectile
		};
	deletevehicle _floodLight;
}] remoteExec ["spawn"];
                    
                    
[_mainprojectile, _position, _dropside, _projectile, _selection,_linger] spawn {
params ["_mainprojectile", "_position", "_dropside", "_projectile", "_selection","_linger"];
                        
_positionATL=_position;
//_projectile allowDamage false;

waitUntil {
if (alive _mainprojectile) then {
_positionATL=getPosATL _mainprojectile;
};
!alive _mainprojectile;
};
                        
[[_positionATL], {
params ['_position'];
_positionATL = _position;
_positionATL set [2, 2];
                            
private _ps1 = "#particlesource" createvehiclelocal _positionATL;
_ps1 setParticleParams [
"\A3\Data_F\ParticleEffects\Pstone\Pstone", "", "SpaceObject",
1, 10, [0, 0, 0], [0, 0, 10], 1, 20, 1, 0.2, [1, 1],
[[1, 1, 1, 1]],
[0, 1], 1, 0, "", "", _ps1];
_ps1 setParticleRandom [0, [10, 10, 0], [5, 5, 10], 0, 1.5, [0, 0, 0, 0], 0, 0];
_ps1 setParticleCircle [10, [0, 10, 10]];
_ps1 setDropInterval 0.01;
                            
_ps1 spawn {
sleep 1;
deletevehicle _this;
};
}] remoteExec ["spawn"];
                        
_craterpos = _positionATL;
_craterpos set [2, 0];
_DroidPodCrater = createvehicle ["land_ShellCrater_02_small_F", _craterpos, [], 0, "CAN_COLLIDE"];
						
deletevehicle _projectile;
_projectile = createvehicle ["ls_ground_droidDispenser", [0,0,0], [], 0, "NONE"];
_projectile enableSimulation false;
_projectile allowdamage false;

_projectile disableCollisionWith _DroidPodCrater;
_DroidPodCrater disableCollisionWith _projectile;

_projectile setVectorUp surfaceNormal position _projectile;

_projectile setPosATL [(getPosATL _DroidPodCrater select 0), (getPosATL _DroidPodCrater select 1), 0];

_DroidPodCrater setVectorDir [(random 1), (random 1), (random 1)]; 
_DroidPodCrater setPosWorld getPosWorld _DroidPodCrater;
_projectile setVectorDir [(random 1), (random 1), (random 1)]; 
_projectile setPosWorld getPosWorld _projectile;

_RotationNumber = (random 5);
[_DroidPodCrater, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;
[_projectile, _RotationNumber, _RotationNumber] call BIS_fnc_setPitchBank;

_position = _CraterPos;
                        
_spawn = _position;
_side = (_dropside select 0);
_list = [
	[ //B1
		"RB205_B1",
		"RB205_B1_commander",
		"RB205_B1_heavy",
		"RB205_B1_at",
		"RB205_B1_aa",
		"RB205_B1_sniper"
	],						
	[ //B1 (Geonosis)
		"RB205_B1_geonosis",
		"RB205_B1_commander_geonosis",
		"RB205_B1_heavy_geonosis",
		"RB205_B1_at_geonosis",
		"RB205_B1_aa_geonosis",
		"RB205_B1_sniper_geonosis"
	],
	[ //B1 (Marine)
		"RB205_B1_marine"
	],
	[ //BX
		"RB205_BX",
		"RB205_BX_captain",
		"RB205_BX_heavy",
		"RB205_BX_at",
		"RB205_BX_aa"
	],
	[ //B2
		"RB205_B2"
	]							
	] # _selection;
                        
_listout = [];
for "_i" from 1 to ((random 3)+3) do {
_listout pushBack (selectRandom _list);
};
                        
                        
[_spawn, _side, _listout, _DroidPodCrater] spawn {
params ["_spawn", "_side", "_listout", "_DroidPodCrater"];
sleep 0.1;
_FloodGroup = [_spawn, _side, _listout] call BIS_fnc_spawngroup;

};
 
if (_linger) then {
	sleep 1;
	_projectile allowdamage true;
	while {alive _projectile} do {
	_time = time;
	waitUntil {
		(time-_time)>60 or !(alive _projectile)
	};
	if (alive _projectile) then {
		_DroidgroupLinger = [_spawn, _side, [selectRandom _listout]] call BIS_fnc_spawngroup;
		} else {
			sleep 1;
			_munition = createVehicle ["M_Mo_82mm_AT_LG",_craterpos,[],0,"CAN_COLLIDE"];
			_munition setShotParents [player, player];
			_munition setVectorDirAndUp ([[vectordir _munition,vectorup _munition], 0, -90, 0] call BIS_fnc_transformVectorDirAndUp);   
			_munition setVelocity [0,0,-10];
			sleep 1;
			deletevehicle _projectile;
			};
		};
};

sleep 1;
_projectile allowdamage true;
sleep 1;
deletevehicle _projectile;

};
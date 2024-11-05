params ["_position", "_height", "_addammo", "_AddMedicalitems", "_podtype", "_who"];

_containerclassname = _podtype;
_spawntype="ground";
switch true do {
    case (_height == 0): {
        // Code to run when _height is 0
        _spawntype="ground";
    };
    case (_height > 0): {
        // Code to run when _height is greater than 0
        _spawntype="chute";
    };
    default {
        // Code to run when _height doesn't match any case
        _spawntype="ground";
    };
};

private _includedplayers = _who;
// players


// if placed on vehicle it will not spawn a box else it will create a box and add it to editable objects
if (!isNull _attachedobject) then {
    // WIP make hint to notify that you cannot airdrop attached onjects - use hintC
    _position = getPosASL _attachedobject;
};

// defined here otherwise it will be undefined outside the if or switch case
switch (_spawntype) do {
    case "attached": {
        _supplyBox = _attachedobject;
[_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
[_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
    };
    case "ground": {
        _supplyBox = createvehicle [_containerclassname, (ASLtoATL _position), [], 0, "CAN_COLLIDE"];
[_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
[_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
        {
            [_x, [[_supplyBox], false]] remoteExec ["addcuratorEditableObjects", 0];
        } forEach allCurators;
        clearitemCargoGlobal _supplyBox;
        clearmagazineCargoGlobal _supplyBox;
        clearweaponCargoGlobal _supplyBox;
        clearBackpackCargoGlobal _supplyBox;
        
        // additemCargoGlobal works with weapons, mags, and items
        if (_addammo) then {
            _supplyBox execVM "\RB205_logistics\scripts\crates\weapons.sqf";
        };
        
        if (_AddMedicalitems) then {
			_supplyBox execVM "\RB205_logistics\scripts\crates\medical.sqf";
        };
    };
    
    case "chute": {
        // needed params - [_position, _height, ]
        // modify pos to altitude
        private _airdropPos = ASLtoATL _position;
        _airdropPos set [2, _height];
        
        // Has to be changed for mod usage	//maybe dan also be done with execVM
        private _myAirdropCrate = [_airdropPos, _itemClass, _itemcount, _containerclassname, _addammo, _AddMedicalitems, _who] spawn {
            params ["_airdropPos", "_itemClass", "_itemcount", "_containerclassname", "_addammo", "_AddMedicalitems", "_who"];
            
            // spawn parachute and attach crate to it
            private _supplyBox = createvehicle [_containerclassname, _airdropPos, [], 0, "CAN_COLLIDE"];
            
[_supplyBox, true, [0, 3, 1], 10, true] call ace_dragging_fnc_setCarryable;
[_supplyBox, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
            
            {
                [_x, [[_supplyBox], false]] remoteExec ["addcuratorEditableObjects", 0];
            } forEach allCurators;
            clearitemCargoGlobal _supplyBox;
            clearmagazineCargoGlobal _supplyBox;
            clearweaponCargoGlobal _supplyBox;
            clearBackpackCargoGlobal _supplyBox;
            
            // additemCargoGlobal works with weapons, mags, and items
            if (_addammo) then {
                _supplyBox execVM "\RB205_logistics\scripts\crates\weapons.sqf";
            };
            
            if (_AddMedicalitems) then {
			    _supplyBox execVM "\RB205_logistics\scripts\crates\medical.sqf";
            };
            
            // spawn smoke/chemlight signal and renew smoke until timelimit is over
            private _smokespawner = [_supplyBox, 60, _containerclassname] spawn {
                params ["_supplyBox", "_maxtime", "_containerclassname"];
                private _starttime = time;
                
                private _chemlightoffset = [];
                private _chemlightDir = 0;
                private _smokeOffset = [];
                switch (_containerclassname) do {
                    default {
                        _chemlightoffset = [0, 0, 1];
                        _chemlightDir = 0;
                    };
                };
                
                switch (true) do {
                    default {
                        private _chemlight = "SmokeShellBlue" createvehicle (position _supplyBox);
                        _chemlight attachto [_supplyBox, _chemlightoffset];
                        _chemlight setDir _chemlightDir;
                        
                        sleep 15;
                        
                        while {(time - _starttime) <= _maxtime} do {
                            if (isNull _chemlight) then {
                                _chemlight = "SmokeShellBlue" createvehicle (position _supplyBox);
                                _chemlight attachto [_supplyBox, _chemlightoffset];
                                _chemlight setDir _chemlightDir;
                            };
                        };
                    };
                };
            };
            
            private _detachCrate = [_supplyBox] spawn {
                params ["_supplyBox"];
                waitUntil {
                    (getPosATL _supplyBox)#2 <= 0
                };
                _craterpos=(getPosATL _supplyBox);
                _craterpos set [2, 0];
                _crater = createvehicle ['land_ShellCrater_01_F', (_craterpos), [], 0, 'CAN_COLLIDE'];
                
                _bullet=createvehicle ['Sh_125mm_APFSDS', (_craterpos), [], 0, 'CAN_COLLIDE'];
                _bullet setvelocity [0, 0, -100];
                
                _supplyBox attachto [_crater];
                _supplyBox setvectorDirAndUp ([[vectorDir _supplyBox, vectorUp _supplyBox], random[-25, 0, 25], 0, random [25, 0, -25]] call BIS_fnc_transformvectorDirandUp);
            };
            
            private _compileSuccessFul = true;
            _compileSuccessFul
        };
    };
};
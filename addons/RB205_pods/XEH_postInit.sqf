private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitWith
{
	diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasInterface) exitWith {};

//if (!isnil "RB205_DroidDropPod" && {RB205_DroidDropPod}) then {
if (isClass(configFile >> "CfgPatches" >> "WBK_DifferentRobotics_1")) then {
    ["205th Recon Battalion [Sci-Fi+]", "Droiden Drop-Pod",
        {
            params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];
            
            _options = ["B1", "B1 (Geonosis)", "B1 (Prototype)", "BX", "B2"];
            
            ["Erstelle Droiden DropPod", [
                ["SIDES", ["Seitenauswahl (NUR EINE SEITE!)", "Die Fraktionsseite der Kampfdroiden."], [east]],
                ["TOOLBOX", ["Typauswahl", "Welche Art von Droiden sollen gespawned werden?"], [3, 2, 3, _options, nil]],
                ["CHECKBOX", ["Verweilen", "Bis das DropPod zerstört wird, werden weitere Droiden gespawned."], [True]]
                ], {
                    params["_values", "_arguments"];
                    _dropside=_values # 0;
                    _selection=_values # 1;
                    _linger=_values # 2;
                    
                    _position=_arguments select 0;

                    [_position,_dropside,_selection,_linger] call RB205_pods_fnc_DropPod;
                    
                }, {}, [_pos]] call zen_dialog_fnc_create;
            }, "\RB205_pods\data\DropPod.paa"] call zen_custom_modules_fnc_register;
};

//if (!isNil "RB205_SupplyDropPod" && {RB205_SupplyDropPod}) then {
if (isClass(configFile >> "CfgPatches" >> "OPTRE_Core")) then {
    ["205th Recon Battalion [Sci-Fi+]", "Resupply-Pod",
        {

            params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]]; 
            ["Resupply mit Ace-Arsenal", 
            [
                ["SLIDER",["Abwurfhöhe", "Wenn die Abwurfhöhe gleich Null ist, spawnen die ResupplyPods auf dem Boden."],[0, 1000, 200, 0]],
                ["CHECKBOX",["Munition","Es wird Munition abgeworfen."],[false]],
                ["CHECKBOX",["Sanitätsmaterial","Es wird Sanitätsmaterial abgeworfen."],[false]]
            ],{
                params["_values","_arguments"];
                _height=_values select 0;
                _addammo=_values select 1;
                _AddMedicalitems=_values select 2;

                _position=_arguments select 0;

                [_position, _height, _addammo, _AddMedicalitems, "OPTRE_ammo_SupplyPod_Empty", allplayers] call RB205_pods_fnc_SupplyPod;
            
        
            },{},[_pos]] call zen_dialog_fnc_create;
        }, "\RB205_pods\data\SupplyPod.paa"
    ] call zen_custom_modules_fnc_register;	
};
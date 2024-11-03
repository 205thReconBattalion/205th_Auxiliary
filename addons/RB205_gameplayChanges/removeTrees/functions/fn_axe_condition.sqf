if !( currentWeapon player == "WBK_SciFi_Sword_1" ) exitwith {false}; 

private _cursorObject = cursorObject;
_trees = nearestTerrainObjects [player, ["TREE","BUSH","FOREST"], 10, false,true]; 
_tooFar = _cursorObject distance2D player > 5;
{
	_color = [1,1,1,0.5];
	if (isHidden _x) then {continue}; 
	if ( _x isEqualTo _cursorObject && !_tooFar ) then { _color = [1,1,0,1]};
	_pos =  getposatl _x;
	drawIcon3D ["\RB205_gameplayChanges\removeTrees\axe_icon.paa", _color , _pos , 1,1, -30];							 
} count _trees;
if ( _tooFar) exitwith {false};
true
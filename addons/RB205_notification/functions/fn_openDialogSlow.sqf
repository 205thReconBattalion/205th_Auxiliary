params [
    "_text",
    ["_placeholders", [], [[]]]
];

cutRsc ["RB205_notification", "PLAIN"];
private _display = uiNamespace getVariable ["RB205_notification",displayNull];
if (isNull _display) exitWith {};
private _ctrlText = _display displayCtrl 205101;
if (isNull _ctrlText) exitWith {};

// Platzhalter einsetzen
private _textFormatArray = [_text] + _placeholders;
private _formattedText = format _textFormatArray;


// Geschwindigkeit der Animation
private _stepDelay = 0.03;


private _characters = toArray _formattedText;
private _charactersCount = count _characters;
[
    _characters,
    _charactersCount,
    _stepDelay,
    _ctrlText
    ] spawn {
    private _characters = _this select 0;
    private _charactersCount = _this select 1;
    private _stepDelay = _this select 2;
    private _ctrlText = _this select 3;

    for "_revealedCharacters" from 0 to _charactersCount do {


        private _animatedCharacters = [];

        {
            if (_forEachIndex < _revealedCharacters) then {
                _animatedCharacters pushBack _x;
            } 
        } forEach _characters;

        private _animatedText = toString _animatedCharacters;

        _ctrlText ctrlSetStructuredText parseText _animatedText;

        uiSleep _stepDelay;
    };
};


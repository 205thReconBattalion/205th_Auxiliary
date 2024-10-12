if (isServer) then
{
	//  [chat, VoN]
	[0, [false, false]] remoteExec ["enablechannel",0,true]; //Global
	[1, [true, false]] remoteExec ["enablechannel",0,true]; //Side
	[2, [false, false]] remoteExec ["enablechannel",0,true]; //Command
	[3, [true, false]] remoteExec ["enablechannel",0,true]; //Group
	[4, [true, false]] remoteExec ["enablechannel",0,true]; //Vehicle
	[5, [false, false]] remoteExec ["enablechannel",0,true]; //Direct
	
	private _channelName = "Recon channel";
	private _channelID = radioChannelCreate [[0.69, 0.20, 0.22, 0.8], _channelName, "%UNIT_NAME", []];
	if (_channelID == 0) exitWith {diag_log format ["Custom channel '%1' creation failed!", _channelName]};
	[_channelID, {_this radioChannelAdd [player]}] remoteExec ["call", [0, -2] select isDedicated, _channelName];
	[(5+_channelID), [true, false]] remoteExec ["enablechannel",0,true]; //Recon
	
	/*for "_i" from 6 to 15 do {
		[_i, [true, false]] remoteExec ["enablechannel",0,true];
	}; //Custom
	*/
};

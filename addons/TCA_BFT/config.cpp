class CfgPatches
{
	class TCA_bft
	{
		name="bft";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]={};
		author="Jacco";
		version="0.1.7.2";
		versionStr="0.1.7.2";
		versionAr[]={0,1,7,2};
	};
};
class Extended_PreInit_EventHandlers
{
	class TCA_bft
	{
		init="call compile preprocessFileLineNumbers '\z\TCA\addons\bft\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class TCA_bft
	{
		init="call compile preprocessFileLineNumbers '\z\TCA\addons\bft\XEH_postInit.sqf'";
	};
};
class TCA_BFT_Interact_Icons
{
	BFT="\z\TCA\addons\bft\UI\icons\BFT.paa";
	colorWheel="\z\TCA\addons\bft\UI\icons\colorWheel.paa";
	on="\z\TCA\addons\bft\UI\icons\on.paa";
	off="\z\TCA\addons\bft\UI\icons\off.paa";
	pen="\z\TCA\addons\bft\UI\icons\pen.paa";
	plus="\z\TCA\addons\bft\UI\icons\plus.paa";

	Pathfinder="\z\TCA\addons\bft\UI\icons\0-0.paa";
	AP="\z\TCA\addons\bft\UI\icons\1-0.paa";
	Zillo="\z\TCA\addons\bft\UI\icons\1-1.paa";
	Chimaera="\z\TCA\addons\bft\UI\icons\1-2.paa";
	Rancor="\z\TCA\addons\bft\UI\icons\1-3.paa";
	Wampa="\z\TCA\addons\bft\UI\icons\1-4.paa";
	MRP="\z\TCA\addons\bft\UI\icons\2-0.paa";
	Nexu="\z\TCA\addons\bft\UI\icons\2-1.paa";
	HSP="\z\TCA\addons\bft\UI\icons\3-0.paa";
	Raven="\z\TCA\addons\bft\UI\icons\3-1.paa";

	class letter
	{
		A="\z\TCA\addons\bft\UI\icons\letter\A.paa";
		B="\z\TCA\addons\bft\UI\icons\letter\B.paa";
		C="\z\TCA\addons\bft\UI\icons\letter\C.paa";
		D="\z\TCA\addons\bft\UI\icons\letter\D.paa";
		E="\z\TCA\addons\bft\UI\icons\letter\E.paa";
		F="\z\TCA\addons\bft\UI\icons\letter\F.paa";
		G="\z\TCA\addons\bft\UI\icons\letter\G.paa";
		H="\z\TCA\addons\bft\UI\icons\letter\H.paa";
		I="\z\TCA\addons\bft\UI\icons\letter\I.paa";
		J="\z\TCA\addons\bft\UI\icons\letter\J.paa";
		K="\z\TCA\addons\bft\UI\icons\letter\K.paa";
		L="\z\TCA\addons\bft\UI\icons\letter\L.paa";
		M="\z\TCA\addons\bft\UI\icons\letter\M.paa";
		N="\z\TCA\addons\bft\UI\icons\letter\N.paa";
		O="\z\TCA\addons\bft\UI\icons\letter\O.paa";
		P="\z\TCA\addons\bft\UI\icons\letter\P.paa";
		Q="\z\TCA\addons\bft\UI\icons\letter\Q.paa";
		R="\z\TCA\addons\bft\UI\icons\letter\R.paa";
		S="\z\TCA\addons\bft\UI\icons\letter\S.paa";
		T="\z\TCA\addons\bft\UI\icons\letter\T.paa";
		U="\z\TCA\addons\bft\UI\icons\letter\U.paa";
		V="\z\TCA\addons\bft\UI\icons\letter\V.paa";
		W="\z\TCA\addons\bft\UI\icons\letter\W.paa";
		X="\z\TCA\addons\bft\UI\icons\letter\X.paa";
		Y="\z\TCA\addons\bft\UI\icons\letter\Y.paa";
		Z="\z\TCA\addons\bft\UI\icons\letter\Z.paa";
	};
};

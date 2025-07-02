//Weapon
	//Magazine -> Ammo -> hit

//3AS_AATCannon
	//3as_24Rnd_AAT_AP -> 3AS_ATT_redPlasma_AT -> 400
	//4Rnd_125mm_cannon_missiles -> M_125mm_cannon_ATGM -> 150

//3AS_GATCannon
	//3AS_24Rnd_GAT_AP -> 3AS_GAT_redPlasma_AT -> 590
	//4Rnd_125mm_cannon_missiles -> M_125mm_cannon_ATGM -> 150

//3AS_ADSD_Cannon
	//3AS_24rnd_125mm_ADSD -> 3AS_ADSD_redPlasma_AT -> 1300

//3AS_MTTCannon
	//3AS_40Rnd_MTT_HEAT -> 3AS_MTT_redplasma_HEAT -> 480

//3AS_ParticleCannon
	//12Rnd_125mm_HE_T_Green -> Sh_125mm_HE_T_Green -> 300

//3AS_Proton_Cannon
	//3as_6Rnd_Proton_AP -> 3AS_Proton_AT -> 450

/*class CfgWeapons
{
	class 3AS_GATCannon;
	class RB205_GAT_Cannon: 3AS_GATCannon
	{
		magazines[] = {"RB205_GAT_Mag","4Rnd_125mm_cannon_missiles"};
	};

	class 3AS_ADSD_Cannon;
	class RB205_ADSD_Cannon: 3AS_ADSD_Cannon
	{
		magazines[] = {"RB205_ADSD_Mag"};
	};

	class 3AS_MTTCannon;
	class RB205_MTT_Cannon: 3AS_MTTCannon
	{
		magazines[] = {"RB205_MTT_Mag"};
	};
};

class CfgMagazines
{
	class 3AS_24Rnd_GAT_AP;
	class RB205_GAT_Mag: 3AS_24Rnd_GAT_AP
	{
		ammo = "RB205_GAT_Ammo";
	};

	class 3AS_24rnd_125mm_ADSD;
	class RB205_ADSD_Mag: 3AS_24rnd_125mm_ADSD
	{
		ammo = "RB205_ADSD_Ammo";
	};

	class 3AS_40Rnd_MTT_HEAT;
	class RB205_MTT_Mag: 3AS_40Rnd_MTT_HEAT
	{
		ammo = "RB205_MTT_Ammo";
	};
};

class CfgAmmo
{
	class 3AS_GAT_redPlasma_AT;
	class RB205_GAT_Ammo: 3AS_GAT_redPlasma_AT
	{
		hit = "400";
	}

	class 3AS_ADSD_redPlasma_AT;
	class RB205_ADSD_Ammo: 3AS_ADSD_redPlasma_AT
	{
		hit = "400";
	};

	class 3AS_MTT_redplasma_HEAT;
	class RB205_MTT_Ammo: 3AS_MTT_redplasma_HEAT
	{
		hit = "400";
	};
};*/

class CfgAmmo
{
	class 3AS_ATT_redPlasma_AT;

	class 3AS_GAT_redPlasma_AT: 3AS_ATT_redPlasma_AT
	{
		hit = "400";
	}
	class 3AS_ADSD_redPlasma_AT: 3AS_ATT_redPlasma_AT
	{
		hit = "400";
	};
};
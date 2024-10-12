/*
	Increases the smoke cloud volume
*/

class cfgPatches
{
	class RB205_gameplayChanges_enhancedSmokeGrenadeEffects
	{
		requiredAddons[] =
        {
            "A3_Data_F_ParticleEffects"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class cfgCloudlets
{
	class Default;
	class SmokeShellWhite: Default
	{
		moveVelocity[] 		= {0.2,0.1,0.1}; // direction and speed of movement of particle [x,z,y]
		MoveVelocityVar[] 	= {0.25,0.25,0.25};	// variability in direction and speed of particle (each part of vector has it is own variability)
		size[] 				= {0.3,4,8}; // size of particle during the life

		/*
		DEFAULT:
			moveVelocity[] 		= {0.2,0.1,0.1};
			MoveVelocityVar[] 	= {0.25,0.25,0.25};
			size[] 				= {0.1,2,6};
		REWORK:
			moveVelocity[] 		= {0.2,0.5,0.1};
			MoveVelocityVar[] 	= {0.7,0.4,0.7};
			size[] 				= {0.46,4.5,18};
		*/
	};
};
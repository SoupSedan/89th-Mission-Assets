class ace_missileguidance_type_Metis;
class ace_missileguidance_type_Hellfire;
class CfgAmmo 
{
    class M_Vorona_HEAT;
    class Vorona_HEAT: M_Vorona_HEAT 
	{
        manualControl = 0;
        irLock = 0;
        laserLock = 0;
        airLock = 0;
        lockType = 0;

        maxSpeed = 250;

        class ace_missileguidance: ace_missileguidance_type_Metis 
		{
            enabled = 1;

            pitchRate = 220;
            yawRate = 220;

            seekerAngle = 300;

            seekerMinRange = 50;
            seekerMaxRange = 5000;
        };
    };
	class Vorona_HEAT_SALH: M_Vorona_HEAT 
	{
        manualControl = 0;
        irLock = 0;
        laserLock = 0;
        airLock = 0;
        lockType = 0;

        maxSpeed = 250;

        class ace_missileguidance: ace_missileguidance_type_Hellfire 
		{
            enabled = 1;

            pitchRate = 120;
            yawRate = 120;

            defaultNavigationType = "Direct";
            navigationTypes[] = {"Direct", "ZeroEffortMiss"};

            seekerAngle = 180;
            seekerAccuracy = 1;

            seekerMinRange = 50;
            seekerMaxRange = 8000;

            defaultAttackProfile = "hellfire_hi";
            attackProfiles[] = {"hellfire_hi"};

            class navigationStates 
            {
                class initial 
                {
                    transitionCondition = "QEFUNC(hellfire,midCourseTransition);"; // Condition needed to transition to next state
                    navigationType = "Direct"; // Navigation type to use in this state
                };
                class terminal 
                {
                    transitionCondition = "";
                    navigationType = "ZeroEffortMiss";
                };
                // transitions from initial -> termimal
                states[] = {"initial", "terminal"};
            };
        };
    };
};
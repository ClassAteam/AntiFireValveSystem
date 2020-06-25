#include "CabinLighting_LandingGearLights.h"
int LandingGearLightsLogic()
{
	// A1
	if (Ush2dpp >= 18.0 && K7_3341 == true)
	{
		POVSH_PER = true;
	}

	if (Usha2 >= 18.0 && K8_3341 == true)
	{
		POVSH_L = true;

		if (K9_3341 == true)
		{
			POVSH_P = true;
		}
	}

	K7_3341 = K8_3341 = K9_3341 = K2_3341 = K5_3341 = false;

	// A2
	if (Ush2dpp >= 18.0 && S40_3230 == true)
	{
		K2_3341 = true;
	}

	if (Usha2 >= 18.0 && K27_3230 == true)
	{
		K5_3341 = true;

		if (K2_3341 == true && K5_3341 == false)
		{
			K7_3341 = true;
		}
	}

	K3_3341 = K6_3341 = false;

	// A3
	if (Ush2dpl >= 18.0 && S17_3230 == 3 && S18_3230 == 4)
	{
		K3_3341 = true;
	}

	if (Usha1 >= 18.0 && K26_3230 == true)
	{
		K6_3341 = true;

		if (K3_3341 == true && K6_3341 == false)
		{
			K8_3341 = true;
		}
	}

	K4_3341 = false;

	// A4
	if (Ush1dpl >= 18.0 && S25_3230 == 3 && S26_3230 == 4)
	{
		K4_3341 = true;
	}

	if (K4_3341 == true && K6_3341 == false)
	{
		K9_3341 = true;
	}

}
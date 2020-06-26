#include "CabinLighting_InnerLights.h"
int InnerLightsLogic()
{
	// A1

	if (Ush1l >= 18.0 && F1_3311 == true && otkaz_vstrosv_busto3_1_k1_lev)
	{
		PBUSTO3_1_1k = true;
	}
	else
	{
		PBUSTO3_1_1k = false;
	}

	// A2

	if (Ush2p >= 18.0 && F2_3311 == true && otkaz_vstrosv_busto3_1_k1_prav)
	{
		PBUSTO3_1_2k = true;
	}
	else
	{
		PBUSTO3_1_2k = false;
	}

	// A3

	if (Ush1dpl >= 18.0 && F3_3311 == true && otkaz_vstrosv_busto3_2_k1_lev)
	{
		PBUSTO3_2_1k = true;
	}
	else
	{
		PBUSTO3_2_1k = false;
	}

	// A4

	if (Ush2dpp >= 18.0 && F4_3311 == true && otkaz_vstrosv_busto3_2_k2_prav)
	{
		PBUSTO3_2_2k = true;
	}
	else
	{
		PBUSTO3_2_2k = false;
	}

	// B1

	if (PBUSTO3_1_2k)
	{
		UVOLSPD11 = 
	}

}
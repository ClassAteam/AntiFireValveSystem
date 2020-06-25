#include "CabinLitghting_NavigationLights.h"


int NavigationLightsLogic()
{
	PV_DOP = false;

	PV_OSN_HV_10 = false;
	PV_OSN_HV_100 = false;
	PV_OSN_HV_30 = false;
	PV_OSN_HV_MIG = false;


	if (Ush2p >= 18.0)
	{
		if (S1_3341 == 3)
		{
			PV_OSN_HV_10 = true;
		}
		if (S1_3341 == 4)
		{
			PV_OSN_HV_30 = true;
		}
		if (S1_3341 == 5)
		{
			PV_OSN_HV_100 = true;
		}
		if (S1_3341 == 6)
		{
			PV_OSN_HV_MIG = true;
		}

		if (P1_OB_P_P_OP == false)
		{
			PV_DOP = true;
		}
	}
}
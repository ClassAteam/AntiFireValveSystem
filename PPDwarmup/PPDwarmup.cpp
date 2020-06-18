#include "AntiFreezeSystemHeader.h"

int PPDwarmapLogic()
{
	//K16_3030 toggle
	if (Ush1dpl >= 18.0)
	{
		if (alpha_rud_1dv || alpha_rud_2dv >= 65.0)
		{
			K16_3030 = true;
		}
		else
		{
			if (K25_3230)
			{
				if (S2_3030)
				{
					K16_3030 = true;
				}
				else
				{
					K16_3030 = false;
				}
			}
			else
			{
				if (K16_3030 && S2_3030 == 2)
				{
					K16_3030 = true;
				}
				else
				{
					K16_3030 = false;
				}
			}
		}
	}
	//K18_3030 toggle
	if (Ush1dpp >= 18.0)
	{
		if (alpha_rud_2dv || alpha_rud_4dv >= 65.0)
		{
			K18_3030 = true;
		}
		else
		{
			if (K24_3230)
			{
				if (S2_3030)
				{
					K18_3030 = true;
				}
				else
				{
					K18_3030 = false;
				}
			}
			else
			{
				if (K18_3030 && S2_3030 == 2)
				{
					K18_3030 = true;
				}
				else
				{
					K18_3030 = false;
				}
			}
		}
	}
	if (Ushap >= 18.0 && K24_3230 && Usho1p >= 18.0 && S1_3030 == 2)
	{
		PKPPD = true;
	}
	else
	{
		PKPPD = false;
	}

	// K2_3030 toggle
	if (PKPPD)
	{
		K2_3030 = true;
	}
	else
	{
		if (Ush2p < 18.0 || M < 1.25)
		{
			K2_3030 = false;
		}
	}
	// K5_3030 toggle
	if (PKPPD)
	{
		K5_3030 = true;
	}
	else
	{
		if (Ush2p < 18.0 || M < 1.25)
		{
			K5_3030 = false;
		}
	}
	// K8_3030 toggle
	if (PKPPD)
	{
		K8_3030 = true;
	}
	else
	{
		if (Ush2p < 18.0 || M < 1.25)
		{
			K8_3030 = false;
		}
	}
	// K1_3030 toggle
	if (K18_3030 && K2_3030 == false)
	{
		K1_3030 = true;
	}
	else
	{
		K1_3030 = false;
	}
	// K4_3030 toggle
	if (K16_3030 && K5_3030 == false)
	{
		K4_3030 = true;
	}
	else
	{
		K4_3030 = false;
	}
	// K7_3030 toggle
	if (K16_3030 && K8_3030 == false)
	{
		K7_3030 = true;
	}
	else
	{
		K7_3030 = false;
	}
	// POPPD2 toggle
	if (Ush2p && K1_3030 == false)
	{
		POPPD2 = true;
	}
	else
	{
		POPPD2 = false;
	}
	// POPPD1 toggle
	if (Ush1dpl && K4_3030 == false)
	{
		POPPD1 = true;
	}
	else
	{
		POPPD1 = false;
	}
	// POPPD3 toggle
	if (Ush2l && K7_3030 == false)
	{
		POPPD3 = true;
	}
	else
	{
		POPPD3 = false;
	}

	//lights toggle
	if (PKPPD)
	{
		obogrev_ppd1_ispr = true;
		obogrev_ppd2_ispr = true;
		obogrev_ppd3_ispr = true;
	}
	else
	{
		obogrev_ppd1_ispr = false;
		obogrev_ppd2_ispr = false;
		obogrev_ppd3_ispr = false;
	}

	if (K1_3030 == K4_3030 == K7_3030 == false)
	{
		BSS811XY = true;
	}
	else
	{
		BSS811XY = false;
	}
}
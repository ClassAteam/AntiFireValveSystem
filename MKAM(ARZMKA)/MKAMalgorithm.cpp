#include "AntiFreezeSystemHeader.h"

int MKAMlogic()
{
	F125_3020 = false;
	K51_3020 = false;

	if (Usho1p >= 18.0)
	{
		if (M < 25)
		{
			F125_3020 = true;
		}

		if (S6_3020 == 2)
		{
			K51_3020 = true;
			K2_3020 = false;
		}
	}

	if (Ushap >= 18.0)
	{
		if (!K51_3020)
		{
			if (!K27_3230)
			{
				K2_3020 = true;
			}
		}
		PZ1 = PZ2 = PZ3 = F110_3020 = F19_3020 = F125_3020, F134_3020 = false;
	}
	if (K2_3020 && F12_3020 && (!OTKAZ_VOZDUHZABOR))
	{
		if (S1_3020 == 3)
		{
			PZ1 = true;
		}

		if (S1_3020 == 4)
		{
			PZ2 = true;
		}
		if (S1_3020 == 5)
		{
			PZ3 = true;
		}
	}
	if (PZ1)
	{
		tc1 = tc1 + tc;

		if (tc1 < 20.0)
		{
			F110_3020 = true;
		}
		if (tc1 < 140.0)
		{
			F110_3020 = true;
		}
		if (tc1 < 180.0)
		{
			F125_3020 = true;
		}
		if (tc1 < 260.0)
		{
			F110_3020 = true;
		}
		if (tc1 < 380.0)
		{
			F110_3020 = true;
		}
		if (tc1 < 420.0)
		{
			F125_3020 = true;
		}
		if (tc1 < 460.0)
		{
			F134_3020 = true;
		}
	}
		else
		{
		tc1 = false;
		}
	if (PZ2)
	{
		tc2 = tc2 + tc;
	if (tc2 < 20.0)
	{
		F110_3020 = true;
	}
	if (tc2 < 60.0)
	{
		F19_3020 = true;
	}
	if (tc2 < 140.0)
	{
		F110_3020 = true;
	}
	if (tc2 < 180.0)
	{
		F125_3020 = true;
	}
	if (tc2 < 260.0)
	{
		F110_3020 = true;
	}
	if (tc2 < 380.0)
	{
		F19_3020 = true;
	}
	if (tc2 < 420.0)
	{
		F125_3020 = true;
	}
	if (tc2 < 460.0)
	{
		F134_3020 = true;
	}

	}
	else
	{
		tc2 = false;
	}

	if (PZ3)
	{
		tc3 = tc3 + tc;

	if (tc3 < 60.0)
	{
		F110_3020 = true;
	}
	if (tc3 < 180.0)
	{
		F19_3020 = true;
	}
	if (tc3 < 240.0)
	{
		F125_3020 = true;
	}
	if (tc3 < 300.0)
	{
		F110_3020 = true;
	}
	if (tc3 < 360.0)
	{
		F134_3020 = true;
	}
	if (tc3 < 420.0)
	{
		F19_3020 = true;
	}
	if (tc3 < 480.0)
	{
		F125_3020 = true;
	}

	}
	else
	{
		tc3 = false;
	}

	




}
#include "LandingGear_EndingSwitchesMechanism.h"
int ending_switch_mech()
{
	// Left card are open
	if (delta_tel_l == 1.0)
	{
		S42_3230 = 1;
		S43_3230 = 1;
	}
	else
	{
		S42_3230 = 0;
		S43_3230 = 0;
	}

	// Right card are open
	if (delta_tel_p == 1.0)
	{
		S44_3230 = 1;
		S45_3230 = 1;
	}
	else
	{
		S44_3230 = 0;
		S45_3230 = 0;
	}

	// left card are closed
	if (delta_tel_l == 0.0)
	{
		S14_3230 = 1;
		S13_3230 = 1;
	}
	else
	{
		S14_3230 = 0;
		S13_3230 = 0;
	}

	// Left rack is not straight
	if (delta_sh_l == 1.0)
	{
		S4_3230 = 1.0;
		S5_3230 = 1.0;
		S33_3230 = 1.0;
		S17_3230 = 1.0;
		S51_3230 = 1.0;
		S52_3230 = 1.0;
	}
	else
	{
		S4_3230 = 0.0;
		S5_3230 = 0.0;
		S33_3230 = 0.0;
		S17_3230 = 0.0;
		S51_3230 = 0.0;
		S52_3230 = 0.0;
	}

	// right rack is not straight
	if (delta_sh_p == 1.0)
	{
		S6_3230 = 1.0;
		S7_3230 = 1.0;
		S37_3230 = 1.0;
		S22_3230 = 1.0;
		S53_3230 = 1.0;
		S54_3230 = 1.0;
	}
	else
	{
		S6_3230 = 0.0;
		S7_3230 = 0.0;
		S37_3230 = 0.0;
		S22_3230 = 0.0;
		S53_3230 = 0.0;
		S54_3230 = 0.0;
	}

	// left rack is shifted
	if (fi_delta_sh_l == 0.0)
	{
		S8_3230 = 1.0;
		S18_3230 = 1.0;
		S49_3230 = 1.0;
	}
	else
	{
		S8_3230 = 0.0;
		S18_3230 = 0.0;
		S49_3230 = 0.0;
	}

	// right rack is shifted
	if (fi_delta_sh_p == 0.0)
	{
		S9_3230 = 1.0;
		S26_3230 = 1.0;
		S48_3230 = 1.0;
	}
	else
	{
		S9_3230 = 0.0;
		S26_3230 = 0.0;
		S48_3230 = 0.0;
	}

	// Sashes of left rack's low ground are open
	if (delta_stv_l == 0.0)
	{
		S10_3230 = 1.0;
		S20_3230 = 1.0;
		S21_3230 = 1.0;
	}
	else
	{
		S10_3230 = 0.0;
		S20_3230 = 0.0;
		S21_3230 = 0.0;
	}

	// Sashes of right rack's low ground are open
	if (delta_stv_p == 0.0)
	{
		S11_3230 = 1.0;
		S28_3230 = 1.0;
		S29_3230 = 1.0;
	}
	else
	{
		S11_3230 = 0.0;
		S28_3230 = 0.0;
		S29_3230 = 0.0;
	}

	// Sashes of front rack's low ground are open
	if (delta_stv_n == 0.0)
	{
		S24_3230 = 1.0;
		S12_3230 = 1.0;
	}
	else
	{
		S24_3230 = 0.0;
		S12_3230 = 0.0;
	}

	// Front rack is released 
	if (delta_sh_n == 1.0)
	{
		S22_3230 = 1.0;
		S40_3230 = 1.0;
	}
	else
	{
		S22_3230 = 0.0;
		S40_3230 = 0.0;
	}

	// Front rack is taked in 
	if (delta_sh_n == 0.0)
	{
		S23_3230 = 1.0;
		S41_3230 = 1.0;
	}
	else
	{
		S23_3230 = 0.0;
		S41_3230 = 0.0;
	}

	// left rack is taked in 
	if (delta_sh_l == 0.0)
	{
		S19_3230 = 1.0;
		S35_3230 = 1.0;
	}
	else
	{
		S19_3230 = 0.0;
		S35_3230 = 0.0;
	}

	// right rack is taked in 
	if (delta_sh_p == 0.0)
	{
		S27_3230 = 1.0;
		S39_3230 = 1.0;
	}
	else
	{
		S27_3230 = 0.0;
		S39_3230 = 0.0;
	}

	P1OBLOP = false;
	S32_3230 = 0.0;
	K9_3230 = 0.0;
	K25_3230 = 0.0;

	P2OBLOP = 0.0;
	S34_3230 = 0.0;
	K26_3230 = 0.0;

	if (Ushal >= 19.0)
	{
		if (Sl >= 0.1)
		{
			P1OBLOP = true;
			S32_3230 = 1.0;
			K9_3230 = 1.0;
			K25_3230 = 1.0;
		}
		else
		{
			if (Sl >= 0.15)
			{
				P2OBLOP = 0.0;
				S34_3230 = 0.0;
				K26_3230 = 0.0;
			}

			if (S33_3230 == 1.0)
			{
				PVPLOP = true;
			}

			if (S35_3230 == 1.0)
			{
				PUPLOP = true;
			}
		}
		
		P1OBLOP = false;
		S32_3230 = 0.0;
		K9_3230 = 0.0;
		K25_3230 = 0.0;

		P2OBLOP = 0.0;
		S34_3230 = 0.0;
		K26_3230 = 0.0;

	}

	if (Ushap >= 19.0)
	{
		if (Sp >= 0.1)
		{
			P1OBPOP = true;
			S38_3230 = 1.0;
			K10_3230 = 1.0;
			K24_3230 = 1.0;
		}
		else
		{
			if (Sp >= 0.15)
			{
				P2OBPOP = 0.0;
				S36_3230 = 0.0;
				K27_3230 = 0.0;
			}

			if (S37_3230 == 1.0)
			{
				PVPPOP = true;
			}

			if (S39_3230 == 1.0)
			{
				PUPPOP = true;
			}
		}
	}

	if (Ush1dpp >= 19.0 && delta_sh_n == 1.0)
	{
		PVPPEROP = true;
		K6_3230 = true;
		K19_3230 = true;
		S40_3230 = 1.0;
	}
	else
	{
		PVPPEROP = false;
		K6_3230 = false;
		K19_3230 = false;
		S40_3230 = 0.0;
	}

	if (delta_sh_n = 0.0)
	{
		PUPPEROP = true;
		S41_3230 = 1.0;
	}
	else
	{
		PUPPEROP = false;
		S41_3230 = 0.0;
	}

}
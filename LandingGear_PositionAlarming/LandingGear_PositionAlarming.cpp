#include "LandingGear_PositionAlarming.h"
int position_alarming_logic()
{
	//left side
	//left rack is wraped 1st channel
	K25_3230 = false;
	UKS4X313 = false;
	
	//left rack is taken
	K32_3230 = false;
	UKS4X316 = false;

	//sashes of left rack is closed
	K45_3230 = false;
	UKS4X317 = false;

	if (Ushap >= 19.0)
	{
		if (S32_3230 == 1 && S55_3230 == 0)
		{
			//left rack is wraped
			K25_3230 = true;
			UKS4X313 = true;
		}

		if (S35_3230 == 1)
		{
			K32_3230 = true;
			UKS4X316 = true;
		}

		if (S10_3230 == 1)
		{
			K45_3230 = true;
			UKS4X317 = true;
		}

	}

	K31_3230 = false;
	UKS4X314 = false;
	UKS4X315 = false;

	if (Ushal >= 19.0)
	{
		if (S49_3230 == 1)
		{
			//left rack is shifted
			UKS4X315 = true;
		}

		if (S33_3230 == 1)
		{
			//left rack is released
			K31_3230 = true;
			UKS4X314 = true;
		}
	}

	K26_3230 = false;
	UKS4X322 = false;

	if (Ushal >= 19.0 && S34_3230 == 1 && S57_3230 == 0)
	{
		//left rack is wraped channel 2
		K26_3230 = true;
		UKS4X322 = true;
	}

	//right rack is wraped channel 1
	K24_3230 = false;
	UKS4X38 = false;

	//right rack is released
	K33_3230 = false;
	UKS4X39 = false;

	//right rack is taken
	K34_3230 = false;
	UKS4X311 = false;

	//sashes of right rack is closed
	K44_3230 = false;
	UKS4X312 = false;

	//right rack is shifted
	UKS4X310 = false;

	if (Ushap >= 19.0)
	{
		if (S38_3230 == 1 && S56_3230 == 0)
		{
			//left rack is wraped channel 1
			K24_3230 == true;
			UKS4X38 == true;
		}

		if (S37_3230 == 1)
		{
			K33_3230 = true;
			UKS4X39 = true;
		}

		if (S11_3230 == 1)
		{
			K44_3230 = true;
			UKS4X312 = true;
		}

		if (S48_3230 == 1)
		{
			UKS4X310 = true;
		}

		if (S39_3230 == 1)
		{
			K34_3230 = true;
			UKS4X311 = true;
		}

		if (S36_3230 == 1 && S58_3230 == 0)
		{
			//right rack is wraped channel 2
			K27_3230 = true;
			UKS4X321 = true;
		}
		else
		{
			K27_3230 = false;
			UKS4X321 = false;
		}

		K35_3230 = false;
		UKS4X318 = false;

		K46_3230 = false;
		UKS4X320 = false;
		UKS4X319 = false;

		if (S40_3230 == 0)
		{
			//front rack is released
			K35_3230 = true;
			UKS4X318 = true;
		}

		if (S12_3230 == 0)
		{
			//sashes of front rack are closed
			K46_3230 = true;
			UKS4X320 = true;
		}

		if (S41_3230 == 0)
		{
			UKS4X319 = true;
		}
	}

	K21_3230 = false;
	BSS824X1v = false;

	if (Ush2dpp >= 19.0)
	{
		if (delta_z > 0.0)
		{
			K21_3230 = true;
		}

		if (K18_3230 || K19_3230 || K20_3230 == false && K21_3230 == true)
		{
			BSS824X1v = true;
		}
	}

	if (Ush1dpp >= 19.0)
	{
		if (S17_3230 == 1)
		{
			K18_3230 = true;
		}
		else
		{
			K18_3230 = false;
		}

		if (S25_3230 == 1)
		{
			K19_3230 = true;
		}
		else
		{
			K19_3230 = false;
		}

		if (S22_3230 == 1)
		{
			K20_3230 = true;
		}
		else
		{
			K20_3230 = false;
		}
	}

	K41_3230 = false;
	K42_3230 = false;
	K43_3230 = false;

	K36_3230 = false;
	K37_3230 = false;
	K38_3230 = false;

	K39_3230 = false;
	K40_3230 = false;

	if (Ush1dpl >= 19.0)
	{

		if (S17_3230 == 1)
		{
			if (S18_3230 == 1)
			{
				K36_3230 = true;
			}
			else
			{
				K36_3230 = false;
			}
		}

		if (S19_3220 == 0 || S20_3220 == 0 || S21_3220 == 0)
		{
			K38_3230 = true;
		}

		if (S25_3230 == 1)
		{
			if (S26_3230 == 1)
			{
				K41_3230 = true;
			}
			else
			{
				K42_3230 = false;
			}
		}

		if (S27_3220 == 0 || S28_3220 == 0 || S29_3220 == 0)
		{
			K43_3230 = true;
		}

		if (S22_3230 == 1)
		{
			K39_3230 = true;

		}
		else
		{
			if (S23_3230 == 0 || S24_3230 == 0)
			{
				K40_3230 = true;
			}
		}

		if (K36_3230 == true)
		{
			//left rack is released
			BSS825X5v = true;
		}
		else
		{
			//left rack is released
			BSS825X5v = true;
		}

		if (K41_3230 == true)
		{
			//right rack is released
			BSS825X5z = true;
		}
		else
		{
			//right rack is released
			BSS825X5z = true;
		}

		if (K39_3230 == true)
		{
			//front rack is released
			BSS825X5x = true;
		}
		else
		{
			//front rack is released
			BSS825X5x = true;
		}

		if (K37_3230 == true)
		{
			//left rack is not intaken nor released
			BSS825X5BB = true;
		}
		else
		{
			//left rack is not intaken nor released
			BSS825X5BB = true;
		}

		if (K42_3230 == true)
		{
			//left rack is not intaken nor released
			BSS825X5DD = true;
		}
		else
		{
			//left rack is not intaken nor released
			BSS825X5DD = false;
		}

		if (K38_3230 == true)
		{
			//left rack is intaken
			BSS824X1n = true;
		}
		else
		{
			//left rack is intaken
			BSS824X1n = false;
		}

		if (K43_3230 == true)
		{
			//right rack is intaken
			BSS824X1r = true;
		}
		else
		{
			//right rack is intaken
			BSS824X1r = false;
		}
		if (K28_3230 == true)
		{
			//front rack is released
			BSS824X1p = true;
		}
		else
		{
			//front rack is released
			BSS824X1p = true;
		}

	}

	



}
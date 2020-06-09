#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "HydroValvesHeader.h"
void logic()
{
	//					KSURGS_1 toggle
	if (Ush1DPL >= 18.0)
	{
		if (F1_2920 == true)
		{
			if (S1_2920 == 3)
			{
				KSURGS_1 = true;
			}
			else
			{
				KSURGS_1 = false;
			}
		}
		else
		{
			KSURGS_1 = false;
		}
	}
	else
	{
		KSURGS_1 = false;
	}
	//					KSURGS_2 toggle
	if (Ush2DPL >= 18.0)
	{
		if (F2_2920 == true)
		{
			if (S2_2920 == 3)
			{
				KSURGS_2 = true;
			}
			else
			{
				KSURGS_2 = false;
			}
		}
		else
		{
			KSURGS_2 = false;
		}
	}
	else
	{
		KSURGS_2 = false;
	}
	//					KSURGS_3 toggle
	if (Ush1DPP >= 18.0)
	{
		if (F3_2920 == true)
		{
			if (S3_2920 == 3)
			{
				KSURGS_3 = true;
			}
			else
			{
				KSURGS_3 = false;
			}
		}
		else
		{
			KSURGS_3 = false;
		}
	}
	else
	{
		KSURGS_3 = false;
	}
	//					KSURGS_4 toggle
	if (Ush2DPP >= 18.0)
	{
		if (F4_2920 == true)
		{
			if (S4_2920 == 3)
			{
				KSURGS_4 = true;
			}
			else
			{
				KSURGS_4 = false;
			}
		}
		else
		{
			KSURGS_4 = false;
		}
	}
	else
	{
		KSURGS_4 = false;
	}

	//						KKGS1 toggle
	if (Ush1L >= 18.0)
	{
		if (S5_2920 == 4)
		{
			KKGS_1 = true;
		}
		else
		{
			KKGS_1 = false;
		}
	}
	else
	{
		KKGS_1 = false;
	}

	//						KKGS2 toggle
	if (Ush2L >= 18.0)
	{
		if (S6_2920 == 4)
		{
			KKGS_2 = true;
		}
		else
		{
			KKGS_2 = false;
		}
	}
	else
	{
		KKGS_2 = false;
	}

	//						KKGS3 toggle
	if (Ush1P >= 18.0)
	{
		if (S7_2920 == 4)
		{
			KKGS_3 = true;
		}
		else
		{
			KKGS_3 = false;
		}
	}
	else
	{
		KKGS_3 = false;
	}

	//						KKGS4 toggle
	if (Ush2P >= 18.0)
	{
		if (S8_2920 == 4)
		{
			KKGS_4 = true;
		}
		else
		{
			KKGS_4 = false;
		}
	}
	else
	{
		KKGS_4 = false;
	}

	//						RVkTNUGS1, RVikTNUGS1, PAPD_26
	if (Ush1DPL >= 18.0)
	{
		if (RVkTNUGS1 == true)
		{
			if (S9_2920 == 9)
			{
				RVkTNUGS1 = false;
				RVikTNUGS1 = true;
				PAPD_26 = false;
			}
		}
		else
		{
			if (S9_2920 == 9)
			{
				RVkTNUGS1 = true;
				RVikTNUGS1 = false;
				PAPD_26 = true;
			}
			else
			{
				RVkTNUGS1 = false;
				RVikTNUGS1 = false;
				PAPD_26 = false;
			}
		}
	}
	else
	{
		RVkTNUGS1 = false;
		RVikTNUGS1 = false;
		PAPD_26 = false;
	}

	//						RVkTNUGS2, RVikTNUGS2, PAPD_27
	if (Ush2DPL >= 18.0)
	{
		if (RVkTNUGS2 == true)
		{
			if (S10_2920 == 9)
			{
				RVkTNUGS2 = false;
				RVikTNUGS2 = true;
				PAPD_27 = false;
			}
		}
		else
		{
			if (S10_2920 == 9)
			{
				RVkTNUGS2 = true;
				RVikTNUGS2 = false;
				PAPD_27 = true;
			}
			else
			{
				RVkTNUGS2 = false;
				RVikTNUGS2 = false;
				PAPD_27 = false;
			}
		}
	}
	else
	{
		RVkTNUGS2 = false;
		RVikTNUGS2 = false;
		PAPD_27 = false;
	}

	//						RVkTNUGS3, RVikTNUGS3, PAPD_31
	if (Ush1DPP >= 18.0)
	{
		if (RVkTNUGS3 == true)
		{
			if (S11_2920 == 9)
			{
				RVkTNUGS3 = false;
				RVikTNUGS3 = true;
				PAPD_31 = false;
			}
		}
		else
		{
			if (S11_2920 == 9)
			{
				RVkTNUGS3 = true;
				RVikTNUGS3 = false;
				PAPD_31 = true;
			}
			else
			{
				RVkTNUGS3 = false;
				RVikTNUGS3 = false;
				PAPD_31 = false;
			}
		}
	}
	else
	{
		RVkTNUGS3 = false;
		RVikTNUGS3 = false;
		PAPD_31 = false;
	}

	//						RVkTNUGS4, RVikTNUGS4, PAPD_30
	if (Ush2DPP >= 18.0)
	{
		if (RVkTNUGS4 == true)
		{
			if (S12_2920 == 9)
			{
				RVkTNUGS4 = false;
				RVikTNUGS4 = true;
				PAPD_30 = false;
			}
		}
		else
		{
			if (S12_2920 == 9)
			{
				RVkTNUGS4 = true;
				RVikTNUGS4 = false;
				PAPD_30 = true;
			}
			else
			{
				RVkTNUGS4 = false;
				RVikTNUGS4 = false;
				PAPD_30 = false;
			}
		}
	}
	else
	{
		RVkTNUGS4 = false;
		RVikTNUGS4 = false;
		PAPD_30 = false;
	}

	//					PTNUGS toggles
	//					PTNUGS1 toggle
	if (PVkTNUGS1 == true)
	{
		PTNUGS1 = true;
	}
	else
	{
		if (PVikTNUGS1 == true)
		{
			PTNUGS1 = false;
		}
	}
	//					PTNUGS2 toggle
	if (PVkTNUGS2 == true)
	{
		PTNUGS2 = true;
	}
	else
	{
		if (PVikTNUGS2 == true)
		{
			PTNUGS2 = false;
		}
	}
	//					PTNUGS3 toggle
	if (PVkTNUGS3 == true)
	{
		PTNUGS3 = true;
	}
	else
	{
		if (PVikTNUGS3 == true)
		{
			PTNUGS3 = false;
		}
	}
	//					PTNUGS4 toggle
	if (PVkTNUGS4 == true)
	{
		PTNUGS4 = true;
	}
	else
	{
		if (PVikTNUGS4 == true)
		{
			PTNUGS4 = false;
		}
	}


		


	























}
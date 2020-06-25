#include <iostream>
#include "CabinLighting_externalLightTool.h"

int ExternLightToolLogic()
{

	// A left side toggling
	if (Ush1l >= 18.0 && F12_3340 == true)
	{

		if (F4_3340 == false)
		{

			if (K1_3340)
			{
				PFPRLP = true;
			}

			if (K2_3340)
			{
				PFPRLR = true;
			}

			if (S1_3340 == 2)
			{
				PVFL = true;
				K1_3340 = K2_3340 = K2_3340 = false;
			}
			else
			{
				PVFL = false;
			}

			if (K9_3340 == false)
			{

				if (K11_3340 == false)
				{
					K13_3340 = true;
				}

				if (K3_3340 == false)
				{
					K1_3340 = true;
				}

			}

			if (K13_3340 == true)
			{

				if (K3_3340 == false)
				{
					K2_3340 = true;
				}

			}

			K9_3340 = K11_3340 = false;

			if (S6_3340 == 3)
			{
				K9_3340 = true;
			}

			if (S6_3340 == 4)
			{
				K11_3340 = true;
			}

		}
		else
		{
			PVFL = false;
			K1_3340 = K2_3340 = false;
			K9_3340 = K11_3340 = K13_3340 = false;
		}

		PFSV_01LR = PFSV_01LP = false;

		if (F2_3340 == true)
		{

			if (PVFL == true)
			{
				
				if (Vpr <= 115.0)
				{
					alpha_fsv_ol = (alpha_fsv_ol + (0.1 / tc));

					if (alpha_fsv_ol >= 1.0)
					{
						alpha_fsv_ol = 1.0;
					}
				}
				else
				{
					alpha_fsv_ol = (alpha_fsv_ol - (0.1 / tc));

					if (alpha_fsv_ol <= 0.0)
					{
						alpha_fsv_ol = 0.0;
					}
				}
			}

			// PFSV_01 toggle
			if (K14_3340 == true && alpha_fsv_ol >= 1.0)
			{
				PFSV_01PR = true;
			}

			if (K10_3340 == false && K12_3340 == true)
			{
				PFSV_01PP = true;
			}

			K3_3340 = K8_3340 = false;

		}
	}
	else
	{
	K1_3340 = K2_3340 = false;
	K9_3340 = K11_3340 = K13_3340 = false;
	}

	// B right side toggling
	if (Ush1p >= 18.0 && F14_3340 == true)
	{

		if (F12_3340 == false)
		{

			if (K6_3340)
			{
				PFPRPP = true;
			}

			if (K7_3340)
			{
				PFPRPR = true;
			}

			if (S1_3340 == 2)
			{
				PVFP = true;
				K6_3340 = K7_3340 = K14_3340= K10_3340 = K12_3340 = false;
			}
			else
			{
				PVFP = false;
			}

			if (K10_3340 == false)
			{

				if (K12_3340 == false)
				{
					K14_3340 = true;
				}

				if (K8_3340 == false)
				{
					K6_3340 = true;
				}

			}

			if (K14_3340 == true)
			{

				if (K8_3340 == false)
				{
					K7_3340 = true;
				}

			}

			K10_3340 = K12_3340 = false;

			if (S6_3340 == 3)
			{
				K10_3340 = true;
			}

			if (S6_3340 == 4)
			{
				K12_3340 = true;
			}

		}
		else
		{
			PVFP = false;
			K6_3340 = K7_3340 = false;
			K12_3340 = K10_3340 = K14_3340 = false;
		}

		PFSV_01PR = PFSV_01PP = false;

		if (F13_3340 == true)
		{

			if (PVFP == true)
			{
				
				if (Vpr <= 115.0)
				{
					alpha_fsv_op = (alpha_fsv_op + (0.1 / tc));

					if (alpha_fsv_op >= 1.0)
					{
						alpha_fsv_op = 1.0;
					}
				}
				else
				{
					alpha_fsv_op = (alpha_fsv_op - (0.1 / tc));

					if (alpha_fsv_op <= 0.0)
					{
						alpha_fsv_op = 0.0;
					}
				}
			}

			// PFSV_01 toggle
			if (K14_3340 == true && alpha_fsv_op >= 1.0)
			{
				PFSV_01PR = true;
			}

			if (K10_3340 == false && K12_3340 == true)
			{
				PFSV_01PP = true;
			}

			K3_3340 = K8_3340 = false;
		}
	}
	else
	{
	K6_3340 = K7_3340 = false;
	K10_3340 = K12_3340 = K14_3340 = false;
	}

	// K3, K8 toggle
	if (Usha1 >= 18.0 && K_3230)
	{
		K3_3340 = true;
	}

	if (Usha2 >= 18.0 && K_3430)
	{
		K8_3340 = true;
	}

	////////////////////////////////////////////////////////////////////////////////	
	BSS825X5V = false;

	// C
	if (Usho1p >= 18.0) 
	{

		// alpha_fazl resolving 1
		if (S3_3340 ==3 && K15_3340 == false)
		{

			alpha_fazl = (alpha_fazl - (25 / tc));

			if (alpha_fazl <= 0.0)
			{
				alpha_fazl = 0.0;
			}

		}
		// alpha_fazl resolivng 2
		if (S3_3340 == 4 && K15_3340 == true)
		{

			alpha_fazl = (alpha_fazl + (25 / tc));

			if (alpha_fazl >= 125.0)
			{
			alpha_fazl = 125.0;
			}

		}
		//PFSV_02 toggle
		if (K15_3340 == true && S2_3340 == 3)
		{
			PFSV_02L = true;
		}
		else
		{
			PFSV_02L = false;
		}

		// BSS825X5V toggle
		if(alpha_fazl == 0.0)
		{
			BSS825X5V = true;
		}
		else
		{
			BSS825X5V = false;
		}

	}
	else
	{
		PFSV_02L = false;
	}

	// D
	if (Usho2p >= 18.0) 
	{

		// alpha_fazp resolving 1
		if (S4_3340 ==3 && K15_3340 == false)
		{

			alpha_fazp = (alpha_fazp - (25 / tc));

			if (alpha_fazp <= 0.0)
			{
				alpha_fazp = 0.0;
			}

		}
		// alpha_fazp resolivng 2
		if (S4_3340 == 4 && K15_3340 == true)
		{

			alpha_fazp = (alpha_fazp + (25 / tc));

			if (alpha_fazp >= 125.0)
			{
			alpha_fazp = 125.0;
			}

		}
		//PFSV_02 toggle
		if (K15_3340 == true && S5_3340 == 3)
		{
			PFSV_02P = true;
		}
		else
		{
			PFSV_02P = false;
		}

		// BSS825X5V toggle
		if(alpha_fazp == 0.0)
		{
			BSS825X5V = true;
		}
		else
		{
			BSS825X5V = false;
		}

	}
	else
	{
		PFSV_02P = false;
	}

	// E1
	// BSS824X1E toggle
	if (Ush1l >= 18.0 && alpha_fsv_ol == true)
	{
		BSS824X1E = true;
	}
	else
	{
		BSS824X1E = false;
	}

	// E2
	// BSS824X1E toggle
	if (Ush1p >= 18.0 && alpha_fsv_op == true)
	{
		BSS824X1E = true;
	}
	else
	{
		BSS824X1E = false;
	}

	// F1
	// BSS824X1A toggle 1
	if (Ush1l >= 18.0)
	{
		if (PFPRLP == true && PFSV_01LP == true)
		{
			BSS824X1A = true;
		}
		else
		{
			BSS824X1A = false;
		}
	}
	else
	{
			BSS824X1A = false;
	}

	// F2
	// BSS824X1A toggle 2
	if (Ush1p >= 18.0)
	{
		if (PFPRPP == true && PFSV_01PP == true)
		{
			BSS824X1A = true;
		}
		else
		{
			BSS824X1A = false;
		}
	}
	else
	{
			BSS824X1A = false;
	}
}


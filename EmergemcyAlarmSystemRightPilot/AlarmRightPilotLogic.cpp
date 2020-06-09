#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "AlarmRightPilotHeader.h"
#include <math.h>

bool firstiteration = true;
void logic()
{
	if (Ush1dpl >= 18.0 && Ush1dpp >= 18.0)
	{
		PRBSS_824 = true;
	}
	else
	{
		PRBSS_824 = false;
	}

	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_825 = true;
	}
	else
	{
		PRBSS_825 = false;
	}

	if ((Ush2dpl >= 18.0) && (Ush2dpp >= 18.0) && (S6_03364 == 3))
	{
		PKLPL = true;
	}
	else
	{
		PKLPL = false;
	}

	if ((Ush1dpl >= 18.0) && (Ush1dpp >= 18.0))
	{
		USASPL = USASL_to_alpha(alpha_rrya7pl);
	}

	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_824 = true;
	}
	else
	{
		PRBSS_824 = false;
	}
	if (PRBSS_824)
	{
		///////////////Yellow lifghts_1
		//////////////1
		if (BSS824X1D)
		{
			BSS824X2B = true;
			PVkCSOZHPLx1 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2B = false;
			PVkCSOZHPLx1 = false;
		}
		///////////////Yellow lifghts_1
		//////////////2
		if (BSS824X1J)
		{
			BSS824X2E = true;
			PVkCSOZHPLx2 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2E = false;
			PVkCSOZHPLx2 = false;
		}
		///////////////Yellow lifghts_1
		//////////////3
		if (BSS824X1M)
		{
			BSS824X2F = true;
			PVkCSOZHPLx3 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2F = false;
			PVkCSOZHPLx3 = false;
		}
		///////////////Yellow lifghts_1
		//////////////4
		if (BSS824X1N)
		{
			BSS824X2G = true;
			PVkCSOZHPLx4 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2G = false;
			PVkCSOZHPLx4 = false;
		}
		///////////////Yellow lifghts_1
		//////////////5
		if (BSS824X1T)
		{
			BSS824X2J = true;
			PVkCSOZHPLx5 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2J = false;
			PVkCSOZHPLx5 = false;
		}
		///////////////Yellow lifghts_1
		//////////////6
		if (BSS824X1b)
		{
			BSS824X2N = true;
			PVkCSOZHPLx6 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2N = false;
			PVkCSOZHPLx6 = false;
		}
		///////////////Yellow lifghts_1
		//////////////7
		if (BSS824X1f)
		{
			BSS824X2R = true;
			PVkCSOZHPLx7 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2R = false;
			PVkCSOZHPLx7 = false;
		}
		///////////////Yellow lifghts_1
		//////////////8
		if (BSS824X1h)
		{
			BSS824X2S = true;
			PVkCSOZHPLx8 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2S = false;
			PVkCSOZHPLx8 = false;
		}
		///////////////Yellow lifghts_1
		//////////////9
		if (BSS824X1j)
		{
			BSS824X2T = true;
			PVkCSOZHPLx9 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2T = false;
			PVkCSOZHPLx9 = false;
		}
		///////////////Yellow lifghts_1
		//////////////10
		if (BSS824X1A)
		{
			BSS824X2A = true;
			PVkCSOZHPLx10 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2A = false;
			PVkCSOZHPLx10 = false;
		}
		///////////////Yellow lifghts_1
		//////////////11
		if (BSS824X1n)
		{
			BSS824X2U = true;
			PVkCSOZHPLx11 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2U = false;
			PVkCSOZHPLx11 = false;
		}
		///////////////Yellow lifghts_1
		//////////////12
		if (BSS824X1p)
		{
			BSS824X2V = true;
			PVkCSOZHPLx12 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2V = false;
			PVkCSOZHPLx12 = false;
		}
		///////////////Yellow lifghts_1
		//////////////13
		if (BSS824X1r)
		{
			BSS824X2W = true;
			PVkCSOZHPLx13 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2W = false;
			PVkCSOZHPLx13 = false;
		}
		///////////////Yellow lifghts_1
		//////////////14
		if (BSS824X1t)
		{
			BSS824X2X = true;
			PVkCSOZHPLx14 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2X = false;
			PVkCSOZHPLx14 = false;
		}
		///////////////Yellow lifghts_1
		//////////////15
		if (BSS824X1v)
		{
			BSS824X2Y = true;
			PVkCSOZHPLx15 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2Y = false;
			PVkCSOZHPLx15 = false;
		}
		///////////////Yellow lifghts_1
		//////////////16
		if (BSS824X1x)
		{
			BSS824X2Z = true;
			PVkCSOZHPLx16 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2Z = false;
			PVkCSOZHPLx16 = false;
		}
		///////////////Yellow lifghts_1
		//////////////17
		if (BSS824X1z)
		{
			BSS824X2a = true;
			PVkCSOZHPLx17 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2a = false;
			PVkCSOZHPLx17 = false;
		}
		///////////////Yellow lifghts_1
		//////////////18
		if (BSS824X1BB)
		{
			BSS824X2b = true;
			PVkCSOZHPLx18 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2b = false;
			PVkCSOZHPLx18 = false;
		}
		///////////////Yellow lifghts_1
		//////////////19
		if (BSS824X1DD)
		{
			BSS824X2c = true;
			PVkCSOZHPLx19 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2c = false;
			PVkCSOZHPLx19 = false;
		}
		///////////////Yellow lifghts_1
		//////////////20
		if (BSS824X1FF)
		{
			BSS824X2d = true;
			PVkCSOZHPLx20 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2d = false;
			PVkCSOZHPLx20 = false;
		}
		///////////////Yellow lifghts_1
		//////////////21
		if (BSS824X1HH)
		{
			BSS824X2e = true;
			PVkCSOZHPLx21 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2e = false;
			PVkCSOZHPLx21 = false;
		}
		///////////////Yellow lifghts_1
		//////////////22
		if (BSS824X3L)
		{
			BSS824X2n = true;
			PVkCSOZHPLx22 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS824X2n = false;
			PVkCSOZHPLx22 = false;
		}
		

		if (PVkCSOZHPLx_sum == 0)
		{
			PCSOZHPL = false;
		}
		else
		{
			PCSOZHPL = true;
		}

		if (S2_03364 == 2)
		{
			PCSOZHPL = true;
		}

		///////////////Red lights
		//////////////1
		if (BSS824X1G)
		{
			BSS824X2D = true;
			PVkCSOKPLy1 = true;
			PVkCSOKPLy_sum++;
		}
		else
		{
			BSS824X2D = false;
			PVkCSOKPLy1 = false;
		}
		///////////////Red lights
		//////////////2
		if (BSS824X1X)
		{
			BSS824X2L = true;
			PVkCSOKPLy2 = true;
			PVkCSOKPLy_sum++;
		}
		else
		{
			BSS824X2L = false;
			PVkCSOKPLy2 = false;
		}
		///////////////Red lights
		//////////////3
		if (BSS824X1Z)
		{
			BSS824X2M = true;
			PVkCSOKPLy3 = true;
			PVkCSOKPLy_sum++;
		}
		else
		{
			BSS824X2M = false;
			PVkCSOKPLy3 = false;
		}
		///////////////Red lights
		//////////////4
		if (BSS824X1d)
		{
			BSS824X2P = true;
			PVkCSOKPLy4 = true;
			PVkCSOKPLy_sum++;
		}
		else
		{
			BSS824X2P = false;
			PVkCSOKPLy4 = false;
		}
		///////////////Red lights
		//////////////5
		if (BSS824X3G)
		{
			BSS824X2k = true;
			PVkCSOKPLy5 = true;
			PVkCSOKPLy_sum++;
		}
		else
		{
			BSS824X2k = false;
			PVkCSOKPLy5 = false;
		}
		///////////////Red lights
		//////////////6
		if (BSS824X3J)
		{
			BSS824X2m = true;
			PVkCSOKPLy6 = true;
			PVkCSOKPLy_sum++;
		}
		else
		{
			BSS824X2m = false;
			PVkCSOKPLy6 = false;
		}
		
		if (PVkCSOKPLy_sum == 0)
		{
			PCSOKPL = false;
		}
		else
		{
			PCSOKPL = true;
		}

		if (S2_03364 == 2)
		{
			PCSOKPL = true;
		}
		///////////////Green and White lights
		//////////////1
		if (BSS824X1R)
		{
			BSS824X2H = true;
		}
		else
		{
			BSS824X2H = false;
		}
		///////////////Green and White lights
		//////////////2
		if (BSS824X1E)
		{
			BSS824X2C = true;
		}
		else
		{
			BSS824X2C = false;
		}
		///////////////Green and White lights
		//////////////3
		if (BSS824X1KK)
		{
			BSS824X2f = true;
		}
		else
		{
			BSS824X2f = false;
		}
		///////////////Green and White lights
		//////////////4
		if (BSS824X3A)
		{
			BSS824X2h = true;
		}
		else
		{
			BSS824X2h = false;
		}
		///////////////Green and White lights
		//////////////5
		if (BSS824X3T)
		{
			BSS824X2r = true;
		}
		else
		{
			BSS824X2r = false;
		}
		///////////////Green and White lights
		//////////////6
		if (BSS824X3N)
		{
			BSS824X2p = true;
		}
		else
		{
			BSS824X2p = false;
		}
		///////////////Green and White lights
		//////////////7
		if (BSS824X3R)
		{
			BSS824X2q = true;
		}
		else
		{
			BSS824X2p = false;
		}
		///////////////Green and White lights
		//////////////8
		if (BSS824X3E)
		{
			BSS824X2i = true;
		}
		else
		{
			BSS824X2i = false;
		}

		
	}
	else
	{
	PRBSS_824, PRBSS_825, PRBSS_824, PVkCSOZHPLx1, PVkCSOZHPLx2, PVkCSOZHPLx3, PVkCSOZHPLx4, PVkCSOZHPLx5, PVkCSOZHPLx6
		, PVkCSOZHPLx7, PVkCSOZHPLx8, PVkCSOZHPLx9, PVkCSOZHPLx10, PVkCSOZHPLx11, PVkCSOZHPLx12, PVkCSOZHPLx13, PVkCSOZHPLx14, PVkCSOZHPLx15,
		PVkCSOZHPLx16, PVkCSOZHPLx17, PVkCSOZHPLx18, PVkCSOZHPLx19, PVkCSOZHPLx20, PVkCSOZHPLx21, PVkCSOZHPLx22,
		PCSOZHPL, PVkCSOKPLy1, PVkCSOKPLy2, PVkCSOKPLy3, PVkCSOKPLy4, PVkCSOKPLy5, PVkCSOKPLy6,
		PCSOKPL, PKLPL, BSS824X1D, BSS824X1J, BSS824X1M,
		BSS824X1N, BSS824X1T, BSS824X1b, BSS824X1h, BSS824X1j, BSS824X1A, BSS824X1n, BSS824X1p, BSS824X1r, BSS824X1t,
		BSS824X1v, BSS824X1x, BSS824X1z, BSS824X1BB, BSS824X1DD, BSS824X1FF, BSS824X1HH, BSS824X1f, BSS824X3L,BSS824X2B, BSS824X2E, BSS824X2F, BSS824X2G, BSS824X2J, BSS824X2N, BSS824X2R, BSS824X2S, BSS824X2T,
		BSS824X2A, BSS824X2U, BSS824X2V, BSS824X2W, BSS824X2X, BSS824X2Y, BSS824X2Z, BSS824X2a, BSS824X2b, BSS824X2c, BSS824X2d, BSS824X2e,
		BSS824X2n, BSS811X2d, BSS811X2e, BSS811X2f, BSS811X2g,BSS824X1G, BSS824X2D, BSS824X1X, BSS824X2L, BSS824X1Z, BSS824X2M, BSS824X1d,
		BSS824X2P, BSS824X3G, BSS824X2k, BSS824X3J, BSS824X2m, BSS824X1R, BSS824X1E, BSS824X1KK, BSS824X3A,
		BSS824X3T, BSS824X3N, BSS824X2H, BSS824X2C, BSS824X2f, BSS824X2h, BSS824X2r, BSS824X2p = false;
	}
	
	if (PRBSS_825)
	{
		///////////////Yellow lights_2
		//////////////1
		if (BSS825X5A)
		{
			BSS825X6A = true;
			PVkCSOZHPLy1 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X6A = false;
			PVkCSOZHPLy1 = false;
		}
		///////////////Yellow lights_2
		//////////////2
		if (BSS825X5C)
		{
			BSS825X5C = true;
			PVkCSOZHPLy2 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X5C = false;
			PVkCSOZHPLy2 = false;
		}
		///////////////Yellow lights_2
		//////////////3
		if (BSS825X5E)
		{
			BSS825X6C = true;
			PVkCSOZHPLy3 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X6C = false;
			PVkCSOZHPLy3 = false;
		}
		///////////////Yellow lights_2
		//////////////4
		if (BSS825X5G)
		{
			BSS825X6D = true;
			PVkCSOZHPLy4 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X6D = false;
			PVkCSOZHPLy4 = false;
		}
		///////////////Yellow lights_2
		//////////////5
		if (alpha_pu_gamma_ogranich_PL)
		{
			BSS825X6r = true;
			PVkCSOZHPLy5 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X6r = false;
			PVkCSOZHPLy5 = false;
		}
		///////////////Yellow lights_2
		//////////////6
		if (kren_velik_PL)
		{
			BSS825X6m = true;
			PVkCSOZHPLy6 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X6m = false;
			PVkCSOZHPLy6 = false;
		}
		///////////////Yellow lights_2
		//////////////7
		if (P_BAKOV_VELIKO)
		{
			BSS825X6n = true;
			PVkCSOZHPLy7 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS825X6n = false;
			PVkCSOZHPLy7 = false;
		}
		///////////////Yellow lights_2
		//////////////8
		if (RAZREZH_VELIKO)
		{
			BSS812X6p = true;
			PVkCSOZHLLy8 = true;
			PVkCSOZHPLy_sum++;
		}
		else
		{
			BSS812X6p = false;
			PVkCSOZHLLy8 = false;
		}

		if (PVkCSOZHPLy_sum == 0)
		{
			PCSOZHPL = false;
		}
		else
		{
			PCSOZHPL = true;
		}

		if (S2_03364 == 2)
		{
			PCSOZHPL = true;
		}


		///////////////Red lights_2
		//////////////1
		if (BSS825X5L)
		{
			BSS825X6F = true;
			PVkCSOKPLm1 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6F = false;
			PVkCSOKPLm1 = false;
		}
		///////////////Red lights_2
		//////////////2
		if (BSS825X5f)
		{
			BSS825X6R = true;
			PVkCSOKPLm2 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6R = false;
			PVkCSOKPLm2 = false;
		}
		///////////////Red lights_2
		//////////////3
		if (BSS825X5N)
		{
			BSS825X6G = true;
			PVkCSOKPLm3 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6G = false;
			PVkCSOKPLm3 = false;
		}
		///////////////Red lights_2
		//////////////4
		if (BSS825X5h)
		{
			BSS825X6S = true;
			PVkCSOKPLm4 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6S = false;
			PVkCSOKPLm4 = false;
		}
		///////////////Red lights_2
		//////////////5
		if (BSS825X5R)
		{
			BSS825X6H = true;
			PVkCSOKPLm5 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6H = false;
			PVkCSOKPLm5 = false;
		}
		///////////////Red lights_2
		//////////////6
		if (BSS825X5j)
		{
			BSS825X6T = true;
			PVkCSOKPLm6 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6T = false;
			PVkCSOKPLm6 = false;
		}
		///////////////Red lights_2
		//////////////7
		if (BSS825X5T)
		{
			BSS825X6J = true;
			PVkCSOKPLm7 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6J = false;
			PVkCSOKPLm7 = false;
		}
		///////////////Red lights_2
		//////////////8
		if (BSS825X5n)
		{
			BSS825X6U = true;
			PVkCSOKPLm8 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6U = false;
			PVkCSOKPLm8 = false;
		}
		///////////////Red lights_2
		//////////////9
		if (V_VELIKA)
		{
			BSS825X6l = true;
			PVkCSOKPLm9 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6l = false;
			PVkCSOKPLm9 = false;
		}
		///////////////Red lights_2
		//////////////10
		if (V_MALA)
		{
			BSS825X6j = true;
			PVkCSOKPLm10 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6j = false;
			PVkCSOKPLm10 = false;
		}
		///////////////Red lights_2
		//////////////11
		if (alpha_pu_predel)
		{
			BSS825X6k = true;
			PVkCSOKPLm11 = true;
			PVkCSOKPLm_sum++;
		}
		else
		{
			BSS825X6k = false;
			PVkCSOKPLm11 = false;
		}

		if (PVkCSOKPLm_sum == 0)
		{
			PCSOKPL = false;
		}
		else
		{
			PCSOKPL = true;
		}

		if (S2_03364 == 2)
		{
			PCSOKPL = true;
		}

		///////////////Green and White lights 2
		//////////////1
		if (PREDKRL_VIPUSH)
		{
			BSS825X6E = true;
		}
		else
		{
			BSS825X6E = false;
		}
		///////////////Green and White lights 2
		//////////////2
		if (BSS825X5V)
		{
			BSS825X6K = true;
		}
		else
		{
			BSS825X6K = false;
		}
		///////////////Green and White lights 2
		//////////////3
		if (BSS825X5FF)
		{
			BSS825X6d = true;
		}
		else
		{
			BSS825X6d = false;
		}
		///////////////Green and White lights 2
		//////////////4
		if (BSS825X5HH)
		{
			BSS825X6e = true;
		}
		else
		{
			BSS825X6e = false;
		}
		///////////////Green and White lights 2
		//////////////5
		if (BSS825X5X)
		{
			BSS825X6L = true;
		}
		else
		{
			BSS825X6L = false;
		}
		///////////////Green and White lights 2
		//////////////6
		if (BSS825X5Z)
		{
			BSS825X6M = true;
		}
		else
		{
			BSS825X6M = false;
		}
		///////////////Green and White lights 2
		//////////////7
		if (BSS825X5b)
		{
			BSS825X6N = true;
		}
		else
		{
			BSS825X6N = false;
		}
		///////////////Green and White lights 2
		//////////////8
		if (BSS825X5d)
		{
			BSS825X6P = true;
		}
		else
		{
			BSS825X6P = false;
		}
		///////////////Green and White lights 2
		//////////////9
		if (BSS825X5r)
		{
			BSS825X6W = true;
		}
		else
		{
			BSS825X6W = false;
		}
		///////////////Green and White lights 2
		//////////////10
		if (BSS825X5t)
		{
			BSS825X6X = true;
		}
		else
		{
			BSS825X6X = false;
		}
		///////////////Green and White lights 2
		//////////////11
		if (BSS825X7R)
		{
			BSS825X6q = true;
		}
		else
		{
			BSS825X6q = false;
		}
		///////////////Green and White lights 2
		//////////////12
		if (BSS825X5v)
		{
			BSS825X6Y = true;
		}
		else
		{
			BSS825X6Y = false;
		}
		///////////////Green and White lights 2
		//////////////13
		if (BSS825X5x)
		{
			BSS825X6Z = true;
		}
		else
		{
			BSS825X6Z = false;
		}
		///////////////Green and White lights 2
		//////////////14
		if (BSS825X5z)
		{
			BSS825X6a = true;
		}
		else
		{
			BSS825X6a = false;
		}
		///////////////Green and White lights 2
		//////////////15
		if (BSS825X5BB)
		{
			BSS825X6Y = true;
		}
		else
		{
			BSS825X6Y = false;
		}
		///////////////Green and White lights 2
		//////////////16
		if (BSS825XDD)
		{
			BSS825X6a = true;
		}
		else
		{
			BSS825X6a = false;
		}
		///////////////Green and White lights 2
		//////////////17
		if (BSS825X5KK)
		{
			BSS825X6f = true;
		}
		else
		{
			BSS825X6f = false;
		}
		///////////////Green and White lights 2
		//////////////18
		if (BSS825X5MM)
		{
			BSS825X6g = true;
		}
		else
		{
			BSS825X6g = false;
		}
		///////////////Green and White lights 2
		//////////////19
		if (BSS825X5_1)
		{
			BSS825X6_1 = true;
		}
		else
		{
			BSS825X6_1 = false;
		}
		
		if (PRBSS_825)
		{
			BSS825X6E = BSS825X6K = BSS825X6d = BSS825X6e = BSS825X6L = BSS825X6M = BSS825X6N = BSS825X6P = BSS825X6W = BSS825X6X
				= BSS825X6q = BSS825X6Y = BSS825X6Z = BSS825X6a = BSS825X6Y = BSS825X6a = BSS825X6f = BSS825X6g = BSS825X6_1 
				= BSS825X6A = BSS825X5C = BSS825X6C = BSS825X6D = BSS825X6m = BSS825X6n = BSS825X6r =
				BSS825X6F = BSS825X6R = BSS825X6G = BSS825X6S = BSS825X6H = true;

		}

	}
	else
	{
	BSS825X5A = BSS825X5C = BSS825X5E = BSS825X5L = BSS825X5f = PREDKRL_VIPUSH = BSS825X5V = BSS825X5FF =
		BSS825X5HH = BSS825X5X = BSS825X5Z = BSS825X5b = BSS825X5d = BSS825X5r = BSS825X5t = BSS825X7R =
		BSS825X5v = BSS825X5x = BSS825X5z = BSS825X5BB = BSS812X5x = BSS825X5KK = BSS825X5MM = BSS825X5_1 =
		BSS812X5FF = BSS812X5KK = BSS825X6A = BSS825X5C = BSS825X6C = BSS825X6D = BSS825X6m = BSS825X6n =
		BSS825X6r = BSS825X6F = BSS825X6R = BSS825X6G = BSS825X6S = BSS825X6H = BSS825X6E = BSS825X6K
		= BSS825X6d = BSS825X6L = BSS825X6M = BSS825X6N = BSS825X6P = BSS825X6W = BSS825X6X = BSS825X6q = BSS825X6Y
		= BSS825X6Z = BSS825X6a = BSS825X6Y = BSS825X6a = BSS825X6f = BSS825X6g = BSS825X6_1 = false;


	}

}

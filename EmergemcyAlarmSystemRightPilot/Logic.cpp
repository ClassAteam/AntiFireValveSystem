#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
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
		if (UPOR_DZ_TANGAZH_L)
		{
			BSS811X2n = true;
			PVkCSOZHLLx12 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2n = false;
			PVkCSOZHLLx12 = false;
		}
		///////////////Yellow lifghts_1
		//////////////13
		if (ZAKRILKI_PARIRUY)
		{
			BSS811X2m = true;
			PVkCSOZHLLx13 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2m = false;
			PVkCSOZHLLx13 = false;
		}
		///////////////Yellow lifghts_1
		//////////////14
		if (BSS811X1Y)
		{
			BSS811X2L = true;
			PVkCSOZHLLx14 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2L = false;
			PVkCSOZHLLx14 = false;
		}
		///////////////Yellow lifghts_1
		//////////////15
		if (DZ_OTKL_DZ_TANGAZH)
		{
			BSS811X2r = true;
			PVkCSOZHLLx15 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2r = false;
			PVkCSOZHLLx15 = false;
		}
		///////////////Yellow lifghts_1
		//////////////16
		if (BSS811X1h)
		{
			BSS811X2S = true;
			PVkCSOZHLLx16 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2S = false;
			PVkCSOZHLLx16 = false;
		}
		///////////////Yellow lifghts_1
		//////////////17
		if (BSS811X1j)
		{
			BSS811X2T = true;
			PVkCSOZHLLx17 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2T = false;
			PVkCSOZHLLx17 = false;
		}
		///////////////Yellow lifghts_1
		//////////////18
		if (BSS811X1p)
		{
			BSS811X2V = true;
			PVkCSOZHLLx18 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2V = false;
			PVkCSOZHLLx18 = false;
		}
		///////////////Yellow lifghts_1
		//////////////19
		if (BSS811X1t)
		{
			BSS811X2X = true;
			PVkCSOZHLLx19 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2X = false;
			PVkCSOZHLLx19 = false;
		}
		///////////////Yellow lifghts_1
		//////////////20
		if (BSS811X1v)
		{
			BSS811X2Y = true;
			PVkCSOZHLLx20 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2Y = false;
			PVkCSOZHLLx20 = false;
		}
		///////////////Yellow lifghts_1
		//////////////21
		if (BSS811X1x)
		{
			BSS811X2Z = true;
			PVkCSOZHLLx21 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2Z = false;
			PVkCSOZHLLx21 = false;
		}
		///////////////Yellow lifghts_1
		//////////////22
		if (BSS811X1z)
		{
			BSS811X2a = true;
			PVkCSOZHLLx22 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2a = false;
			PVkCSOZHLLx22 = false;
		}
		///////////////Yellow lifghts_1
		//////////////23
		if (SUR_GS1_OTKL)
		{
			BSS811X2d = true;
			PVkCSOZHLLx23 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2d = false;
			PVkCSOZHLLx23 = false;
		}
		///////////////Yellow lifghts_1
		//////////////24
		if (SUR_GS2_OTKL)
		{
			BSS811X2e = true;
			PVkCSOZHLLx24 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2e = false;
			PVkCSOZHLLx24 = false;
		}
		///////////////Yellow lifghts_1
		//////////////25
		if (SUR_GS3_OTKL)
		{
			BSS811X2f = true;
			PVkCSOZHLLx25 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2f = false;
			PVkCSOZHLLx25 = false;
		}
		///////////////Yellow lifghts_1
		//////////////26
		if (SUR_GS4_OTKL)
		{
			BSS811X2g = true;
			PVkCSOZHLLx26 = true;
			PVkCSOZHPLx_sum++;
		}
		else
		{
			BSS811X2g = false;
			PVkCSOZHLLx26 = false;
		}

		if (PVkCSOZHPLx_sum == 0)
		{
			PCSOZHLL = false;
		}
		else
		{
			PCSOZHLL = true;
		}

		if (S1_03364 == 2)
		{
			PCSOZHLL = true;
		}

		///////////////Red lights
		//////////////1
		if (BSS811X1E)
		{
			BSS811X2C = true;
			PVkCSOKLLy1 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2C = false;
			PVkCSOKLLy1 = false;
		}
		///////////////Red lights
		//////////////2
		if (BSS811X1G)
		{
			BSS811X2D = true;
			PVkCSOKLLy2 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2D = false;
			PVkCSOKLLy2 = false;
		}
		///////////////Red lights
		//////////////3
		if (BSS811X1J)
		{
			BSS811X2E = true;
			PVkCSOKLLy3 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2E = false;
			PVkCSOKLLy3 = false;
		}
		///////////////Red lights
		//////////////4
		if (BSS811X1L)
		{
			BSS811X2F = true;
			PVkCSOKLLy4 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2F = false;
			PVkCSOKLLy4 = false;
		}
		///////////////Red lights
		//////////////5
		if (BSS811X1n)
		{
			BSS811X2U = true;
			PVkCSOKLLy5 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2U = false;
			PVkCSOKLLy5 = false;
		}
		///////////////Red lights
		//////////////6
		if (BSS811X1r)
		{
			BSS811X2W = true;
			PVkCSOKLLy6 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2W = false;
			PVkCSOKLLy6 = false;
		}
		///////////////Red lights
		//////////////7
		if (BSS811X1BB)
		{
			BSS811X2b = true;
			PVkCSOKLLy7 = true;
			PVkCSOKLLy_sum++;
		}
		else
		{
			BSS811X2b = false;
			PVkCSOKLLy7 = false;
		}

		if (PVkCSOKLLy_sum == 0)
		{
			PCSOKLL = false;
		}
		else
		{
			PCSOKLL = true;
		}

		if (S1_03364 == 2)
		{
			PCSOKLL = true;
		}
		///////////////Green and White lights
		//////////////1
		if (BSS811X3A)
		{
			BSS811X2h = true;
		}
		else
		{
			BSS811X2h = false;
		}
		///////////////Green and White lights
		//////////////2
		if (BSS811X3C)
		{
			BSS811X2l = true;
		}
		else
		{
			BSS811X2l = false;
		}
		///////////////Green and White lights
		//////////////3
		if (BSS811X3D)
		{
			BSS811X2j = true;
		}
		else
		{
			BSS811X2j = false;
		}
		///////////////Green and White lights
		//////////////4
		if (BSS811X3E)
		{
			BSS811X2k = true;
		}
		else
		{
			BSS811X2k = false;
		}
		///////////////Green and White lights
		//////////////5
		if (NEYTRAL_kren)
		{
			BSS811X2p = true;
		}
		else
		{
			BSS811X2p = false;
		}
		///////////////Green and White lights
		//////////////6
		if (NEYTRAL_kurs)
		{
			BSS811X2q = true;
		}
		else
		{
			BSS811X2q = false;
		}

		
	}
	else
	{
	PRBSS_824, PRBSS_825, PRBSS_824, PVkCSOZHPLx1, PVkCSOZHPLx2, PVkCSOZHPLx3, PVkCSOZHPLx4, PVkCSOZHPLx5, PVkCSOZHPLx6
		, PVkCSOZHPLx7, PVkCSOZHPLx8, PVkCSOZHPLx9, PVkCSOZHPLx10, PVkCSOZHPLx11, PVkCSOZHLLx12, PVkCSOZHLLx13, PVkCSOZHLLx14, PVkCSOZHLLx15,
		PVkCSOZHLLx16, PVkCSOZHLLx17, PVkCSOZHLLx18, PVkCSOZHLLx19, PVkCSOZHLLx20, PVkCSOZHLLx21, PVkCSOZHLLx22, PVkCSOZHLLx23, PVkCSOZHLLx24
		, PVkCSOZHLLx25, PVkCSOZHLLx26, PCSOZHLL, PVkCSOKLLy1, PVkCSOKLLy2, PVkCSOKLLy3, PVkCSOKLLy4, PVkCSOKLLy5, PVkCSOKLLy6, PVkCSOKLLy7,
		PCSOKLL, PKLPL, BSS811x1, BSS811x2, BSS811y1, BSS811y2, BSS811z1, BSS811z2, BSS824X1D, BSS824X1J, BSS824X1M,
		BSS824X1N, BSS824X1T, BSS824X1b, BSS824X1h, BSS824X1j, BSS824X1A, BSS824X1n, UPOR_DZ_TANGAZH_L, ZAKRILKI_PARIRUY, BSS811X1Y,
		DZ_OTKL_DZ_TANGAZH, BSS811X1h, BSS811X1j, BSS811X1p, BSS811X1t, BSS811X1v, BSS811X1x, BSS824X1f, BSS811X1z, SUR_GS1_OTKL, SUR_GS2_OTKL,
		SUR_GS3_OTKL, SUR_GS4_OTKL, BSS824X2B, BSS824X2E, BSS824X2F, BSS824X2G, BSS824X2J, BSS824X2N, BSS824X2R, BSS824X2S, BSS824X2T,
		BSS824X2A, BSS824X2U, BSS811X2n, BSS811X2m, BSS811X2L, BSS811X2r, BSS811X2S, BSS811X2T, BSS811X2V, BSS811X2X, BSS811X2Y, BSS811X2Z,
		BSS811X2a, BSS811X2d, BSS811X2e, BSS811X2f, BSS811X2g,BSS811X1E, BSS811X2C, BSS811X1G, BSS811X2D, BSS811X1J, BSS811X2E, BSS811X1L,
		BSS811X2F, BSS811X1n, BSS811X2U, BSS811X1r, BSS811X2W, BSS811X1BB, BSS811X2b,BSS811X3A, BSS811X3C, BSS811X3D, BSS811X3E,
		NEYTRAL_kren, NEYTRAL_kurs, BSS811X2h, BSS811X2l, BSS811X2j, BSS811X2k, BSS811X2p, BSS811X2q = false;
	}
	
	if (PRBSS_825)
	{
		///////////////Yellow lights_2
		//////////////1
		if (BSS812X5j)
		{
			BSS812X6T = true;
			PVkCSOZHLLy1 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6T = false;
			PVkCSOZHLLy1 = false;
		}
		///////////////Yellow lights_2
		//////////////2
		if (BSS812X5p)
		{
			BSS812X6V = true;
			PVkCSOZHLLy2 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6V = false;
			PVkCSOZHLLy2 = false;
		}
		///////////////Yellow lights_2
		//////////////3
		if (BSS812X5HH)
		{
			BSS812X6e = true;
			PVkCSOZHLLy3 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6e = false;
			PVkCSOZHLLy3 = false;
		}
		///////////////Yellow lights_2
		//////////////4
		if (KREN_VELIK)
		{
			BSS812X6j = true;
			PVkCSOZHLLy4 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6j = false;
			PVkCSOZHLLy4 = false;
		}
		///////////////Yellow lights_2
		//////////////5
		if (SVS_OTKAZ)
		{
			BSS812X6k = true;
			PVkCSOZHLLy5 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6k = false;
			PVkCSOZHLLy5 = false;
		}
		///////////////Yellow lights_2
		//////////////6
		if (INS_OTKAZ)
		{
			BSS812X6m = true;
			PVkCSOZHLLy6 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6m = false;
			PVkCSOZHLLy6 = false;
		}
		///////////////Yellow lights_2
		//////////////7
		if (alpha_pu_gamma_ogranich)
		{
			BSS812X6q = true;
			PVkCSOZHLLy7 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6q = false;
			PVkCSOZHLLy7 = false;
		}
		///////////////Yellow lights_2
		//////////////8
		if (NAZHMI_Rezervtormoza)
		{
			BSS812X6n = true;
			PVkCSOZHLLy8 = true;
			PVkCSOZHLLy_sum++;
		}
		else
		{
			BSS812X6n = false;
			PVkCSOZHLLy8 = false;
		}

		if (PVkCSOZHLLy_sum == 0)
		{
			PCSOZHLL = false;
		}
		else
		{
			PCSOZHLL = true;
		}

		if (S1_03364 == 2)
		{
			PCSOZHLL = true;
		}


		///////////////Red lights_2
		//////////////1
		if (BSS812X5h)
		{
			BSS812X6S = true;
			PVkCSOKLLm1 = true;
			PVkCSOKLLm_sum++;
		}
		else
		{
			BSS812X6S = false;
			PVkCSOKLLm1 = false;
		}
		///////////////Red lights_2
		//////////////2
		if (BSS812X5n)
		{
			BSS812X6U = true;
			PVkCSOKLLm2 = true;
			PVkCSOKLLm_sum++;
		}
		else
		{
			BSS812X6U = false;
			PVkCSOKLLm2 = false;
		}
		///////////////Red lights_2
		//////////////3
		if (V_velika)
		{
			BSS812X6g = true;
			PVkCSOKLLm3 = true;
			PVkCSOKLLm_sum++;
		}
		else
		{
			BSS812X6g = false;
			PVkCSOKLLm3 = false;
		}
		///////////////Red lights_2
		//////////////4
		if (V_mala)
		{
			BSS812X6h = true;
			PVkCSOKLLm4 = true;
			PVkCSOKLLm_sum++;
		}
		else
		{
			BSS812X6h = false;
			PVkCSOKLLm4 = false;
		}
		///////////////Red lights_2
		//////////////5
		if (alpha_pu_predel)
		{
			BSS812X6i = true;
			PVkCSOKLLm5 = true;
			PVkCSOKLLm_sum++;
		}
		else
		{
			BSS812X6i = false;
			PVkCSOKLLm5 = false;
		}

		if (PVkCSOKLLm_sum == 0)
		{
			PCSOKLL = false;
		}
		else
		{
			PCSOKLL = true;
		}

		if (S1_03364 == 2)
		{
			PCSOKLL = true;
		}

		///////////////Green and White lights 2
		//////////////1
		if (BSS812X5B)
		{
			BSS811X6A = true;
		}
		else
		{
			BSS811X6A = false;
		}
		///////////////Green and White lights 2
		//////////////2
		if (BSS812X5D)
		{
			BSS811X6B = true;
		}
		else
		{
			BSS811X6B = false;
		}
		///////////////Green and White lights 2
		//////////////3
		if (BSS812X5E)
		{
			BSS811X6C = true;
		}
		else
		{
			BSS811X6C = false;
		}
		///////////////Green and White lights 2
		//////////////4
		if (BSS812X5G)
		{
			BSS811X6D = true;
		}
		else
		{
			BSS811X6D = false;
		}
		///////////////Green and White lights 2
		//////////////5
		if (BSS812X5J)
		{
			BSS811X6E = true;
		}
		else
		{
			BSS811X6E = false;
		}
		///////////////Green and White lights 2
		//////////////6
		if (BSS812X5L)
		{
			BSS811X6F = true;
		}
		else
		{
			BSS811X6F = false;
		}
		///////////////Green and White lights 2
		//////////////7
		if (BSS812X5N)
		{
			BSS811X6G = true;
		}
		else
		{
			BSS811X6G = false;
		}
		///////////////Green and White lights 2
		//////////////8
		if (BSS812X5R)
		{
			BSS811X6H = true;
		}
		else
		{
			BSS811X6H = false;
		}
		///////////////Green and White lights 2
		//////////////9
		if (BSS812X5T)
		{
			BSS811X6J = true;
		}
		else
		{
			BSS811X6J = false;
		}
		///////////////Green and White lights 2
		//////////////10
		if (BSS812X5V)
		{
			BSS811X6K = true;
		}
		else
		{
			BSS811X6K = false;
		}
		///////////////Green and White lights 2
		//////////////11
		if (BSS812X5X)
		{
			BSS811X6L = true;
		}
		else
		{
			BSS811X6L = false;
		}
		///////////////Green and White lights 2
		//////////////12
		if (BSS812X5Z)
		{
			BSS811X6M = true;
		}
		else
		{
			BSS811X6M = false;
		}
		///////////////Green and White lights 2
		//////////////13
		if (BSS812X5d)
		{
			BSS811X6N = true;
		}
		else
		{
			BSS811X6N = false;
		}
		///////////////Green and White lights 2
		//////////////14
		if (BSS812X5t)
		{
			BSS811X6X = true;
		}
		else
		{
			BSS811X6X = false;
		}
		///////////////Green and White lights 2
		//////////////15
		if (BSS812X5r)
		{
			BSS811X6W = true;
		}
		else
		{
			BSS811X6W = false;
		}
		///////////////Green and White lights 2
		//////////////16
		if (BSS812X5t)
		{
			BSS811X6Y = true;
		}
		else
		{
			BSS811X6Y = false;
		}
		///////////////Green and White lights 2
		//////////////17
		if (BSS812X5z)
		{
			BSS811X6a = true;
		}
		else
		{
			BSS811X6a = false;
		}
		///////////////Green and White lights 2
		//////////////18
		if (BSS812X5BB)
		{
			BSS811X6b = true;
		}
		else
		{
			BSS811X6b = false;
		}
		///////////////Green and White lights 2
		//////////////19
		if (BSS812X5DD)
		{
			BSS811X6c = true;
		}
		else
		{
			BSS811X6c = false;
		}
		///////////////Green and White lights 2
		//////////////20
		if (BSS812X5FF)
		{
			BSS811X6d = true;
		}
		else
		{
			BSS811X6d = false;
		}
		///////////////Green and White lights 2
		//////////////21
		if (VKL_rezervtormoza)
		{
			BSS811X6p = true;
		}
		else
		{
			BSS811X6p = false;
		}
		///////////////Green and White lights 2
		//////////////22
		if (VKL_forsirtormoza)
		{
			BSS811X6r = true;
		}
		else
		{
			BSS811X6r = false;
		}
		///////////////Green and White lights 2
		//////////////23
		if (BSS812X5KK)
		{
			BSS811X6f = true;
		}
		else
		{
			BSS811X6f = false;
		}
		
		if (PRBSS_824)
		{
			BSS811x2 = BSS824X2B = BSS824X2E = BSS824X2F = BSS824X2G = BSS824X2J = BSS824X2N = BSS824X2R = BSS824X2S = BSS824X2T =
				BSS824X2A = BSS824X2U = BSS811X2n = BSS811X2m = BSS811X2L = BSS811X2r = BSS811X2S = BSS811X2T = BSS811X2V =
				BSS811X2X = BSS811X2Y = BSS811X2Z = BSS811X2a = BSS811X2d = BSS811X2e = BSS811X2f = BSS811X2g = BSS811X2C =
				BSS811X2D = BSS811X2E = BSS811X2F = BSS811X2U = BSS811X2W = BSS811X2b = BSS811X2h = BSS811X2l = BSS811X2j =
				BSS811X2k = BSS811X2p = BSS811X2q = true;

		}

		if (PRBSS_825)
		{
			BSS811X6A = BSS811X6B = BSS811X6C = BSS811X6D = BSS811X6E = BSS811X6F = BSS811X6G = BSS811X6H = BSS811X6J = BSS811X6K
				= BSS811X6L = BSS811X6M = BSS811X6N = BSS811X6X = BSS811X6W = BSS811X6Y = BSS811X6a = BSS811X6b = BSS811X6c = BSS811X6d
				= BSS811X6p = BSS811X6r = BSS811X6f = BSS812X6T = BSS812X6V = BSS812X6e = BSS812X6j = BSS812X6k = BSS812X6m = BSS812X6q =
				BSS812X6n = BSS812X6S = BSS812X6U = BSS812X6g = BSS812X6h = BSS812X6i = true;

		}

}
	else
	{
	BSS812X5j = BSS812X5p = BSS812X5HH = BSS812X5h = BSS812X5n = BSS812X5B = BSS812X5D = BSS812X5E =
		BSS812X5G = BSS812X5J = BSS812X5L = BSS812X5N = BSS812X5R = BSS812X5T = BSS812X5V = BSS812X5X =
		BSS812X5Z = BSS812X5d = BSS812X5t = BSS812X5r = BSS812X5x = BSS812X5z = BSS812X5BB = BSS812X5DD =
		BSS812X5FF = BSS812X5KK = BSS812X6T = BSS812X6V = BSS812X6e = BSS812X6j = BSS812X6k = BSS812X6m =
		BSS812X6q = BSS812X6n = BSS812X6S = BSS812X6U = BSS812X6g = BSS812X6h = BSS812X6i = BSS811X6A = BSS811X6B
		= BSS811X6C = BSS811X6E = BSS811X6F = BSS811X6G = BSS811X6H = BSS811X6J = BSS811X6K = BSS811X6L = BSS811X6M
		= BSS811X6N = BSS811X6X = BSS811X6W = BSS811X6Y = BSS811X6a = BSS811X6b = BSS811X6c = BSS811X6d = BSS811X6p
		= BSS811X6r = BSS811X6f = false;


	}

	if (PRBSS_824)
	{
		///////////////Yellow lights_3
		//////////////1
		if (BSS913X1C)
		{
			BSS913X2B= true;
			PVkCSOZHLLk1 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2B = false;
			PVkCSOZHLLk1 = false;
		}
		///////////////Yellow lights_3
		//////////////2
		if (BSS913X1E)
		{
			BSS913X2C = true;
			PVkCSOZHLLk2 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2C = false;
			PVkCSOZHLLk2 = false;
		}
		///////////////Yellow lights_3
		//////////////3
		if (BSS913X1G)
		{
			BSS913X2D = true;
			PVkCSOZHLLk3 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2D = false;
			PVkCSOZHLLk2 = false;
		}
		///////////////Yellow lights_3
		//////////////4
		if (BSS913X1J)
		{
			BSS913X2E = true;
			PVkCSOZHLLk4 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2E = false;
			PVkCSOZHLLk4 = false;
		}
		///////////////Yellow lights_3
		//////////////5
		if (BSS913X1L)
		{
			BSS913X2F = true;
			PVkCSOZHLLk5 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2F = false;
			PVkCSOZHLLk5 = false;
		}
		///////////////Yellow lights_3
		//////////////6
		if (BSS913X1N)
		{
			BSS913X2G = true;
			PVkCSOZHLLk6 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2G = false;
			PVkCSOZHLLk6 = false;
		}
		///////////////Yellow lights_3
		//////////////7
		if (BSS913X1T)
		{
			BSS913X2J = true;
			PVkCSOZHLLk7 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2J = false;
			PVkCSOZHLLk7 = false;
		}
		///////////////Yellow lights_3
		//////////////8
		if (BSS913X1V)
		{
			BSS913X2K = true;
			PVkCSOZHLLk8 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2K = false;
			PVkCSOZHLLk8 = false;
		}
		///////////////Yellow lights_3
		//////////////9
		if (BSS913X1x)
		{
			BSS913X2L = true;
			PVkCSOZHLLk9 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2L = false;
			PVkCSOZHLLk9 = false;
		}
		///////////////Yellow lights_3
		//////////////10
		if (BSS913X1Z)
		{
			BSS913X2M = true;
			PVkCSOZHLLk10 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2M = false;
			PVkCSOZHLLk10 = false;
		}
		///////////////Yellow lights_3
		//////////////11
		if (BSS913X1b)
		{
			BSS913X2N = true;
			PVkCSOZHLLk11 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2N = false;
			PVkCSOZHLLk11 = false;
		}
		///////////////Yellow lights_3
		//////////////12
		if (BSS913X1d)
		{
			BSS913X2P = true;
			PVkCSOZHLLk12 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2P = false;
			PVkCSOZHLLk12 = false;
		}
		///////////////Yellow lights_3
		//////////////13
		if (BSS913X1h)
		{
			BSS913X2S = true;
			PVkCSOZHLLk13 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2S = false;
			PVkCSOZHLLk13 = false;
		}
		///////////////Yellow lights_3
		//////////////14
		if (BSS913X1j)
		{
			BSS913X2T = true;
			PVkCSOZHLLk14 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2T = false;
			PVkCSOZHLLk14 = false;
		}
		///////////////Yellow lights_3
		//////////////15
		if (BSS913X1n)
		{
			BSS913X2U = true;
			PVkCSOZHLLk15 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2U = false;
			PVkCSOZHLLk15 = false;
		}
		///////////////Yellow lights_3
		//////////////16
		if (BSS913X1p)
		{
			BSS913X2V = true;
			PVkCSOZHLLk16 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2V = false;
			PVkCSOZHLLk16 = false;
		}
		///////////////Yellow lights_3
		//////////////17
		if (BSS913X1r)
		{
			BSS913X2W = true;
			PVkCSOZHLLk17 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2W = false;
			PVkCSOZHLLk17 = false;
		}
		///////////////Yellow lights_3
		//////////////18
		if (BSS913X1t)
		{
			BSS913X2X = true;
			PVkCSOZHLLk18 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2X = false;
			PVkCSOZHLLk18 = false;
		}
		///////////////Yellow lights_3
		//////////////19
		if (BSS913X1x)
		{
			BSS913X2Z = true;
			PVkCSOZHLLk19 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2Z = false;
			PVkCSOZHLLk19 = false;
		}
		///////////////Yellow lights_3
		//////////////20
		if (BSS913X1z)
		{
			BSS913X2a = true;
			PVkCSOZHLLk20 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2a = false;
			PVkCSOZHLLk20 = false;
		}
		///////////////Yellow lights_3
		//////////////21
		if (BSS913X1BB)
		{
			BSS913X2b = true;
			PVkCSOZHLLk21 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2b = false;
			PVkCSOZHLLk21 = false;
		}
		///////////////Yellow lights_3
		//////////////22
		if (BSS913X1DD)
		{
			BSS913X2c = true;
			PVkCSOZHLLk22 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2c = false;
			PVkCSOZHLLk22 = false;
		}
		///////////////Yellow lights_3
		//////////////23
		if (BSS913X1FF)
		{
			BSS913X2d = true;
			PVkCSOZHLLk23 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2d = false;
			PVkCSOZHLLk23 = false;
		}
		///////////////Yellow lights_3
		//////////////24
		if (BSS913X1HH)
		{
			BSS913X2e = true;
			PVkCSOZHLLk24 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2e = false;
			PVkCSOZHLLk24 = false;
		}
		///////////////Yellow lights_3
		//////////////25
		if (BSS913X3E)
		{
			BSS913X2j = true;
			PVkCSOZHLLk25 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2j = false;
			PVkCSOZHLLk25 = false;
		}
		///////////////Yellow lights_3
		//////////////26
		if (BSS913X3G)
		{
			BSS913X2k = true;
			PVkCSOZHLLk26 = true;
			PVkCSOZHLLk_sum++;
		}
		else
		{
			BSS913X2k = false;
			PVkCSOZHLLk26 = false;
		}

		if (PVkCSOZHLLk_sum == 0)
		{
			PCSOZHLL = false;
		}
		else
		{
			PCSOZHLL = true;
		}

		if (S1_03364 == 2)
		{
			PCSOZHLL = true;
		}

		///////////////Red lights_3
		//////////////1
		if (BSS913X1A)
		{
			BSS913X2A= true;
			PVkCSOKLLp1 = true;
			PVkCSOKLLp_sum++;
		}
		else
		{
			BSS913X2A= false;
			PVkCSOKLLp1 = false;
		}
		///////////////Red lights_3
		//////////////2
		if (BSS913X1R)
		{
			BSS913X2H = true;
			PVkCSOKLLp1 = true;
			PVkCSOKLLp_sum++;
		}
		else
		{
			BSS913X2H = false;
			PVkCSOKLLp1 = false;
		}
		///////////////Red lights_3
		//////////////3
		if (BSS913X1f)
		{
			BSS913X2R = true;
			PVkCSOKLLp1 = true;
			PVkCSOKLLp_sum++;
		}
		else
		{
			BSS913X2R = false;
			PVkCSOKLLp1 = false;
		}
		///////////////Red lights_3
		//////////////4
		if (BSS913X1v)
		{
			BSS913X2Y = true;
			PVkCSOKLLp4 = true;
			PVkCSOKLLp_sum++;
		}
		else
		{
			BSS913X2Y = false;
			PVkCSOKLLp4 = false;
		}

		if (PVkCSOKLLp_sum == 0)
		{
			PCSOKLL = false;
		}
		else
		{
			PCSOKLL = true;
		}

		if (S1_03364 == 2)
		{
			PCSOKLL = true;
		}

		///////////////Green and White lights_3
		//////////////1
		if (BSS913X3A)
		{
			BSS913X2h = true;
		}
		else
		{
			BSS913X2h = false;
		}
		///////////////Green and White lights_3
		//////////////2
		if (BSS913X3C)
		{
			BSS913X2i = true;
		}
		else
		{
			BSS913X2i = false;
		}
		///////////////Green and White lights_3
		//////////////3
		if (BSS913X3J)
		{
			BSS913X2m = true;
		}
		else
		{
			BSS913X2m = false;
		}
		///////////////Green and White lights_3
		//////////////4
		if (BSS913X3L)
		{
			BSS913X2n = true;
		}
		else
		{
			BSS913X2n = false;
		}
		///////////////Green and White lights_3
		//////////////5
		if (BSS913X3N)
		{
			BSS913X2p = true;
		}
		else
		{
			BSS913X2p = false;
		}

		if(PRBSS_824)
		{
			BSS913X2B = BSS913X2C = BSS913X2D = BSS913X2E = BSS913X2F = BSS913X2G = BSS913X2J = BSS913X2K = BSS913X2L = BSS913X2M =
				BSS913X2N = BSS913X2P = BSS913X2S = BSS913X2T = BSS913X2U = BSS913X2V = BSS913X2W = BSS913X2X = BSS913X2Z =
				BSS913X2a = BSS913X2b = BSS913X2c = BSS913X2d = BSS913X2e = BSS913X2j = BSS913X2k = BSS913X2A = BSS913X2H =
				BSS913X2R = BSS913X2Y = BSS913X2h = BSS913X2i = BSS913X2m = BSS913X2n = BSS913X2p = true;

			
		}
	}
	else
	{
	BSS913X2B = BSS913X2C = BSS913X2D = BSS913X2E = BSS913X2F = BSS913X2G = BSS913X2J = BSS913X2K = BSS913X2L = BSS913X2M = 
		BSS913X2N = BSS913X2P = BSS913X2S = BSS913X2T = BSS913X2U = BSS913X2V = BSS913X2W = BSS913X2X = BSS913X2Z = 
		BSS913X2a = BSS913X2b = BSS913X2c = BSS913X2d = BSS913X2e = BSS913X2j = BSS913X2k = BSS913X2A = BSS913X2H = 
		BSS913X2R = BSS913X2Y = BSS913X2h = BSS913X2i = BSS913X2m = BSS913X2n = BSS913X2p = false;

	PVkCSOZHLLk1 = PVkCSOZHLLk2 = PVkCSOZHLLk3 = PVkCSOZHLLk4 = PVkCSOZHLLk5 = PVkCSOZHLLk6 = PVkCSOZHLLk7 = PVkCSOZHLLk8 = PVkCSOZHLLk9 = PVkCSOZHLLk10 =
		PVkCSOZHLLk11 = PVkCSOZHLLk12 = PVkCSOZHLLk13 = PVkCSOZHLLk14 = PVkCSOZHLLk15 = PVkCSOZHLLk16 = PVkCSOZHLLk17 = PVkCSOZHLLk18 = PVkCSOZHLLk19 = PVkCSOZHLLk20 =
		PVkCSOZHLLk21 = PVkCSOZHLLk22 = PVkCSOZHLLk23 = PVkCSOZHLLk24 = PVkCSOZHLLk25 = PVkCSOZHLLk26 =
		PVkCSOKLLm1 = PVkCSOKLLm2 = PVkCSOKLLm3 = PVkCSOKLLm4 = PVkCSOKLLm5 =
		PVkCSOKLLp1 = PVkCSOKLLp2 = PVkCSOKLLp3 = PVkCSOKLLp4 = false;

	}
}

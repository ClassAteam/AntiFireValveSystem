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
		PRBSS_811 = true;
	}
	else
	{
		PRBSS_811 = false;
	}

	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_812 = true;
	}
	else
	{
		PRBSS_812 = false;
	}

	if ((Ush2dpl >= 18.0) && (Ush2dpp >= 18.0) && (S5_03364 == 3))
	{
		PKLLL = true;
	}
	else
	{
		PKLLL = false;
	}

	if ((Ush1dpl >= 18.0) && (Ush1dpp >= 18.0))
	{
		USASLL = USASL_to_alpha(alpha_rrya7ll);
	}

	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_913 = true;
	}
	else
	{
		PRBSS_913 = false;
	}
	if (PRBSS_811)
	{
		///////////////Yellow lights
		//////////////1
		if (BSS811X1B)
		{
			BSS811X2A = true;
			PVkCSOZHLLx1 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2A = false;
			PVkCSOZHLLx1 = false;
		}
		///////////////Yellow lights
		//////////////2
		if (BSS811X1D)
		{
			BSS811X2B = true;
			PVkCSOZHLLx2 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2B = false;
			PVkCSOZHLLx2 = false;
		}
		///////////////Yellow lights
		//////////////3
		if (BSS811X1N)
		{
			BSS811X2G = true;
			PVkCSOZHLLx3 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2G = false;
			PVkCSOZHLLx3 = false;
		}
		///////////////Yellow lights
		//////////////4
		if (BSS811X1R)
		{
			BSS811X2H = true;
			PVkCSOZHLLx4 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2H = false;
			PVkCSOZHLLx4 = false;
		}
		///////////////Yellow lights
		//////////////5
		if (BSS811X1T)
		{
			BSS811X2J = true;
			PVkCSOZHLLx5 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2J = false;
			PVkCSOZHLLx2 = false;
		}
		///////////////Yellow lights
		//////////////6
		if (BSS811X1V)
		{
			BSS811X2K = true;
			PVkCSOZHLLx6 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2K = false;
			PVkCSOZHLLx6 = false;
		}
		///////////////Yellow lights
		//////////////7
		if (BSS811X1Z)
		{
			BSS811X2M = true;
			PVkCSOZHLLx7 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2M = false;
			PVkCSOZHLLx7 = false;
		}
		///////////////Yellow lights
		//////////////8
		if (BSS811X1b)
		{
			BSS811X2N = true;
			PVkCSOZHLLx8 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2N = false;
			PVkCSOZHLLx8 = false;
		}
		///////////////Yellow lights
		//////////////9
		if (BSS811X1d)
		{
			BSS811X2P = true;
			PVkCSOZHLLx9 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2P = false;
			PVkCSOZHLLx9 = false;
		}
		///////////////Yellow lights
		//////////////10
		if (BSS811X1f)
		{
			BSS811X2R = true;
			PVkCSOZHLLx10 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2R = false;
			PVkCSOZHLLx10 = false;
		}
		///////////////Yellow lights
		//////////////11
		if (BSS811X1DD)
		{
			BSS811X2c = true;
			PVkCSOZHLLx11 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2c = false;
			PVkCSOZHLLx11 = false;
		}
		///////////////Yellow lights
		//////////////12
		if (UPOR_DZ_TANGAZH_L)
		{
			BSS811X2n = true;
			PVkCSOZHLLx12 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2n = false;
			PVkCSOZHLLx12 = false;
		}
		///////////////Yellow lights
		//////////////13
		if (ZAKRILKI_PARIRUY)
		{
			BSS811X2m = true;
			PVkCSOZHLLx13 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2m = false;
			PVkCSOZHLLx13 = false;
		}
		///////////////Yellow lights
		//////////////14
		if (BSS811X1Y)
		{
			BSS811X2L = true;
			PVkCSOZHLLx14 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2L = false;
			PVkCSOZHLLx14 = false;
		}
		///////////////Yellow lights
		//////////////15
		if (DZ_OTKL_DZ_TANGAZH)
		{
			BSS811X2r = true;
			PVkCSOZHLLx15 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2r = false;
			PVkCSOZHLLx15 = false;
		}
		///////////////Yellow lights
		//////////////16
		if (BSS811X1h)
		{
			BSS811X2S = true;
			PVkCSOZHLLx16 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2S = false;
			PVkCSOZHLLx16 = false;
		}
		///////////////Yellow lights
		//////////////17
		if (BSS811X1j)
		{
			BSS811X2T = true;
			PVkCSOZHLLx17 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2T = false;
			PVkCSOZHLLx17 = false;
		}
		///////////////Yellow lights
		//////////////18
		if (BSS811X1p)
		{
			BSS811X2V = true;
			PVkCSOZHLLx18 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2V = false;
			PVkCSOZHLLx18 = false;
		}
		///////////////Yellow lights
		//////////////19
		if (BSS811X1t)
		{
			BSS811X2X = true;
			PVkCSOZHLLx19 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2X = false;
			PVkCSOZHLLx19 = false;
		}
		///////////////Yellow lights
		//////////////20
		if (BSS811X1v)
		{
			BSS811X2Y = true;
			PVkCSOZHLLx20 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2Y = false;
			PVkCSOZHLLx20 = false;
		}
		///////////////Yellow lights
		//////////////21
		if (BSS811X1x)
		{
			BSS811X2Z = true;
			PVkCSOZHLLx21 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2Z = false;
			PVkCSOZHLLx21 = false;
		}
		///////////////Yellow lights
		//////////////22
		if (BSS811X1z)
		{
			BSS811X2a = true;
			PVkCSOZHLLx22 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2a = false;
			PVkCSOZHLLx22 = false;
		}
		///////////////Yellow lights
		//////////////23
		if (SUR_GS1_OTKL)
		{
			BSS811X2d = true;
			PVkCSOZHLLx23 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2d = false;
			PVkCSOZHLLx23 = false;
		}
		///////////////Yellow lights
		//////////////24
		if (SUR_GS2_OTKL)
		{
			BSS811X2e = true;
			PVkCSOZHLLx24 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2e = false;
			PVkCSOZHLLx24 = false;
		}
		///////////////Yellow lights
		//////////////25
		if (SUR_GS3_OTKL)
		{
			BSS811X2f = true;
			PVkCSOZHLLx25 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2f = false;
			PVkCSOZHLLx25 = false;
		}
		///////////////Yellow lights
		//////////////26
		if (SUR_GS4_OTKL)
		{
			BSS811X2g = true;
			PVkCSOZHLLx26 = true;
			PVkCSOZHLLx_sum++;
		}
		else
		{
			BSS811X2g = false;
			PVkCSOZHLLx26 = false;
		}

		if (PVkCSOZHLLx_sum == 0)
		{
			PCSOZHLL = false;
		}
		else
		{
			PCSOZHLL = true;
		}

		if (S1_3364 == 2)
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

		if (S1_3364 == 2)
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

		if (PVkCSOKLLy_sum == 0)
		{
			PCSOKLL = false;
		}
		else
		{
			PCSOKLL = true;
		}

		if (S1_3364 == 2)
		{
			PCSOKLL = true;
		}
	}
	else
	{
	PRBSS_811, PRBSS_812, PRBSS_913, PVkCSOZHLLx1, PVkCSOZHLLx2, PVkCSOZHLLx3, PVkCSOZHLLx4, PVkCSOZHLLx5, PVkCSOZHLLx6
		, PVkCSOZHLLx7, PVkCSOZHLLx8, PVkCSOZHLLx9, PVkCSOZHLLx10, PVkCSOZHLLx11, PVkCSOZHLLx12, PVkCSOZHLLx13, PVkCSOZHLLx14, PVkCSOZHLLx15,
		PVkCSOZHLLx16, PVkCSOZHLLx17, PVkCSOZHLLx18, PVkCSOZHLLx19, PVkCSOZHLLx20, PVkCSOZHLLx21, PVkCSOZHLLx22, PVkCSOZHLLx23, PVkCSOZHLLx24
		, PVkCSOZHLLx25, PVkCSOZHLLx26, PCSOZHLL, PVkCSOKLLy1, PVkCSOKLLy2, PVkCSOKLLy3, PVkCSOKLLy4, PVkCSOKLLy5, PVkCSOKLLy6, PVkCSOKLLy7,
		PCSOKLL, PKLLL, BSS811x1, BSS811x2, BSS811y1, BSS811y2, BSS811z1, BSS811z2, BSS811X1B, BSS811X1D, BSS811X1N,
		BSS811X1R, BSS811X1T, BSS811X1V, BSS811X1b, BSS811X1d, BSS811X1f, BSS811X1DD, UPOR_DZ_TANGAZH_L, ZAKRILKI_PARIRUY, BSS811X1Y,
		DZ_OTKL_DZ_TANGAZH, BSS811X1h, BSS811X1j, BSS811X1p, BSS811X1t, BSS811X1v, BSS811X1x, BSS811X1Z, BSS811X1z, SUR_GS1_OTKL, SUR_GS2_OTKL,
		SUR_GS3_OTKL, SUR_GS4_OTKL, BSS811X2A, BSS811X2B, BSS811X2G, BSS811X2H, BSS811X2J, BSS811X2K, BSS811X2M, BSS811X2N, BSS811X2P,
		BSS811X2R, BSS811X2c, BSS811X2n, BSS811X2m, BSS811X2L, BSS811X2r, BSS811X2S, BSS811X2T, BSS811X2V, BSS811X2X, BSS811X2Y, BSS811X2Z,
		BSS811X2a, BSS811X2d, BSS811X2e, BSS811X2f, BSS811X2g,BSS811X1E, BSS811X2C, BSS811X1G, BSS811X2D, BSS811X1J, BSS811X2E, BSS811X1L,
		BSS811X2F, BSS811X1n, BSS811X2U, BSS811X1r, BSS811X2W, BSS811X1BB, BSS811X2b,BSS811X3A, BSS811X3C, BSS811X3D, BSS811X3E,
		NEYTRAL_kren, NEYTRAL_kurs, BSS811X2h, BSS811X2l, BSS811X2j, BSS811X2k, BSS811X2p, BSS811X2q = false;
	}
	

	 




	 





}
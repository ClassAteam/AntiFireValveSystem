#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Alarm2ndNaviHeader.h"
#include <math.h>

bool firstiteration = true;
void logic()
{
	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_939 = true;
	}
	else
	{
		PRBSS_939 = false;
	}

	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0 && S8_03364 == 2)
	{
		PKLSHN = true;
	}
	else
	{
		PKLSHN = false;
	}

	if (Ush1dpl >= 18.0 && Ush1dpp >= 18.0)
	{
		USASHN = USASL_to_alpha(alpha_rrya7shn);
	}
	else
	{
		USASHN = false;
	}

	if (PRBSS_939)
	{
		///////////////Yellow lights
		//////////////1
		if (BSS939X1B)
		{
			BSS939X2A = true;
			PVkCSOZHSHNx1 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2A = false;
			PVkCSOZHSHNx1 = false;
		}
		///////////////Yellow lights
		//////////////2
		if (BSS939X1D)
		{
			BSS939X2B = true;
			PVkCSOZHSHNx2 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2B = false;
			PVkCSOZHSHNx2 = false;
		}
		///////////////Yellow lights
		//////////////3
		if (BSS939X1E)
		{
			BSS939X2C = true;
			PVkCSOZHSHNx3 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2C = false;
			PVkCSOZHSHNx3 = false;
		}
		///////////////Yellow lights
		//////////////4
		if (BSS926X1J)
		{
			BSS939X2E = true;
			PVkCSOZHSHNx4 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2E = false;
			PVkCSOZHSHNx4 = false;
		}
		///////////////Yellow lights
		//////////////5
		if (BSS926X1L)
		{
			BSS939X2F = true;
			PVkCSOZHSHNx5 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2F = false;
			PVkCSOZHSHNx5 = false;
		}
		///////////////Yellow lights
		//////////////6
		if (SVS_OTKAZ)
		{
			BSS939X2H = true;
			PVkCSOZHSHNx6 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2H = false;
			PVkCSOZHSHNx6 = false;
		}
		///////////////Yellow lights
		//////////////7
		if (SVS_NET_REZERVA)
		{
			BSS939X2J = true;
			PVkCSOZHSHNx7 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2J = false;
			PVkCSOZHSHNx7 = false;
		}

		///////////////Yellow lights
		//////////////8
		if (INS_OTKAZ)
		{
			BSS939X2K = true;
			PVkCSOZHSHNx8 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2K = false;
			PVkCSOZHSHNx8 = false;
		}

		///////////////Yellow lights
		//////////////9
		if (INS_NET_REZERVA)
		{
			BSS939X2L = true;
			PVkCSOZHSHNx9 = true;
			PVkCSOZHSHNx_sum++;
		}
		else
		{
			BSS939X2L = false;
			PVkCSOZHSHNx9 = false;
		}

		if (PVkCSOZHSHNx_sum == 0)
		{
			PCSOZHSHN = false;
		}
		else
		{
			PCSOZHSHN = true;
		}

		if (S4_03364 == 2)
		{
			PCSOZHSHN = true;
		}
		///////////////Red lights_1
		//////////////1
		if (BSS939X1G)
		{
			BSS939X2D = true;
			PVkCSOKSHNy1 = true;
			PVkCSOKSHNy_sum++;
		}
		else
		{
			BSS939X2D = false;
			PVkCSOKSHNy1 = false;
		}
		///////////////Red lights_1
		//////////////2
		if (BSS939X1N)
		{
			BSS939X2G = true;
			PVkCSOKSHNy2 = true;
			PVkCSOKSHNy_sum++;
		}
		else
		{
			BSS939X2G = false;
			PVkCSOKSHNy2 = false;
		}

		if (PVkCSOKSHNy_sum == 0)
		{
			PCSOKSHN = false;
		}
		else
		{
			PCSOKSHN = true;
		}

		if (S4_03364 == 2)
		{
			PBVkCSOKSHNy = true;
		}

		if (PKLSHN && PRBSS_939)
		{
			BSS939X2A = BSS939X2B = BSS939X2C = BSS939X2E = BSS939X2F = BSS939X2H = BSS939X2J =
				BSS939X2K = BSS939X2L = false;
		}
	}
	else
	{
		BSS939X2A = BSS939X2B = BSS939X2C = BSS939X2E = BSS939X2F = BSS939X2H = BSS939X2J =
			BSS939X2K = BSS939X2L = false;

		PCSOZHSHN = PKLSHN = PCSOKSHO = PCSOKSHN = PBVkCSOKSHNy =

			PVkCSOZHSHNx1 = PVkCSOZHSHNx2 = PVkCSOZHSHNx3 = PVkCSOZHSHNx4 = PVkCSOZHSHNx5 = PVkCSOZHSHNx6
			= PVkCSOZHSHNx7 = PVkCSOZHSHNx8 = PVkCSOZHSHNx9 = PVkCSOZHSHNx10 = PVkCSOZHSHNx11 =

			PVkCSOKSHNy1 = PVkCSOKSHNy2 = false;
	}
}
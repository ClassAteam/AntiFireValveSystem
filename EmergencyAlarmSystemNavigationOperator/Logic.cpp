#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
#include <math.h>

bool firstiteration = true;
void logic()
{
	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_926 = true;
	}
	else
	{
		PRBSS_926 = false;
	}

	if (Ush1dpl >= 18.0 && Ush1dpp >= 18.0)
	{
		PRBSS_837 = true;
	}
	else
	{
		PRBSS_837 = false;
	}

	if (Ush2dpl >= 18.0 && Ush2dpp >= 18.0)
	{
		PRBSS_838 = true;
	}
	else
	{
		PRBSS_838 = false;
	}

	if ((Ush2dpl >= 18.0) && (Ush2dpp >= 18.0) && (S7_03364 == 3))
	{
		PKLSHO = true;
	}
	else
	{
		PKLSHO = false;
	}

	if ((Ush1dpl >= 18.0) && (Ush1dpp >= 18.0))
	{
		USASSHO = USASL_to_alpha(alpha_rrya7sho);
	}
	else
	{
		USASSHO = false;
	}

	if (PRBSS_926)
	{
		///////////////Yellow lights
		//////////////1
		if (BSS926X1C)
		{
			BSS926X2B = true;
			PVkCSOZHSHOx1 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS926X2B = false;
			PVkCSOZHSHOx1 = false;
		}
		///////////////Yellow lights
		//////////////2
		if (BSS926X1G)
		{
			BSS926X2D = true;
			PVkCSOZHSHOx2 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS926X2D = false;
			PVkCSOZHSHOx2 = false;
		}
		///////////////Yellow lights
		//////////////3
		if (BSS926X3G)
		{
			BSS926X2p = true;
			PVkCSOZHSHOx3 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS926X2p = false;
			PVkCSOZHSHOx3 = false;
		}
		///////////////Yellow lights
		//////////////4
		if (BSS926X3V)
		{
			BSS826X2s = true;
			PVkCSOZHSHOx4 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS826X2s = false;
			PVkCSOZHSHOx4 = false;
		}
		///////////////Yellow lights
		//////////////5
		if (BSS926X1x)
		{
			BSS926X2Z = true;
			PVkCSOZHSHOx5 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS926X2Z = false;
			PVkCSOZHSHOx5 = false;
		}
		///////////////Yellow lights
		//////////////6
		if (BSS926X1BB)
		{
			BSS926X2b = true;
			PVkCSOZHSHOx6 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS926X2b = false;
			PVkCSOZHSHOx6 = false;
		}
		///////////////Yellow lights
		//////////////7
		if (BSS926X1FF)
		{
			BSS926X2d = true;
			PVkCSOZHSHOx7 = true;
			PVkCSOZHSHOx_sum++;
		}
		else
		{
			BSS926X2d = false;
			PVkCSOZHSHOx7 = false;
		}

		if (PVkCSOZHSHOx_sum == 0)
		{
			PCSOZHSHO = false;
		}
		else
		{
			PCSOZHSHO = true;
		}

		if (S3_03364 == 2)
		{
			PCSOZHSHO = true;
		}

		///////////////Red lights
		//////////////1
		if (BSS926X1A)
		{
			BSS926X2A = true;
		}
		else
		{
			BSS926X2A = false;
		}
		///////////////Red lights
		//////////////2
		if (BSS926X1E)
		{
			BSS926X2C = true;
		}
		else
		{
			BSS926X2C = false;
		}
		///////////////Red lights
		//////////////3
		if (BSS926X1J)
		{
			BSS926X2E = true;
		}
		else
		{
			BSS926X2E = false;
		}
		///////////////Red lights
		//////////////4
		if (BSS926X1L)
		{
			BSS926X2F = true;
		}
		else
		{
			BSS926X2F = false;
		}
		///////////////Red lights
		//////////////5
		if (BSS926X1N)
		{
			BSS926X2G = true;
		}
		else
		{
			BSS926X2G = false;
		}
		///////////////Red lights
		//////////////6
		if (BSS926X1R)
		{
			BSS926X2H = true;
		}
		else
		{
			BSS926X2H = false;
		}
		///////////////Red lights
		//////////////7
		if (BSS926X1T)
		{
			BSS926X2J = true;
		}
		else
		{
			BSS926X2J = false;
		}
		///////////////Red lights
		//////////////8
		if (BSS926X1V)
		{
			BSS926X2K = true;
		}
		else
		{
			BSS926X2K = false;
		}
		///////////////Red lights
		//////////////9
		if (BSS926X1X)
		{
			BSS926X2L = true;
		}
		else
		{
			BSS926X2J = false;
		}
		///////////////Red lights
		//////////////10
		if (BSS926X1Z)
		{
			BSS926X2M = true;
		}
		else
		{
			BSS926X2M = false;
		}
		///////////////Red lights
		//////////////11
		if (BSS926X1b)
		{
			BSS926X2N = true;
		}
		else
		{
			BSS926X2N = false;
		}
		///////////////Red lights
		//////////////12
		if (BSS926X1f)
		{
			BSS926X2R = true;
		}
		else
		{
			BSS926X2R = false;
		}
		///////////////Red lights
		//////////////13
		if (BSS926X1h)
		{
			BSS926X2S = true;
		}
		else
		{
			BSS926X2S = false;
		}
		///////////////Red lights
		//////////////14
		if (BSS926X1j)
		{
			BSS926X2T = true;
		}
		else
		{
			BSS926X2T = false;
		}
		///////////////Red lights
		//////////////15
		if (BSS926X1n)
		{
			BSS926X2U = true;
		}
		else
		{
			BSS926X2U = false;
		}
		///////////////Red lights
		//////////////16
		if (BSS926X1p)
		{
			BSS926X2V = true;
		}
		else
		{
			BSS926X2V = false;
		}
		///////////////Red lights
		//////////////17
		if (BSS926X1r)
		{
			BSS926X2W = true;
		}
		else
		{
			BSS926X2W = false;
		}
		///////////////Red lights
		//////////////18
		if (BSS926X1z)
		{
			BSS926X2a = true;
		}
		else
		{
			BSS926X2a = false;
		}
		///////////////Red lights
		//////////////19
		if (BSS926X1DD)
		{
			BSS926X2c = true;
		}
		else
		{
			BSS926X2c = false;
		}
		///////////////Red lights
		//////////////20
		if (BSS926X1HH)
		{
			BSS926X2e = true;
		}
		else
		{
			BSS926X2e = false;
		}
		///////////////Red lights
		//////////////21
		if (BSS926X1KK)
		{
			BSS926X2f = true;
		}
		else
		{
			BSS926X2f = false;
		}
		///////////////Red lights
		//////////////22
		if (BSS926X1MM)
		{
			BSS926X2g = true;
		}
		else
		{
			BSS926X2g = false;
		}
		///////////////Red lights
		//////////////23
		if (BSS926X3A)
		{
			BSS926X2h = true;
		}
		else
		{
			BSS926X2h = false;
		}
		///////////////Red lights
		//////////////24
		if (BSS926X3C)
		{
			BSS926X2i = true;
		}
		else
		{
			BSS926X2i = false;
		}
		///////////////Red lights
		//////////////25
		if (BSS926X3E)
		{
			BSS926X2j = true;
		}
		else
		{
			BSS926X2j = false;
		}
		///////////////Red lights
		//////////////26
		if (BSS926X3H)
		{
			BSS926X2k = true;
		}
		else
		{
			BSS926X2k = false;
		}
		///////////////Red lights
		//////////////27
		if (BSS926X3J)
		{
			BSS926X2m = true;
		}
		else
		{
			BSS926X2m = false;
		}
		///////////////Red lights
		//////////////28
		if (BSS926X3L)
		{
			BSS926X2n = true;
		}
		else
		{
			BSS926X2n = false;
		}
		///////////////Red lights
		//////////////29
		if (BSS926X3N)
		{
			BSS926X2p = true;
		}
		else
		{
			BSS926X2p = false;
		}
		///////////////Red lights
		//////////////30
		if (BSS926X3R)
		{
			BSS926X2q = true;
		}
		else
		{
			BSS926X2q = false;
		}
		///////////////Red lights
		//////////////31
		if (BSS926X3T)
		{
			BSS926X2r = true;
		}
		else
		{
			BSS926X2r = false;
		}

		if (PVkCSOKSHOy_sum == 0)
		{
			PCSOZHSHO = false;
		}
		else
		{
			PCSOZHSHO = true;
		}

		if (S3_03364 == 2)
		{
			PCSOZHSHO = true;
		}
		if (PRBSS_926)
		{
			BSS926X2B = BSS926X2D = BSS926X2p = BSS926X2Z = BSS926X2b = BSS926X2d = BSS926X2A =
				BSS926X2C = BSS926X2E = BSS926X2F = BSS926X2G = BSS926X2H = BSS926X2J =
				BSS926X2j = BSS926X2k = BSS926X2K = BSS926X2L = BSS926X2M = BSS926X2N =
				BSS926X2R = BSS926X2S = BSS926X2T = BSS926X2U = BSS926X2V = BSS926X2W =
				BSS926X2a = BSS926X2c = BSS926X2e = BSS926X2f = BSS926X2g = BSS926X2h =
				BSS926X2i = BSS926X2m = BSS926X2n = BSS926X2p = BSS926X2q = BSS926X2r = true;
		}
	}
	else
	{
		PRBSS_926, PRBSS_837, PRBSS_913, PVkCSOZHSHOx1, PVkCSOZHSHOx2, PVkCSOZHSHOx3, PVkCSOZHSHOx4,
			PVkCSOZHSHOx5, PVkCSOZHSHOx6, PVkCSOZHSHOx7, PVkCSOZHLLx8,  PCSOZHSHO, PVkCSOKSHOy1, 
			PVkCSOKSHOy2, PVkCSOKSHOy3, PVkCSOKSHOy4, PVkCSOKSHOy5, PVkCSOKSHOy6, PVkCSOKSHOy7,
			PCSOZHSHO, PKLSHO, BSS926X1C, BSS926X1G, BSS926X3G, BSS926X3V, BSS926X1x,
			BSS926X1BB, BSS926X1FF,BSS926X2B, BSS926X2D, BSS926X2p, BSS826X2s, BSS926X1x,
			BSS926X2b, BSS926X2d, BSS926X1A, BSS926X2A, BSS926X1E, BSS926X2C, BSS926X1J, BSS926X2E, BSS926X1L,
			BSS926X2F, BSS926X1N, BSS926X2G, BSS926X1R, BSS926X2H, BSS926X1T, BSS926X2J = false;
	}

	if (PRBSS_837)
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
			PCSOZHSHO = false;
		}
		else
		{
			PCSOZHSHO = true;
		}

		if (S3_03364 == 2)
		{
			PCSOZHSHO = true;
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
			PCSOZHSHO = false;
		}
		else
		{
			PCSOZHSHO = true;
		}

		if (S3_03364 == 2)
		{
			PCSOZHSHO = true;
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

		if (PRBSS_926)
		{
			BSS811x2 = BSS926X2B = BSS926X2D = BSS926X2p = BSS826X2s = BSS926X1x = BSS926X2b = BSS926X2d = BSS811X2N = BSS811X2P =
				BSS811X2R = BSS811X2c = BSS811X2n = BSS811X2m = BSS811X2L = BSS811X2r = BSS811X2S = BSS811X2T = BSS811X2V =
				BSS811X2X = BSS811X2Y = BSS811X2Z = BSS811X2a = BSS811X2d = BSS811X2e = BSS811X2f = BSS811X2g = BSS926X2A =
				BSS926X2C = BSS926X2E = BSS926X2F = BSS926X2G = BSS926X2H = BSS926X2J = BSS811X2h = BSS811X2l = BSS811X2j =
				BSS811X2k = BSS811X2p = BSS811X2q = true;
		}

		if (PRBSS_837)
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

	if (PRBSS_913)
	{
		///////////////Yellow lights_3
		//////////////1
		if (BSS913X1C)
		{
			BSS913X2B = true;
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
			PCSOZHSHO = false;
		}
		else
		{
			PCSOZHSHO = true;
		}

		if (S3_03364 == 2)
		{
			PCSOZHSHO = true;
		}

		///////////////Red lights_3
		//////////////1
		if (BSS913X1A)
		{
			BSS913X2A = true;
			PVkCSOKLLp1 = true;
			PVkCSOKLLp_sum++;
		}
		else
		{
			BSS913X2A = false;
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
			PCSOZHSHO = false;
		}
		else
		{
			PCSOZHSHO = true;
		}

		if (S3_03364 == 2)
		{
			PCSOZHSHO = true;
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

		if (PRBSS_913)
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
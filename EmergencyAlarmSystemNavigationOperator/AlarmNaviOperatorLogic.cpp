#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "AlarmNaviHeader.h"
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

		///////////////White and green lights_1
		//////////////1
		if (BSS926X1A)
		{
			BSS926X2A = true;
		}
		else
		{
			BSS926X2A = false;
		}
		///////////////White and green lights_1
		//////////////2
		if (BSS926X1E)
		{
			BSS926X2C = true;
		}
		else
		{
			BSS926X2C = false;
		}
		///////////////White and green lights_1
		//////////////3
		if (BSS926X1J)
		{
			BSS926X2E = true;
		}
		else
		{
			BSS926X2E = false;
		}
		///////////////White and green lights_1
		//////////////4
		if (BSS926X1L)
		{
			BSS926X2F = true;
		}
		else
		{
			BSS926X2F = false;
		}
		///////////////White and green lights_1
		//////////////5
		if (BSS926X1N)
		{
			BSS926X2G = true;
		}
		else
		{
			BSS926X2G = false;
		}
		///////////////White and green lights_1
		//////////////6
		if (BSS926X1R)
		{
			BSS926X2H = true;
		}
		else
		{
			BSS926X2H = false;
		}
		///////////////White and green lights_1
		//////////////7
		if (BSS926X1T)
		{
			BSS926X2J = true;
		}
		else
		{
			BSS926X2J = false;
		}
		///////////////White and green lights_1
		//////////////8
		if (BSS926X1V)
		{
			BSS926X2K = true;
		}
		else
		{
			BSS926X2K = false;
		}
		///////////////White and green lights_1
		//////////////9
		if (BSS926X1X)
		{
			BSS926X2L = true;
		}
		else
		{
			BSS926X2J = false;
		}
		///////////////White and green lights_1
		//////////////10
		if (BSS926X1Z)
		{
			BSS926X2M = true;
		}
		else
		{
			BSS926X2M = false;
		}
		///////////////White and green lights_1
		//////////////11
		if (BSS926X1b)
		{
			BSS926X2N = true;
		}
		else
		{
			BSS926X2N = false;
		}
		///////////////White and green lights_1
		//////////////12
		if (BSS926X1f)
		{
			BSS926X2R = true;
		}
		else
		{
			BSS926X2R = false;
		}
		///////////////White and green lights_1
		//////////////13
		if (BSS926X1h)
		{
			BSS926X2S = true;
		}
		else
		{
			BSS926X2S = false;
		}
		///////////////White and green lights_1
		//////////////14
		if (BSS926X1j)
		{
			BSS926X2T = true;
		}
		else
		{
			BSS926X2T = false;
		}
		///////////////White and green lights_1
		//////////////15
		if (BSS926X1n)
		{
			BSS926X2U = true;
		}
		else
		{
			BSS926X2U = false;
		}
		///////////////White and green lights_1
		//////////////16
		if (BSS926X1p)
		{
			BSS926X2V = true;
		}
		else
		{
			BSS926X2V = false;
		}
		///////////////White and green lights_1
		//////////////17
		if (BSS926X1r)
		{
			BSS926X2W = true;
		}
		else
		{
			BSS926X2W = false;
		}
		///////////////White and green lights_1
		//////////////18
		if (BSS926X1z)
		{
			BSS926X2a = true;
		}
		else
		{
			BSS926X2a = false;
		}
		///////////////White and green lights_1
		//////////////19
		if (BSS926X1DD)
		{
			BSS926X2c = true;
		}
		else
		{
			BSS926X2c = false;
		}
		///////////////White and green lights_1
		//////////////20
		if (BSS926X1HH)
		{
			BSS926X2e = true;
		}
		else
		{
			BSS926X2e = false;
		}
		///////////////White and green lights_1
		//////////////21
		if (BSS926X1KK)
		{
			BSS926X2f = true;
		}
		else
		{
			BSS926X2f = false;
		}
		///////////////White and green lights_1
		//////////////22
		if (BSS926X1MM)
		{
			BSS926X2g = true;
		}
		else
		{
			BSS926X2g = false;
		}
		///////////////White and green lights_1
		//////////////23
		if (BSS926X3A)
		{
			BSS926X2h = true;
		}
		else
		{
			BSS926X2h = false;
		}
		///////////////White and green lights_1
		//////////////24
		if (BSS926X3C)
		{
			BSS926X2i = true;
		}
		else
		{
			BSS926X2i = false;
		}
		///////////////White and green lights_1
		//////////////25
		if (BSS926X3E)
		{
			BSS926X2j = true;
		}
		else
		{
			BSS926X2j = false;
		}
		///////////////White and green lights_1
		//////////////26
		if (BSS926X3H)
		{
			BSS926X2k = true;
		}
		else
		{
			BSS926X2k = false;
		}
		///////////////White and green lights_1
		//////////////27
		if (BSS926X3J)
		{
			BSS926X2m = true;
		}
		else
		{
			BSS926X2m = false;
		}
		///////////////White and green lights_1
		//////////////28
		if (BSS926X3L)
		{
			BSS926X2n = true;
		}
		else
		{
			BSS926X2n = false;
		}
		///////////////White and green lights_1
		//////////////29
		if (BSS926X3N)
		{
			BSS926X2p = true;
		}
		else
		{
			BSS926X2p = false;
		}
		///////////////White and green lights_1
		//////////////30
		if (BSS926X3R)
		{
			BSS926X2q = true;
		}
		else
		{
			BSS926X2q = false;
		}
		///////////////White and green lights_1
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
		PRBSS_926= PRBSS_837= PRBSS_913= PVkCSOZHSHOx1= PVkCSOZHSHOx2= PVkCSOZHSHOx3= PVkCSOZHSHOx4=
			PVkCSOZHSHOx5= PVkCSOZHSHOx6= PVkCSOZHSHOx7= PVkCSOZHLLx8= PCSOZHSHO= PVkCSOKSHOy1=
			PVkCSOKSHOy2= PVkCSOKSHOy3= PVkCSOKSHOy4= PVkCSOKSHOy5= PVkCSOKSHOy6= PVkCSOKSHOy7=
			PCSOZHSHO= PKLSHO= BSS926X1C= BSS926X1G= BSS926X3G= BSS926X3V= BSS926X1x=
			BSS926X1BB= BSS926X1FF= BSS926X2B= BSS926X2D= BSS926X2p= BSS826X2s= BSS926X1x=
			BSS926X2b= BSS926X2d= BSS926X1A= BSS926X2A= BSS926X1E= BSS926X2C= BSS926X1J= BSS926X2E= BSS926X1L=
			BSS926X2F= BSS926X1N= BSS926X2G= BSS926X1R= BSS926X2H= BSS926X1T= BSS926X2J = false;
	}

	if (PRBSS_837)
	{
		///////////////Yellow lights_2
		//////////////1
		if (BSS837X1A)
		{
			BSS837X2A = true;
			PVkCSOZHSHOk1 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2A = false;
			PVkCSOZHSHOk1 = false;
		}
		///////////////Yellow lights_2
		//////////////2
		if (BSS837X1C)
		{
			BSS837X2B = true;
			PVkCSOZHSHOk2 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2B = false;
			PVkCSOZHSHOk2 = false;
		}
		///////////////Yellow lights_2
		//////////////3
		if (BSS837X1E)
		{
			BSS837X2C = true;
			PVkCSOZHSHOk3 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2C = false;
			PVkCSOZHSHOk3 = false;
		}
		///////////////Yellow lights_2
		//////////////4
		if (BSS837X1G)
		{
			BSS837X2D = true;
			PVkCSOZHSHOk4 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2D = false;
			PVkCSOZHSHOk4 = false;
		}
		///////////////Yellow lights_2
		//////////////5
		if (BSS837X1J)
		{
			BSS837X2E = true;
			PVkCSOZHSHOk5 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2E = false;
			PVkCSOZHSHOk5 = false;
		}
		///////////////Yellow lights_2
		//////////////6
		if (BSS837X1N)
		{
			BSS837X2G = true;
			PVkCSOZHSHOk6 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2G = false;
			PVkCSOZHSHOk6 = false;
		}
		///////////////Yellow lights_2
		//////////////7
		if (BSS837X1R)
		{
			BSS837X2H = true;
			PVkCSOZHSHOk7 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2H = false;
			PVkCSOZHSHOk7 = false;
		}
		///////////////Yellow lights_2
		//////////////8
		if (BSS837X1V)
		{
			BSS837X2K = true;
			PVkCSOZHSHOk8 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2K = false;
			PVkCSOZHSHOk8 = false;
		}
		///////////////Yellow lights_2
		//////////////9
		if (BSS837X1L)
		{
			BSS837X2F = true;
			PVkCSOZHSHOk9 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2F = false;
			PVkCSOZHSHOk9 = false;
		}
		///////////////Yellow lights_2
		//////////////10
		if (BSS837X1X)
		{
			BSS837X2L = true;
			PVkCSOZHSHOk10 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2L = false;
			PVkCSOZHSHOk10 = false;
		}
		///////////////Yellow lights_2
		//////////////11
		if (BSS837X1Z)
		{
			BSS837X2M = true;
			PVkCSOZHSHOk11 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2M = false;
			PVkCSOZHSHOk11 = false;
		}
		///////////////Yellow lights_2
		//////////////12
		if (BSS837X1b)
		{
			BSS837X2N = true;
			PVkCSOZHSHOk12 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2N = false;
			PVkCSOZHSHOk12 = false;
		}
		///////////////Yellow lights_2
		//////////////13
		if (BSS837X1d)
		{
			BSS837X2P = true;
			PVkCSOZHSHOk13 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2P = false;
			PVkCSOZHSHOk13 = false;
		}
		///////////////Yellow lights_2
		//////////////14
		if (BSS837X1f)
		{
			BSS837X2R = true;
			PVkCSOZHSHOk14 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2R = false;
			PVkCSOZHSHOk14 = false;
		}
		///////////////Yellow lights_2
		//////////////15
		if (BSS837X1H)
		{
			BSS837X2S = true;
			PVkCSOZHSHOk15 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2S = false;
			PVkCSOZHSHOk15 = false;
		}
		///////////////Yellow lights_2
		//////////////16
		if (BSS837X1j)
		{
			BSS837X2T = true;
			PVkCSOZHSHOk16 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2T = false;
			PVkCSOZHSHOk16 = false;
		}

		///////////////Yellow lights_2
		//////////////17
		if (BSS837X1r)
		{
			BSS837X2W = true;
			PVkCSOZHSHOk17 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2W = false;
			PVkCSOZHSHOk17 = false;
		}
		///////////////Yellow lights_2
		//////////////18
		if (BSS837X1t)
		{
			BSS837X2X = true;
			PVkCSOZHSHOk18 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2X = false;
			PVkCSOZHSHOk18 = false;
		}
		///////////////Yellow lights_2
		//////////////19
		if (BSS837X1x)
		{
			BSS837X2Z = true;
			PVkCSOZHSHOk19 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2Z = false;
			PVkCSOZHSHOk19 = false;
		}
		///////////////Yellow lights_2
		//////////////20
		if (BSS837X1BB)
		{
			BSS837X2b = true;
			PVkCSOZHSHOk20 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2b = false;
			PVkCSOZHSHOk20 = false;
		}
		///////////////Yellow lights_2
		//////////////21
		if (BSS837X1DD)
		{
			BSS837X2c = true;
			PVkCSOZHSHOk21 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2c = false;
			PVkCSOZHSHOk21 = false;
		}
		///////////////Yellow lights_2
		//////////////22
		if (BSS837X1KK)
		{
			BSS837X2f = true;
			PVkCSOZHSHOk22 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2f = false;
			PVkCSOZHSHOk22 = false;
		}
		///////////////Yellow lights_2
		//////////////23
		if (BSS837X1MM)
		{
			BSS837X2g = true;
			PVkCSOZHSHOk23 = true;
			PVkCSOZHSHOk_sum++;
		}
		else
		{
			BSS837X2g = false;
			PVkCSOZHSHOk23 = false;
		}
		///////////////Yellow lights_2
		//////////////24
		if (BSS837X3G)
		{
			BSS837X2k = true;
			PVkCSOZHSHOk24 = true;
			PVkCSOZHSHOk_sum++;
		}

		else
		{
			BSS837X2k = false;
			PVkCSOZHSHOk24 = false;
		}

		///////////////Yellow lights_2
		//////////////25
		if (BSS837X3G)
		{
			BSS837X2m = true;
			PVkCSOZHSHOk25 = true;
			PVkCSOZHSHOk_sum++;
		}

		else
		{
			BSS837X2m = false;
			PVkCSOZHSHOk25 = false;
		}

		if (PVkCSOZHSHOk_sum == 0)
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
		if (BSS837X1p)
		{
			BSS837X2V = true;
			PVkCSOKSHOl1 = true;
			PVkCSOKSHOl_sum++;
		}
		else
		{
			BSS837X2V = false;
			PVkCSOKSHOl1 = false;
		}
		///////////////Red lights_2
		//////////////2
		if (BSS837X3C)
		{
			BSS837X2i = true;
			PVkCSOKSHOl2 = true;
			PVkCSOKSHOl_sum++;
		}
		else
		{
			BSS837X2i = false;
			PVkCSOKSHOl2 = false;
		}
		///////////////Red lights_2
		//////////////3
		if (BSS837X3N)
		{
			BSS837X2p = true;
			PVkCSOKSHOl3 = true;
			PVkCSOKSHOl_sum++;
		}
		else
		{
			BSS837X2p = false;
			PVkCSOKSHOl3 = false;
		}
		
		if (PVkCSOKSHOl_sum == 0)
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
		if (BSS837X1T)
		{
			BSS837X2J = true;
		}
		else
		{
			BSS837X2J = false;
		}
		///////////////Green and White lights 2
		//////////////2
		if (BSS837X1n)
		{
			BSS837X2U = true;
		}
		else
		{
			BSS837X2U = false;
		}
		///////////////Green and White lights 2
		//////////////3
		if (BSS837X1v)
		{
			BSS837X2Y = true;
		}
		else
		{
			BSS837X2Y = false;
		}
		///////////////Green and White lights 2
		//////////////4
		if (BSS837X1z)
		{
			BSS837X2a = true;
		}
		else
		{
			BSS837X2a = false;
		}
		///////////////Green and White lights 2
		//////////////5
		if (BSS837X1FF)
		{
			BSS837X2d = true;
		}
		else
		{
			BSS837X2d = false;
		}
		///////////////Green and White lights 2
		//////////////6
		if (BSS837X1HH)
		{
			BSS837X2e = true;
		}
		else
		{
			BSS837X2e = false;
		}
		///////////////Green and White lights 2
		//////////////7
		if (BSS837X3A)
		{
			BSS837X2h = true;
		}
		else
		{
			BSS837X2h = false;
		}
		///////////////Green and White lights 2
		//////////////8
		if (BSS837X3E)
		{
			BSS837X2j = true;
		}
		else
		{
			BSS837X2j = false;
		}
		///////////////Green and White lights 2
		//////////////9
		if (BSS837X3L)
		{
			BSS837X2n = true;
		}
		else
		{
			BSS837X2n = false;
		}
		///////////////Green and White lights 2
		//////////////10
		if (BSS837X3R)
		{
			BSS837X2q = true;
		}
		else
		{
			BSS837X2q = false;
		}
		///////////////Green and White lights 2
		//////////////11
		if (BSS837X3T)
		{
			BSS837X2r = true;
		}
		else
		{
			BSS837X2r = false;
		}
		

		if (PRBSS_837)
		{
				BSS837X2F= BSS837X2L= BSS837X2M= BSS837X2N=
				BSS837X2P= BSS837X2R= BSS837X2S= BSS837X2T=
				BSS837X2K= BSS837X2H= BSS837X2G= BSS837X2E= BSS837X2D= BSS837X2C= BSS837X2B= BSS837X2A=
				BSS837X2W= BSS837X2X= BSS837X2Z= BSS837X2b= BSS837X2c= BSS837X2f= BSS837X2g= BSS837X2k=
				BSS837X2m= BSS837X2V= BSS837X2i= BSS837X2p=
				BSS837X2J = BSS837X2U = BSS837X2Y = BSS837X2a = BSS837X2d = BSS837X2e =
				BSS837X2h = BSS837X2j = BSS837X2n = BSS837X2q = BSS837X2r = true;
		}

	}
	else
	{
	BSS837X2F = BSS837X2L = BSS837X2M = BSS837X2N =
		BSS837X2P = BSS837X2R = BSS837X2S = BSS837X2T =
		BSS837X2K = BSS837X2H = BSS837X2G = BSS837X2E = BSS837X2D = BSS837X2C = BSS837X2B = BSS837X2A =
		BSS837X2W = BSS837X2X = BSS837X2Z = BSS837X2b = BSS837X2c = BSS837X2f = BSS837X2g = BSS837X2k =
		BSS837X2m = BSS837X2V = BSS837X2i = BSS837X2p =
		BSS837X2J = BSS837X2U = BSS837X2Y = BSS837X2a = BSS837X2d = BSS837X2e =
		BSS837X2h = BSS837X2j = BSS837X2n = BSS837X2q = BSS837X2r = false;

		PVkCSOZHSHOk1 = PVkCSOZHSHOk2 = PVkCSOZHSHOk3 = PVkCSOZHSHOk4 = PVkCSOZHSHOk5 = PVkCSOZHSHOk6 = PVkCSOZHSHOk7 = PVkCSOZHSHOk8 =
	PVkCSOZHSHOk9 = PVkCSOZHSHOk10 = PVkCSOZHSHOk11 = PVkCSOZHSHOk12 = PVkCSOZHSHOk13 = PVkCSOZHSHOk14 = PVkCSOZHSHOk15 =
	PVkCSOZHSHOk16 = PVkCSOZHSHOk17 = PVkCSOZHSHOk18 = PVkCSOZHSHOk19 = PVkCSOZHSHOk20 = PVkCSOZHSHOk21 = PVkCSOZHSHOk22 =
	PVkCSOZHSHOk23 = PVkCSOZHSHOk24 = PVkCSOZHSHOk25 = PVkCSOZHSHOk26 =

	PVkCSOKSHOl1 = PVkCSOKSHOl2 = PVkCSOKSHOl3 =

	PCSOZHSHO = PKLSHO = PCSOZHSHO = false;
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
			PVkCSOKSHOl1 = PVkCSOKSHOl2 = PVkCSOKSHOl3 = PVkCSOKLLm4 = PVkCSOKLLm5 =
			PVkCSOKLLp1 = PVkCSOKLLp2 = PVkCSOKLLp3 = PVkCSOKLLp4 = false;
	}
}
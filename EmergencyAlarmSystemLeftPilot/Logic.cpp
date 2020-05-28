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









	 





}
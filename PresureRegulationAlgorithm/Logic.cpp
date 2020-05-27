#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
#include <math.h>

void logic()
{
	PAVARR = false;
	PPP = false;
	PGK = false;
	K1_2131 = false;
	K2_2131 = false;
	K4_2131 = false;
	Ph_ = Ph * 0, 00136;
	Phmsa = presure_at_height(Ph_msa);

	if (Ush2dpl >= 18.0)
	{
		if (Ph_msa - Pkab >= 0.7)
		{
			K1_2131 = true;
		}
		else
		{
			K1_2131 = false;
		}

		if (S1_2131 == 2)
		{
			PPP = true;
		}
		else
		{
			if (S1_2131 == 3)
			{
				PAVARR = true;
				K4_2131 = true;
			}
		}
	}

	if (H < 8000.0 && S2_2131 == 5)
	{
		PGK = true;
	}

	if (K4_2131 == false && Pkab <= 0.34)
	{
		K2_2131 = true;
	}

	if (K1_2131 == true)
	{
		SKD_D300 = 2;
	}


















}
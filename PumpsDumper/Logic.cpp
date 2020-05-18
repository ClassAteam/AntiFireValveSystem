#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
void logic()
{
	//						F91 toggle
	if (Ush1p >= 18.0 && F9_7322 == true	)
	{
		F91 = true;
	}
	else
	{
		F91 = false;
	}

	//						F101 toggle
	if (Ush1dpl >= 18.0 && F3_10010 == true)
	{
		F101 = true;
	}
	else
	{
		F101 = false;
	}

	//						F31 toggle
	if (Ush2dpl >= 18.0 && F3_10010 == true)
	{
		F31 = true;
	}
	else
	{
		F31 = false;
	}
	//						F318 toggle
	if (S1_2910 || K11_2910 || K10_2910 == true)
	{
		F318 = false;
	}
	else
	{
		F318 = true;
	}

	//					F323 toggle
	if (F31 != true)
	{
		F323 = false;
	}
	else
	{
		if (S2_2910 == 2)
		{
			if (f_grl1 == false || f_grl2 == false)
			{
				F323 = false;
			}
		}
		else
		{

		}
	}




























}
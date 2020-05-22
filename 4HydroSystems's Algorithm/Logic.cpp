#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
void logic()
{
//					Wpgat resolving
	Wpgat_delta = Qngat - Qpst;
	Wpgat = Wpgat + Wpgat_delta;

	if (KKGS3 = 1)
	{
		if (Pgat >= 262)
		{
			if (Wpgat <= -600)
			{
				Wpgat = (-600);
			}
		}
		else
		{
			if (Wpgat >= 2.23)
			{
				Wpgat = 2.23;
			}
			else
			{
				if (Wpgat <= -600)
				{
					Wpgat = (-600);
				}
			}
		}
	}
	else
	{
		if (Wpgat >= 2.357)
		{
			Wpgat = 2.357;
		}
		else
		{
			if (Wpgat <= -600)
			{
				Wpgat = (-600);
			}
		}
	}
	

	//					Pgat_r resolving
	Pgat_r = ((P0gat * Wogat) / (Wogat - Wpgat));

	//					Pgat resolving

	Pgat = (Pgat + ((Pgat_r - Pgat) * Kgat));

	////////////////////////////////Psurgs  && Ptnugs resolving
	//////////////////////////////// 1st




		


	























}
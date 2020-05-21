#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
void logic()
{
	//				PTNUGS1 , Qtnu_gs1, Qntnu_gs1
	if (otkaz_gs1)
	{
		PNTNUGS1 = false;
		Qtnu_gs1 = false;
		Qntnu_gs1 = false;
	}
	else
	{
		if (PTNUGS1 == true)
		{
			PNTNUGS1 = false;
			Qtnu_gs1 = false;
			Qntnu_gs1 = false;
		}
		else
		{
			if (Pv_vsu >= 1.5)
			{
				PNTNUGS1 = true;
				double amount_for_presure(double Pgs);
			}
		}
	}
	
	





		


	























}
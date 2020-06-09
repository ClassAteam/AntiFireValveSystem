#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "3rdHydroSystemHeader.h"
void logic()
{
	//				PTNUGS1 , Qtnu_gs1, Qntnu_gs1 toggle
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
				Qtnu_gs1 = amount_for_presure_vsu(Pgs1);
				Qntnu_gs1 = (amount_for_presure_gsi(Pgs1)) * (amount_for_presure_vsu(Pv_vsu));
			}
		}
	}

	//				PTNUGS2 , Qtnu_gs2, Qntnu_gs2 toggle
	if (otkaz_gs2)
	{
		PNTNUGS2 = false;
		Qtnu_gs2 = false;
		Qntnu_gs2 = false;
	}
	else
	{
		if (PTNUGS2 == true)
		{
			PNTNUGS2 = false;
			Qtnu_gs2 = false;
			Qntnu_gs2 = false;
		}
		else
		{
			if (Pv_vsu >= 1.5)
			{
				PNTNUGS2 = true;
				Qtnu_gs2 = amount_for_presure_vsu(Pgs2);
				Qntnu_gs2 = (amount_for_presure_gsi(Pgs2)) * (amount_for_presure_vsu(Pv_vsu));
			}
		}
	}
	
	//				PTNUGS3 , Qtnu_gs3, Qntnu_gs3 toggle
	if (otkaz_gs3)
	{
		PNTNUGS3 = false;
		Qtnu_gs3 = false;
		Qntnu_gs3 = false;
	}
	else
	{
		if (PTNUGS3 == true)
		{
			PNTNUGS3 = false;
			Qtnu_gs3 = false;
			Qntnu_gs3 = false;
		}
		else
		{
			if (Pv_vsu >= 1.5)
			{
				PNTNUGS3 = true;
				Qtnu_gs3 = amount_for_presure_vsu(Pgs3);
				Qntnu_gs3 = (amount_for_presure_gsi(Pgs3)) * (amount_for_presure_vsu(Pv_vsu));
			}
		}
	}
	//				PTNUGS4 , Qtnu_gs4, Qntnu_gs4 toggle
	if (otkaz_gs4)
	{
		PNTNUGS4 = false;
		Qtnu_gs4 = false;
		Qntnu_gs4 = false;
	}
	else
	{
		if (PTNUGS4 == true)
		{
			PNTNUGS4 = false;
			Qtnu_gs4 = false;
			Qntnu_gs4 = false;
		}
		else
		{
			if (Pv_vsu >= 1.5)
			{
				PNTNUGS4 = true;
				Qtnu_gs4 = amount_for_presure_vsu(Pgs4);
				Qntnu_gs4 = (amount_for_presure_gsi(Pgs4)) * (amount_for_presure_vsu(Pv_vsu));
			}
		}
	}
		
	//				Qngs resolving

	Qngs1 = Qngn1gs1 + Qngn2gs1 + Qntnu_gs1;
	Qngs2 = Qngn1gs2 + Qngn2gs2 + Qntnu_gs2;
	Qngs3 = Qngn1gs3 + Qngn2gs3 + Qntnu_gs3;
	Qngs4 = Qngn1gs4 + Qngn2gs4 + Qntnu_gs4;

	// Opgs3, Wpgs3, Wpgs3_delta resolving

	if (PNN1gs3 || PNN2gs3 || PNTNUGS3 == true)
	{
		Qpgs3 = Qpz_sum + Qutgs3;
		Wpgs3_delta = Qngs3 - Qpgs3;
		Wpgs3 = Wpgs3 + Wpgs3_delta;

		if (KKGS3)
		{
			if (Wpgs3 >= 1.338)
			{
				Wpgs3 = 1.338;
			}
			else
			{
				if (Wpgs3 <= (-600))
				{
					Wpgs3 = (-600);
				}
			}
		}
		else
		{
			if (Wpgs3 >= 1.414)
			{
				Wpgs3 = 1.414;
			}
			else
			{
				if (Wpgs3 <= -600)
				{
					Wpgs3 = (-600);
				}
			}
		}
	}
	else
	{
		Wpgs3 = Wpgs3 + ((-600 - Wpgs3) / Kgs);
	}

	//				Pgs3_r && Pgs3 resolving
	Pgs3_r = (P0gs3 * W0gs3 / (W0gs3 - Wpgs3));
	Pgs3 = Pgs3 + ((Pgs3_r - Pgs3) * Kgs);

	//				Qn_gat resolving
	if (Pgs3 >= Pgat)
	{
		Qn_gat = Qngs3;
	}
	else
	{
		Qn_gat = false;
	}

	if (d_Xst_dt >= 0)
	{
		Qpst = d_Xst_dt * Cst;
	}
	else
	{
		Qpst = false;
	}
	


		


	























}
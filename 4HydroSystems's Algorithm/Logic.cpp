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

	if (KKGS3 == 1)
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

	//////////////////////////////// 1st
	////////////////////////////////Psurgs1  && Ptnugs1 resolving
	if (KSURGS1 = true)
	{
		Psurgs1 = Pgs1;
	}
	else
	{
		Psurgs1 = (Psurgs1 + ((0 - Psurgs1) * Ksur));
	}

	if (PNTNU_gs1 = true)
	{
		Ptnugs1 = Pgs1;
	}
	else
	{
		Ptnugs1 = (Ptnugs1 + ((0 - Ptnugs1) * Ktnu));
	}

	//////////////////////////////// 2nd
	////////////////////////////////Psurgs2  && Ptnugs2 resolving
	if (KSURGS2 = true)
	{
		Psurgs2 = Pgs2;
	}
	else
	{
		Psurgs2 = (Psurgs2 + ((0 - Psurgs2) * Ksur));
	}

	if (PNTNU_gs2 = true)
	{
		Ptnugs2 = Pgs2;
	}
	else
	{
		Ptnugs2 = (Ptnugs2 + ((0 - Ptnugs2) * Ktnu));
	}

	//////////////////////////////// 3rd
	////////////////////////////////Psurgs3  && Ptnugs3 resolving
	if (KSURGS3 = true)
	{
		Psurgs3 = Pgs3;
	}
	else
	{
		Psurgs3 = (Psurgs3 + ((0 - Psurgs3) * Ksur));
	}

	if (PNTNU_gs3 = true)
	{
		Ptnugs3 = Pgs3;
	}
	else
	{
		Ptnugs3 = (Ptnugs3 + ((0 - Ptnugs3) * Ktnu));
	}

	//////////////////////////////// 4th
	////////////////////////////////Psurgs4  && Ptnugs4 resolving
	if (KSURGS4 = true)
	{
		Psurgs4 = Pgs4;
	}
	else
	{
		Psurgs4 = (Psurgs4 + ((0 - Psurgs4) * Ksur));
	}

	if (PNTNU_gs4 = true)
	{
		Ptnugs4 = Pgs4;
	}
	else
	{
		Ptnugs4 = (Ptnugs4 + ((0 - Ptnugs4) * Ktnu));
	}

	//////////////////////////////// 1st
	////////////////////////////////Qpgs1, Wpgs1, Wpgs1_delta resolving
	if (PNN1_gs1 || PNN2_gs1 || PNTNU_gs1)
	{
		Qpgs1 = Qp1_sum + Qutgs1;
		Wpgs1_delta = Qngs1 - Qpgs1;
		Wpgs1 = Wpgs1 + Wpgs1_delta;
	}
	else
	{
		Wpgs1 = (Wpgs1 + ((-600 - Wpgs1) / Kgs));
	}
	//////////////////////////////// 2nd
	////////////////////////////////Qpgs2, Wpgs2, Wpgs2_delta resolving
	if (PNN1_gs2 || PNN2_gs2 || PNTNU_gs2)
	{
		Qpgs2 = Qp2_sum + Qutgs2;
		Wpgs2_delta = Qngs2 - Qpgs2;
		Wpgs2 = Wpgs2 + Wpgs2_delta;
	}
	else
	{
		Wpgs2 = (Wpgs2 + ((-600 - Wpgs2) / Kgs));
	}
	//////////////////////////////// 3nd
	////////////////////////////////Qpgs4, Wpgs4, Wpgs4_delta resolving
	if (PNN1_gs4 || PNN2_gs4 || PNTNU_gs4)
	{
		Qpgs4 = Qp4_sum + Qutgs4;
		Wpgs4_delta = Qngs4 - Qpgs4;
		Wpgs4 = Wpgs4 + Wpgs4_delta;
	}
	else
	{
		Wpgs4 = (Wpgs4 + ((-600 - Wpgs4) / Kgs));
	}

	//////////////////////////////// Wpgs1, Wpgs2, Wpgs3 setting
	//////////////////////////////// 1st Wpgs1
	if (KKGS1 == false)
	{
		if(Wpgs1 >= 1.414)
		{
			Wpgs1 = 1.414;
		}
		else
		{
			if(Wpgs1 <= -600);
			{
				Wpgs1 = -600;
			}
		}
	}
	else
	{
		if (Wpgs1 >= 1.338)
		{
			Wpgs1 = 1.338;
		}
		else
		{
			if (Wpgs1 <= -600);
			{
				Wpgs1 = -600;
			}
		}
	}
	//////////////////////////////// Wpgs1, Wpgs2, Wpgs3 setting
	//////////////////////////////// 2nd Wpgs2
	if (KKGS2 == false)
	{
		if (Wpgs2 >= 1.414)
		{
			Wpgs2 = 1.414;
		}
		else
		{
			if (Wpgs2 <= -600);
			{
				Wpgs2 = -600;
			}
		}
	}
	else
	{
		if (Wpgs2 >= 1.338)
		{
			Wpgs2 = 1.338;
		}
		else
		{
			if (Wpgs2 <= -600);
			{
				Wpgs2 = -600;
			}
		}
	}
	//////////////////////////////// Wpgs1, Wpgs2, Wpgs3 setting
	//////////////////////////////// 3rd Wpgs4
	if (KKGS4 == false)
	{
		if (Wpgs4 >= 1.414)
		{
			Wpgs4 = 1.414;
		}
		else
		{
			if (Wpgs4 <= -600);
			{
				Wpgs4 = -600;
			}
		}
	}
	else
	{
		if (Wpgs4 >= 1.338)
		{
			Wpgs4 = 1.338;
		}
		else
		{
			if (Wpgs4 <= -600);
			{
				Wpgs4 = -600;
			}
		}
	}
	//			Pgs1_r & Pgs1 resolving
	Pgs1_r = ((P0gs1 * Wogs1) / (Wogs1 - Wpgs1));
	Pgs1 = (Pgs1 + ((Pgs1_r - Pgs1) * Kgs));
	//			Pgs2_r & Pgs2 resolving
	Pgs2_r = ((P0gs2 * Wogs2) / (Wogs2 - Wpgs2));
	Pgs2 = (Pgs2 + ((Pgs2_r - Pgs2) * Kgs));
	//			Pgs4_r & Pgs4 resolving
	Pgs4_r = ((P0gs4 * Wogs4) / (Wogs4 - Wpgs4));
	Pgs4 = (Pgs4 + ((Pgs4_r - Pgs4) * Kgs));


		


	























}
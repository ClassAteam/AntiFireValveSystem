#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
void logic()
{
	///////////////////////////////////////Pgs1 cycle
	///////////////////////////////////////
	//					Kn1gs1 toggle
	if (Pgs1 >= 90.0)
	{
		Kn1gs1 = 1.0;
	}
	else
	{
		Kn1gs1 = 0.16;
	}
	//					Kn2gs1 toggle
	if (Pgs1 >= 90.0)
	{
		Kn2gs1 = 1.0;
	}
	else
	{
		Kn2gs1 = 0.16;
	}

	//					PNN1GS1, PNN2GS1 && l1gs1 toggle
	if (otkaz_gs1)
	{
		PNN1GS1 = false;
		l1gs1 = false;
	}
	else
		//				PRN1GS1 toggle, l1gs1 toggle
	{
		if (PRN1GS1 == true)
		{
			PNN1GS1 = false;
			l1gs1 = false;
		}
		else
		{
			if (Pvd1 >= 7.0)
			{
				PNN1GS1 = true;
				if (Pgs1 <= 200.0)
				{
					l1gs1 = (1 - (Pgs1 * 0.0015));
				}
				if (Pgs1 > 200.0)
				{
					Pgs1 - 200.0;
					l1gs1 = (0.7 - (Pgs1 * 0.0082352941176471));			//throw exceptions for 0 and -values
				}
			}
			else
			{
				PNN1GS1 = false;
				l1gs1 = false;
			}
		}
		//				PRN2GS1 toggle, l2gs1 toggle
		if (PRN2GS1 == true)
		{
			PNN2GS1 = false;
			l2gs1 = false;
		}
		else
		{
			if (Pvd2 >= 7.0)
			{
				PNN2GS1 = true;
				if (Pgs1 <= 200.0)
				{
					l1gs2 = (1 - (Pgs1 * 0.0015));
				}
				if (Pgs1 > 200.0)
				{
					Pgs1 - 200.0;
					l1gs2 = (0.7 - (Pgs1 * 0.0082352941176471));
				}
			}
			else
			{
				PNN2GS1 = false;
				l1gs2 = false;
			}
		}
	}

	//					Qngn1gs1 && Qngn2gs1

	Qngn1gs1 = Kn1gs1 * l1gs1 * Pvd1;
	Qngn2gs1 = Kn1gs1 * l2gs1 * Pvd2;

	///////////////////////////////////////Pgs2 cycle
	///////////////////////////////////////
//					Kn1gs1 toggle
	if (Pgs2 >= 90.0)
	{
		Kn1gs2 = 1.0;
	}
	else
	{
		Kn1gs2 = 0.16;
	}
	//					Kn2gs1 toggle
	if (Pgs2 >= 90.0)
	{
		Kn2gs2 = 1.0;
	}
	else
	{
		Kn2gs2 = 0.16;
	}

	//					PNN1GS1, PNN2GS1 && l1gs1 toggle
	if (otkaz_gs2)
	{
		PNN1GS2 = false;
		l1gs2 = false;
	}
	else
		//				PRN1GS1 toggle, l1gs1 toggle
	{
		if (PRN1GS2 == true)
		{
			PNN1GS2 = false;
			l1gs2 = false;
		}
		else
		{
			if (Pvd2 >= 7.0)
			{
				PNN1GS2 = true;
				if (Pgs2 <= 200.0)
				{
					l1gs2 = (1 - (Pgs2 * 0.0015));
				}
				if (Pgs2 > 200.0)
				{
					Pgs2 - 200.0;
					l1gs2 = (0.7 - (Pgs2 * 0.0082352941176471));
				}
			}
			else
			{
				PNN1GS2 = false;
				l1gs2 = false;
			}
		}
		//				PRN2GS1 toggle, l2gs1 toggle
		if (PRN2GS2 == true)
		{
			PNN2GS2 = false;
			l2gs2 = false;
		}
		else
		{
			if (Pvd2 >= 7.0)
			{
				PNN2GS2 = true;
				if (Pgs2 <= 200.0)
				{
					l2gs2 = (1 - (Pgs1 * 0.0015));
				}
				if (Pgs2 > 200.0)
				{
					Pgs2 - 200.0;
					l2gs2 = (0.7 - (Pgs1 * 0.0082352941176471));
				}
			}
			else
			{
				PNN2GS2 = false;
				l2gs2 = false;
			}
		}
	}

	//					Qngn1gs1 && Qngn2gs1

	Qngn1gs2 = Kn1gs2 * l1gs2 * Pvd2;
	Qngn2gs2 = Kn2gs2 * l2gs2 * Pvd1;

	///////////////////////////////////////Pgs3 cycle
	///////////////////////////////////////
//					Kn1gs1 toggle
	if (Pgs3 >= 90.0)
	{
		Kn1gs3 = 1.0;
	}
	else
	{
		Kn1gs3 = 0.16;
	}
	//					Kn2gs1 toggle
	if (Pgs3 >= 90.0)
	{
		Kn2gs3 = 1.0;
	}
	else
	{
		Kn2gs3 = 0.16;
	}

	//					PNN1GS1, PNN2GS1 && l1gs1 toggle
	if (otkaz_gs3)
	{
		PNN1GS3 = false;
		l1gs3 = false;
	}
	else
		//				PRN1GS1 toggle, l1gs1 toggle
	{
		if (PRN1GS3 == true)
		{
			PNN1GS3 = false;
			l1gs3 = false;
		}
		else
		{
			if (Pvd3 >= 7.0)
			{
				PNN1GS3 = true;
				if (Pgs3 <= 200.0)
				{
					l1gs3 = (1 - (Pgs2 * 0.0015));
				}
				if (Pgs3 > 200.0)
				{
					Pgs3 - 200.0;
					l1gs3 = (0.7 - (Pgs2 * 0.0082352941176471));
				}
			}
			else
			{
				PNN1GS3 = false;
				l1gs3 = false;
			}
		}
		//				PRN2GS1 toggle, l2gs1 toggle
		if (PRN2GS3 == true)
		{
			PNN2GS3 = false;
			l2gs3 = false;
		}
		else
		{
			if (Pvd4 >= 7.0)
			{
				PNN2GS3 = true;
				if (Pgs3 <= 200.0)
				{
					l2gs3 = (1 - (Pgs1 * 0.0015));
				}
				if (Pgs3 > 200.0)
				{
					Pgs3 - 200.0;
					l2gs3 = (0.7 - (Pgs1 * 0.0082352941176471));
				}
			}
			else
			{
				PNN2GS3 = false;
				l2gs3 = false;
			}
		}
	}

	//					Qngn1gs1 && Qngn2gs1 toggle

	Qngn1gs3 = Kn1gs3 * l1gs3 * Pvd3;
	Qngn2gs3 = Kn2gs2 * l2gs3 * Pvd4;

	///////////////////////////////////////Pgs4 cycle
///////////////////////////////////////
//					Kn1gs4 toggle
	if (Pgs3 >= 90.0)
	{
		Kn1gs4 = 1.0;
	}
	else
	{
		Kn1gs4 = 0.16;
	}
	//					Kn2gs4 toggle
	if (Pgs3 >= 90.0)
	{
		Kn2gs4 = 1.0;
	}
	else
	{
		Kn2gs4 = 0.16;
	}

	//					PNN1GS4, PNN2GS4 && l1gs4 toggle
	if (otkaz_gs4)
	{
		PNN1GS4 = false;
		l1gs4 = false;
	}
	else
		//				PRN1GS4 toggle, l1gs4 toggle
	{
		if (PRN1GS4 == true)
		{
			PNN1GS4 = false;
			l1gs4 = false;
		}
		else
		{
			if (Pvd4 >= 7.0)
			{
				PNN1GS4 = true;
				if (Pgs4 <= 200.0)
				{
					l1gs4 = (1 - (Pgs2 * 0.0015));
				}
				if (Pgs4 > 200.0)
				{
					Pgs4 - 200.0;
					l1gs4 = (0.7 - (Pgs2 * 0.0082352941176471));
				}
			}
			else
			{
				PNN1GS4 = false;
				l1gs4 = false;
			}
		}
		//				PRN2GS4 toggle, l2gs4 toggle
		if (PRN2GS4 == true)
		{
			PNN2GS4 = false;
			l2gs4 = false;
		}
		else
		{
			if (Pvd3 >= 7.0)
			{
				PNN2GS4 = true;
				if (Pgs4 <= 200.0)
				{
					l2gs4 = (1 - (Pgs1 * 0.0015));
				}
				if (Pgs4 > 200.0)
				{
					Pgs4 - 200.0;
					l2gs4 = (0.7 - (Pgs1 * 0.0082352941176471));
				}
			}
			else
			{
				PNN2GS4 = false;
				l2gs4 = false;
			}
		}
	}

	//					Qngn1gs1 && Qngn2gs1 toggle

	Qngn1gs4 = Kn1gs4 * l1gs4 * Pvd4;
	Qngn2gs4 = Kn2gs4 * l2gs4 * Pvd4;





		


	























}
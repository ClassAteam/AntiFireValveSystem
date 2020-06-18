#include "AntiFreezeSystemHeader.h"
#include "WindShieldsWarmup.h"

int WindShieldsLogic()
{
	//K1_3040 toggle
	K1_3040 = false;

	if (Ush1l >= 18.0 && S2_3040 == 2)
	{
		if (PRD1dv == PRD4dv == F32_3250)
		{
			K1_3040 = true;
		}
		if (K26_3230 == false && F11_3040 == true)
		{
			K1_3040 = true;
		}
	}
	if (Ushavlp >= 106.0 && K1_3040 == true)
	{
		POLST = true;
	}
	else
	{
		POLST = false;
	}
	//K2_3040 toggle	
	K2_3040 = false;
	if (Usho1p >= 18.0 && S4_3040 == 2)
	{
		if (PRD1dv == PRD2dv == F42_3250 == true)
		{
			K2_3040 = true;
		}
		if (K24_3230 == false && F12_3040 == true)
		{
			K2_3040 = true;
		}
	}
	if (Ushg3 >= 106.0 && K2_3040 == true)
	{
		POLOBST = true;
	}
	else
	{
		POLOBST = false;
	}
	//K3_3040 toggle	
	K2_3040 = false;
	if (Usho2p >= 18.0 && S6_3040 == 2)
	{
		if (PRD2dv == PRD3dv == F42_3250 == true)
		{
			K3_3040 = true;
		}
		if (K24_3230 == false && F13_3040 == true)
		{
			K3_3040 = true;
		}
	}
	if (Ushg4 >= 106.0 && K3_3040 == true)
	{
		POPST = true;
	}
	else
	{
		POPST = false;
	}
	//F11_3040, F12_3040, F13_3040 toggle 
	F11_3040 = false;
	F12_3040 = false;
	F13_3040 = false;

	if (Usho1p >= 18.0 && S8_3040 == 2)
	{
		if (PRD1dv == PRD2dv == PRD3dv == PRD4dv == false)
		{
			switch (S7_3040)
			{
			case 1: F11_3040 = true;

			case 2: F12_3040 = true;

			case 3: F13_3040 = true;
			default:
				break;
			}
			obogrev_stekol = true;
		}
	// F11_3040, F12_3040, F13_3040 toggle with matching K'es
	// and switch positions
	//1
		if (S7_3040 == 2)
		{
			if (K1_3040 == true)
			{
			F11_3040 = true;
			}
			else
			{
				obogrev_stekol = true;
			}
		}
	//2
		if (S7_3040 == 3)
		{
			if (K2_3040 == true)
			{
			F12_3040 = true;
			}
			else
			{
				obogrev_stekol = true;
			}
		}
	//3
		if (S7_3040 == 4)
		{
			if (K3_3040 == true)
			{
			F13_3040 = true;
			}
			else
			{
				obogrev_stekol = true;
			}
		}
	}
	else
	{
		obogrev_stekol = false;
	}
	
}

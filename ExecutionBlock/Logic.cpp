#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
void logic()
{
	//				   F91 toggle
	if (Ush1dpl >= 16.0)
	{
		if (AZSF9 == true)
		{
			F91 = true;
		}
		else
		{
			F91 = false;
		}
	}
	else
	{
		F91 = false;
	}
	//				   F101 toggle
	if (Ush1dpp >= 16.0)
	{
		if (AZSF10 == true)
		{
			F101 = true;
		}
		else
		{
			F101 = false;
		}
	}
	//					F181 toggle
	if (Ush1dpl >= 16.0)
	{
		if (AZSF18 == true)
		{
			F181 = true;
		}
		else
		{
			F181 = false;
		}
	}
	//					F111 toggle
	if (Ush2dpl >= 16.0)
	{
		if (AZSF11 == true)
		{
			F111 = true;
		}
		else
		{
			F111 = false;
		}
	}
	//					F121 toggle
	if (Ush2dpl >= 16.0)
	{
		if (AZSF12 == true)
		{
			F121 = true;
		}
		else
		{
			F121 = false;
		}
	}
	//					F92 toggle
	if (F91 == true)
	{
		if (F101 == true)
		{
			F92 = false;
		}
		if (F181 == true)
		{
			F92 = false;
		}
	}
	else
	{
		F92 = true;
	}
	//					K1 toggle
	if (F92 == true && S1 == 1)
	{
		K1 = true;
	}
	else
	{
		K1 = false;
	}
	//					K3 toggle
	if (F92 == true && S1 == 2)
	{
		K3 = true;
	}
	else
	{
		K3 = false;
	}
	//					K6 toggle
	if (F92 == true && S1 == 3)
	{
		K6 = true;
	}
	else
	{
		K6 = false;
	}
	//					K9 toggle
	if (F92 == true && S1 == 4)
	{
		K9 = true;
	}
	else
	{
		K9 = false;
	}
	//					K12 toggle
	if (F92 == true && S1 == 5)
	{
		K12 = true;
	}
	else
	{
		K12 = false;
	}
//						F911 toggle
	if (F92 == true && S2 == 1)
	{
		F911 = true;
	}
	else
	{
		F911 = false;
	}
	//					F912 toggle
	if (F92 == true && S2 == 2)
	{
		F912 = true;
	}
	else
	{
		F912 = false;
	}
	//					F913 toggle
	if (F92 == true && S2 == 3)
	{
		F913 = true;
	}
	else
	{
		F913 = false;
	}
	//					F914 toggle
	if (F92 == true && S2 == 4)
	{
		F914 = true;
	}
	else
	{
		F914 = false;
	}
	//					F915 toggle
	if (F92 == true && S2 == 5)
	{
		F915 = true;
	}
	else
	{
		F915 = false;
	}
	//					F916 toggle
	if (F92 == true && S2 == 6)
	{
		F916 = true;
	}
	else
	{
		F916 = false;
	}
	//					F917 toggle
	if (F92 == true && S2 == 7)
	{
		F913 = true;
	}
	else
	{
		F913 = false;
	}

	//					PPBI toggle
	if (F82 == true)
	{
		if (F45 == true || P2OBLOP == true || PAPDvh6 == true)
		{
			PPBI = true;
		}
		else
		{
			PPBI = false;
		}
	}
	else
	{
		PPBI = false;
	}

	//					K2 toggle
	if (PPBI == true)
	{
		if (K1 == true)
		{
			if (F911 == true)
			{
				K2 = true;
			}
			else
			{
				if (F912 == true)
				{
					K2 = true;
				}
				else
				{
					if (F913 == true)
					{
						K2 = true;
					}
					else
					{
						if (F917 == true)
						{
							K2 = true;
						}
						else
						{
							if (pozhar_vsu == true)
							{
								K2 = true;
							}
							else
							{
								K2 = false;
							}
						}
					}
				}
			}
		}
		else
		{
			if (pozhar_vsu == true)
			{
				K2 = true;
			}
			else
			{
				K2 = false;
			}
		}
	}
	else
	{
		K2 = false;
	}
	//						K49, K42, K67 toggle
	if (F25 == true)
	{
		if (F121 == true)
	}
}
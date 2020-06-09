#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "ExecutionBlockHeader.h"
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
	//						K42, K49toggle
	if (F25 || F35 || F45 || F55 || F65 == true)
	{
		if (F121 == true)
		{
			if (S13 == 1)			//!!! non-defined switch, mb need enum type
			{
				K49 = true;
			}
			else
			{
				if (S14 == 1)
				{
					K49 = true;
				}
				else
				{
					K49 = false;
				}
			}
		}
		else
		{
			K49 = false;
		}
	}
	else
	{
		K49 = false;
		K42 = false;
	}
	//					K67 toggle
	if (F101 == true)
	{
		if (S15 == 1)			//!!! the same here
		{
			K67 = true;
		}
		else
		{
			K67 = false;
		}
	}
	else
	{
		K67 = false;
	}
	//							K31toggle
	if (F25 == true)
	{
		if (K67 != true)
		{
			if (F135 == true)
			{
				if (failure_automatic == true)
				{
					K31 = false;
				}
				else
				{
					K31 = true;
				}
			}
			else
			{
				K31 = false;
			}
		}
		else
		{
			K31 = true;
		}
	}
	else
	{
		K31 = false;
	}
	//							K32toggle
	if (F35 == true)
	{
		if (K67 != true)
		{
			if (F145 == true)
			{
				if (failure_automatic == true)
				{
					K32 = false;
				}
				else
				{
					K32 = true;
				}
			}
			else
			{
				K32 = false;
			}
		}
		else
		{
			K32 = true;
		}
	}
	else
	{
		K32 = false;
	}
	//							K33toggle
	if (F45 == true)
	{
		if (K67 != true)
		{
				if (failure_automatic == true)
				{
					K33 = false;
				}
				else
				{
					K33 = true;
				}
		}
		else
		{
			K33 = true;
		}
	}
	else
	{
		K33 = false;
	}
	//							K34toggle
	if (F55 == true)
	{
		if (K67 != true)
		{
			if (F155 == true)
			{
				if (failure_automatic == true)
				{
					K34 = false;
				}
				else
				{
					K34 = true;
				}
			}
			else
			{
				K34 = false;
			}
		}
		else
		{
			K34 = true;
		}
	}
	else
	{
		K34 = false;
	}
	//							K35toggle
	if (F65 == true)
	{
		if (K67 != true)
		{
			if (F165 == true)
			{
				if (failure_automatic == true)
				{
					K35 = false;
				}
				else
				{
					K35 = true;
				}
			}
			else
			{
				K35 = false;
			}
		}
		else
		{
			K35 = true;
		}
	}
	else
	{
		K35 = false;
	}
	//							K50 toggle
	if (F82 == true)
	{
		if (K3 == true)
		{
			if (F911 == true)
			{
				K50 = true;
			}
			else
			{
				if (F912 == true)
				{
					K50 = true;
				}
				else
				{
					if (F917 == true)
					{
						K50 = true;
					}
					else
					{
						if (pozhar_1dv == true)
						{
							K50 = true;
						}
						else
						{
							K50 = false;
						}
					}
				}
			}
		}
		else
		{
			if (pozhar_1dv == true)
			{
				K50 = true;
			}
			else
			{
				K50 = false;
			}
		}
	}
	else
	{
		K50 = false;
	}
	//							K51 toggle
	if (F72 != true)
	{
		K51 = false;
	}
	else
	{
		if (K3 == true)
		{
			if (pozhar_1dv == true)
			{
				K51 = true;
			}
			else
			{
				if (peregrev_1dv == true)
				{
					K51 = true;
				}
				else
				{
					K51 = false;
				}
			}
		}
		else
		{
			if (F914 || F915 || F916 || F917 ||  pozhar_1dv || peregrev_1dv)
			{
				K51 = true;
			}
			else
			{
				K51 = false;
			}
		}
	}
	//							K53 toggle
	if (F82 == true)
	{
		if (K6 == true)
		{
			if (F911 == true)
			{
				K53 = true;
			}
			else
			{
				if (F912 == true)
				{
					K53 = true;
				}
				else
				{
					if (F917 == true)
					{
						K53 = true;
					}
					else
					{
						if (pozhar_2dv == true)
						{
							K53 = true;
						}
						else
						{
							K53 = false;
						}
					}
				}
			}
		}
		else
		{
			if (pozhar_1dv == true)
			{
				K50 = true;
			}
			else
			{
				K50 = false;
			}
		}
	}
	else
	{
		K50 = false;
	}
	//							K54 toggle
	if (F72 != true)
	{
		K54 = false;
	}
	else
	{
		if (K6 == true)
		{
			if (pozhar_2dv == true)
			{
				K54 = true;
			}
			else
			{
				if (peregrev_2dv == true)
				{
					K54 = true;
				}
				else
				{
					K54 = false;
				}
			}
		}
		else
		{
			if (F914 || F915 || F916 || F917 || pozhar_2dv || peregrev_2dv)
			{
				K54 = true;
			}
			else
			{
				K54 = false;
			}
		}
	}
	//							K57 toggle
	if (F72 == true)
	{
		if (K9 == true)
		{
			if (F911 == true)
			{
				K57 = true;
			}
			else
			{
				if (F912 == true)
				{
					K57 = true;
				}
				else
				{
					if (F917 == true)
					{
						K57 = true;
					}
					else
					{
						if (pozhar_3dv == true)
						{
							K57 = true;
						}
						else
						{
							K57 = false;
						}
					}
				}
			}
		}
		else
		{
			if (pozhar_3dv == true)
			{
				K57 = true;
			}
			else
			{
				K57 = false;
			}
		}
	}
	else
	{
		K50 = false;
	}
	//							K58 toggle
	if (F72 != true)
	{
		K58 = false;
	}
	else
	{
		if (K6 == true)
		{
			if (pozhar_2dv == true)
			{
				K58 = true;
			}
			else
			{
				if (peregrev_2dv == true)
				{
					K58 = true;
				}
				else
				{
					K58 = false;
				}
			}
		}
		else
		{
			if (F914 || F915 || F916 || F917 || pozhar_3dv || peregrev_3dv)
			{
				K58 = true;
			}
			else
			{
				K58 = false;
			}
		}
	}
	//							K60 toggle
	if (F72 == true)
	{
		if (K12 == true)
		{
			if (F911 == true)
			{
				K60 = true;
			}
			else
			{
				if (F912 == true)
				{
					K60 = true;
				}
				else
				{
					if (F917 == true)
					{
						K60 = true;
					}
					else
					{
						if (pozhar_4dv == true)
						{
							K60 = true;
						}
						else
						{
							K60 = false;
						}
					}
				}
			}
		}
		else
		{
			if (pozhar_4dv == true)
			{
				K60 = true;
			}
			else
			{
				K60 = false;
			}
		}
	}
	else
	{
		K60 = false;
	}
	//							K61 toggle
	if (F82 != true)
	{
		K61 = false;
	}
	else
	{
		if (K6 == true)
		{
			if (pozhar_4dv == true)
			{
				K61 = true;
			}
			else
			{
				if (peregrev_4dv == true)
				{
					K61 = true;
				}
				else
				{
					K61 = false;
				}
			}
		}
		else
		{
			if (F914 || F915 || F916 || F917 || pozhar_4dv || peregrev_4dv)
			{
				K61 = true;
			}
			else
			{
				K61 = false;
			}
		}
	}
	//					PW toggles
	if (PNU = true)
	{
		PW1och_l = true;
		PW1och_o = true;
		PW2och = true;
		PW3och = true;
	}

	if (K31  || K32 || K34 || K35 || K33 == true)
	{
			if (F101 == true)
			{
				PW1och_l = false;
				if (F181 == true)
				{
					PW1och_o = false;
				}
			}
	}
	if (F111 == true && K42 == true)
	{
		PW2och = false;
	}
	else
	{
		if (F121 == true && K49 == true)
		{
			PW3och = false;
		}
	}
}
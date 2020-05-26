#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
#include <math.h>

void logic()
{
	////////////////////////K1, K2, K10, K11 toggle
	if (PRD1dv77 == true)
	{
		K1_2935 = true;
	}
	else
	{
		K1_2935 = false;
	}

	if (PRD2dv77 == true)
	{
		K2_2935 = true;
	}
	else
	{
		K2_2935 = false;
	}

	if (PRD3dv77 == true)
	{
		K10_2935 = true;
	}
	else
	{
		K10_2935 = false;
	}

	if (PRD4dv77 == true)
	{
		K11_2935 = true;
	}
	else
	{
		K11_2935 = false;
	}

	////////////////////////K4, K7, K9, K13 toggle
	///////////////////////1st
	if (F17_2805 && F122_2845)
	{
		K4_2935 = true;
	}
	else
	{
		K4_2935 = false;
	}

	////////////////////////K4, K7, K9, K13 toggle
	///////////////////////2nd
	if (F77_2805 && F427_2845)
	{
		K7_2935 = true;
	}
	else
	{
		K7_2935 = false;
	}
	////////////////////////K4, K7, K9, K13 toggle
	///////////////////////3rd
	if (F97_2805 && F122_2845)
	{
		K9_2935 = true;
	}
	else
	{
		K9_2935 = false;
	}
	////////////////////////K4, K7, K9, K13 toggle
	///////////////////////4th
	if (F117_2805 && F124_2845)
	{
		K13_2935 = true;
	}
	else
	{
		K13_2935 = false;
	}

	////////////////////////K3, PR6T, PR8T, PR12t toggle
	///////////////////////1st
	if (Ush2l && K4_2935)
	{
		K3_2935 = true;
	}
	else
	{
		K3_2935 = false;
	}

	////////////////////////K3, PR6T, PR8T, PR12t toggle
	///////////////////////2nd
	if (Ush2l && K7_2935)
	{
		PR6T = true;
	}
	else
	{
		PR6T = false;
	}

	////////////////////////K3, PR6T, PR8T, PR12t toggle
	///////////////////////3rd
	if (Ush2l && K9_2935)
	{
		PR8T = true;
	}
	else
	{
		PR8T = false;
	}

	////////////////////////K3, PR6T, PR8T, PR12t toggle
	///////////////////////3rd
	if (Ush2l && K13_2935)
	{
		PR12T = true;
	}
	else
	{
		PR12T = false;
	}

	//					K5 toggle

	if (Ush2l >= 18.0)
	{
		if (P2OBLOP == false)
		{
			if (K1_2935 == true && K4_2935 == false || K2_2935 == true && K7_2935 == false || K10_2935 == true && K9_2935 == false 
				|| K11_2935 == true && K13_2935 == false || K5_2935 == true)
			{
				K5_2935 = true;
			}
			else
			{
				K5_2935 = false;
			}
		}
		else
		{
			if (K5_2935 == false)
			{
				K5_2935 = false;
			}
		}
	}
	else
	{
		K5_2935 = false;
	}

	//					BSS811X1N toggle
	if (Ush2l >= 18.0)
	{
		if (K6_2935 == true)
		{
			if (K8_2935 == true)
			{
				BSS811X1N = false;
			}
			else
			{
				if (K12_2935 == true)
				{
					BSS811X1N = false;
				}
				else
				{
					if (K10_2935 == true)
					{
						BSS811X1N = true;
					}
					else
					{
						if (K2_2935 == true)
						{
							BSS811X1N = true;
						}
						else
						{
							BSS811X1N = false;
						}
					}
				}
			}
		}
		else
		{
			if (K3_2935 == true)
			{
				if (K8_2935 == true)
				{
					BSS811X1N = false;
				}
				else
				{
					if (K12_2935 == true)
					{
						BSS811X1N = false;
					}
					else
					{
						if (K10_2935 == true)
						{
							BSS811X1N = true;
						}
						else
						{
							if (K2_2935 == true)
							{
								BSS811X1N = true;
							}
							else
							{
								BSS811X1N = false;
							}
						}
					}
				}
			}
			else
			{
				if (K1_2935 == true || K2_2935 == true)
				{
					BSS811X1N = true;
				}
				else
					if (K8_2935 == true)
					{
						BSS811X1N = false;
					}
					else
					{
						if (K12_2935 == true)
						{
							BSS811X1N = false;
						}
						else
						{
							if (K10_2935 == true)
							{
								BSS811X1N = true;
							}
							else
							{
								if (K2_2935 == true)
								{
									BSS811X1N = true;
								}
								else
								{
									BSS811X1N = false;
								}
							}
						}
					}
				
			}
		}
	}























}
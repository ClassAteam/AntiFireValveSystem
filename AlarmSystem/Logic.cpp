#include "Header.h"
void logic()
{
	///////////////////////////////1st engine check
	if (Ushal >= 18.0)
	{
		if (K50 || K51 || LzhSrabSigPrg1dv == true)
		{
			BSS811X1p = true;
		}
		else
			BSS811X1p = false;	
		if (K50 == true)
		{
			if (K51 == true)
			{
				BSS811X1n = true;
			}
			else BSS811X1n = false;
		}
	}
	if ((Ushap >= 18) && (F25 == true))
	{
		BSS811X1x = true;
	}
	else
		BSS811X1x = false;

	//////////////////////////////2nd engine check
	if (Ushal >= 18.0)
	{
		if (K50 || K51 || LzhSrabSigPrg1dv == true)
		{
			BSS811X1p = true;
		}
		else
			BSS811X1p = false;
		if (K50 == true)
		{
			if (K51 == true)
			{
				BSS811X1n = true;
			}
			else BSS811X1n = false;
		}
	}
	if ((Ushap >= 18) && (F25 == true))
	{
		BSS811X1x = true;
	}
	else
		BSS811X1x = false;
	
}
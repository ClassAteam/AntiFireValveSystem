#include <iostream>
#include <string>
#include <fstream>
#include <vector>
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
		if ((Ushal >= 18.0) || K50 || K51 == true)
		{
			BSS811X1n = true;
		}
		else BSS811X1n = false;
	}
	if ((Ushap >= 18) || K50 || K51 == true)
	{
		PSA10_1 = true;
	}
	else
		PSA10_1 = false;

	if (Ushal >= 18 && F25 == true)
	{
		BSS811X1x = true;
	}
	else BSS811X1x = false;
	//////////////////////////////2nd engine check
	if (Ushal >= 18.0)
	{
		if (K53 || K54 || LzhSrabSigPrg2dv == true)
		{
			BSS811X1t = true;
		}
		else
			BSS811X1t = false;
		if ((Ushal >= 18.0) || K53 || K54 == true)
		{
			BSS811X1r = true;
		}
		else BSS811X1r = false;
	}
	if ((Ushap >= 18) || K53 || K54 == true)
	{
		PSA10_2 = true;
	}
	else
		PSA10_2 = false;

	if (Ushap >= 18 && F35 == true)
	{
		BSS811X1z = true;
	}
	else BSS811X1z = false;
	//////////////////////////////3rd engine check
	if (Ushap >= 18.0)
	{
		if (K57 || K58 || LzhSrabSigPrg3dv == true)
		{
			BSS812X5j = true;
		}
		else
			BSS812X5j = false;

		if ((Ushap >= 18.0) || K57 || K58 == true)
		{
			BSS812X5h = true;
		}
		else BSS812X5h = false;
	}
	if ((Ushap >= 18) || K57 || K58 == true)
	{
		PSA19_1 = true;
	}
	else
		PSA19_1 = false;

	if (Ushal >= 18 && F55 == true)
	{
		BSS913X3E = true;
	}
	else BSS913X3E = false;
	//////////////////////////////4th engine check
	if (Ushap >= 18.0)
	{
		if (K60 || K61 || LzhSrabSigPrg4dv == true)
		{
			BSS812X5p = true;
		}
		else
			BSS812X5p = false;

		if ((Ushap >= 18.0) || K60 || K61 == true)
		{
			BSS812X5n = true;
		}
		else BSS812X5n = false;
	}
	if ((Ushal >= 18) || K60 || K61 == true)
	{
		PSA19_2 = true;
	}
	else
		PSA19_2 = false;

	if (Ushal >= 18 && F65 == true)
	{
		BSS913X3G = true;
	}
	else BSS913X3G = false;
	///////////////////////////////////BSS811X1B BSS838X7G toggle;
	if (F72 == true && S10 == true)
		PKO = true;
	else PKO = false;

	if (Ushal >= 18.0 && K24 == 1)
	{
		BSS811X1B = true;
		BSS838X7G = true;
	}
	else
	{
		BSS811X1B = false;
		BSS838X7G = false;
	}

	if ((Ushal >= 18) && F45 == true)
	{
		BSS811X1VV = true;
		BSS838X7C = true;
	}
	else
	{

		BSS811X1VV = false;
		BSS838X7C = false;
	}
	/////////////////////////////////////BSS913X3J toggle
	if (F91 == true)
	{
		if (PW1och_o == false)
		{
			BSS913X3J = true;
		}
		else
		{
			if (PKO == true)
			{
				if (F101 == true)
				{
					BSS913X3J = true;
				}
			}
			else
			{
				if (PO1och == true);
				BSS913X3J = true;
				BSS913X3J = false;
			}
		}
	}BSS913X3J = false;
	/////////////////////////////////////
	/*if (F91 == true)
	{
		if (PW1och_L == false)            !!! Specification issue
		{
			BSS913X3J = true;
		}
		else
		{
			if (PKO == true)
			{
				if (F101 == true)
				{
					BSS913X3J = true;
				}
			}
			else
			{
				if (PO1och == true);
				BSS913X3J = true;
				BSS913X3J = false;
			}
		}
	}BSS913X3J = false;*/

	//////////////////////////BSS913X3L and BSS926X1h toggle
	if (F91 == true)
	{
		if (PW2och == false)
		{
			BSS913X3L = true;
			BSS926X1h = true;
		}
		if (PKO == true)
		{
			if (PF11 - 1 == true)
			{
				BSS913X3L = true;
				BSS926X1h = true;
			}
			else
			{
				BSS913X3L = false;
				BSS926X1h = false;
			}
		}
		else
		{
			BSS913X3L = false;
			BSS926X1h = false;
		}
	}
	else
		BSS913X3L = false;
	BSS926X1h = false;
	///////////////////////////////////BSS913X3N and BSS926X1j toggle;
	if ((PF9 - 1) == 1)
	{
		if (PW3och == false)
		{
			BSS913X3N = true;
			BSS926X1j = true;
		}
		else
		{
			if (PKO == true)
			{
				if (F11 == true)
				{
					BSS913X3N = true;
					BSS926X1j = true;
				}
				else
				{
					BSS913X3N = false;
					BSS926X1j = false;
				}
			}
			else
			{
				BSS913X3N = false;
				BSS926X1j = false;
			}
		}
	}
	else
	{
		BSS913X3N = false;
		BSS926X1j = false;
	}
	///////////////////////////////////// K80 toggle
	if (F72 == true && P2OBLOP == true)
	{
		K80 = true;
	}
	else
		K80 = false;
	//////////////////////////////////// PO1och toggle
	if (F91 == true && K80 == true)
	{
		if (F101 == F181 == true)
		{
			PO1och = false;
		}
		else
			PO1och = true;
	}
	PO1och = false;
	//////////////////////////////////// BSS811X1v toggle
	if (F91 == true)
	{
		if (F132 == true)
		{
			BSS811X1v = false;
		}
		else
		{
			BSS811X1v = true;
		}
	}
	else
	{
		BSS811X1v = false;
	}
}

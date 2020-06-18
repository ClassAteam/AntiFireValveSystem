#include "AntiFreezeSystemHeader.h"

int IcingLightsLogic()
{
	//PRSOL toggle
	if (Ush1dpl >= 18.0 && S1_3080 == 3 && M < 1.25 && otkaz_levogo_so121 && Ush1l >= 18.0)
	{
		PRSOL = true;
	}
	else
	{
		PRSOL = false;
	}
	//PRSOP toggle
	if (Ush2dpp >= 18.0 && S2_3080 == 3 && M < 1.25 && otkaz_pravogo_so121 && Ush2p >= 18.0)
	{
		PRSOL = true;
	}
	else
	{
		PRSOL = false;
	}

	//K2_3080 toggle by left channel
	if (PRSOL)
	{
		if (signal_obledenen && PSOBLL && otkaz_lozhn_srab_lev_so121)
		{
			K2_3080 = true;
		}
	}
	//K2_3080 toggle by right channel
	if (PRSOP)
	{
		if (signal_obledenen && PSOBLP && otkaz_lozhn_srab_prav_so121)
		{
			K2_3080 = true;
		}
	}

	//Block check left channel
	if (PRSOL)
	{
		if (S3_3080 || PBSO1)
		{
			PBSO1 = true;
			tso1 = tso1 + tc;
			if (tso1 >= 8.0)
			{
				PSOBLL = true;
			}
			if (tso1 >= 41.0)
			{
				PSOBLL = true;
			}
			if (tso1 >= 77.0)
			{
				BSS825X5KK = true;
			}
			else
			{
				BSS825X5KK = false;
			}
		}
		else
		{
			PBSO1 = tso1 = BSS825X5KK = false;
		}
	}
	else
	{
			PBSO1 = tso1 = BSS825X5KK = false;
	}
	//Block check right channel
	if (PRSOP)
	{
		if (S3_3080 || PBSO2)
		{
			PBSO2 = true;
			tso2 = tso2 + tc;
			if (tso2 >= 8.0)
			{
				PSOBLP = true;
			}
			if (tso2 >= 41.0)
			{
				PSOBLP = true;
			}
			if (tso2 >= 77.0)
			{
				BSS825X5MM = true;
			}
			else
			{
				BSS825X5MM = false;
			}
		}
		else
		{
			PBSO2 = tso2 = BSS825X5MM = false;
		}
	}
	else
	{
			PBSO2 = tso2 = BSS825X5MM = false;
	}

	//UKS1X212, UKS1X112 toggle
	UKS1X212 = false;
	UKS1X112 = false;
	if (K2_3080)
	{
		BSS824X1D = true;
		if (PRSOL)
		{
			UKS1X112 = true;
		}
		if (PRSOP)
		{
			UKS1X212 = true;
		}
	}
	else
	{
		BSS824X1D = false;
	}
}
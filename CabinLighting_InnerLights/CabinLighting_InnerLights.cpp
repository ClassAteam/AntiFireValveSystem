#include "CabinLighting_InnerLights.h"
int InnerLightsLogic()
{
	// A1

	if (Ush1l >= 18.0 && F1_3311 == true && otkaz_vstrosv_busto3_1_k1_lev)
	{
		PBUSTO3_1_1k = true;
	}
	else
	{
		PBUSTO3_1_1k = false;
	}

	// A2

	if (Ush2p >= 18.0 && F2_3311 == true && otkaz_vstrosv_busto3_1_k1_prav)
	{
		PBUSTO3_1_2k = true;
	}
	else
	{
		PBUSTO3_1_2k = false;
	}

	// A3

	if (Ush1dpl >= 18.0 && F3_3311 == true && otkaz_vstrosv_busto3_2_k1_lev)
	{
		PBUSTO3_2_1k = true;
	}
	else
	{
		PBUSTO3_2_1k = false;
	}

	// A4

	if (Ush2dpp >= 18.0 && F4_3311 == true && otkaz_vstrosv_busto3_2_k2_prav)
	{
		PBUSTO3_2_2k = true;
	}
	else
	{
		PBUSTO3_2_2k = false;
	}

	// B1

	if (PBUSTO3_1_1k)
	{
		UVOLSPD11 = USASL_to_alpha(alpha_ra_a5); //Just dummy
		PK11LSPDVO = true;
	}
	else
	{
		UVOLSPD11 =false; //Just dummy
		PK11LSPDVO = false;
	}

	// C1

	if (PBUSTO3_1_2k && Ush1l >= 18.0)
	{
		UVOSP12 = USASL_to_alpha(alpha_ra_a6);   //Dummy
		UVOLBL12 = USASL_to_alpha(alpha_ra_a7);   //Dummy
		PK12SPVO = true;
		PK12LBLVO = true;
	}

	else
	{
		UVOSP12 = false;   
		UVOLBL12 = false;
		PK12SPVO = false;
		PK12LBLVO = false;
	}

	// B2

	if (PBUSTO3_2_1k)
	{
		UVOLSPD21 = USASL_to_alpha(alpha_ra_a5); //Just dummy
		PK21LSPDVO = true;
	}
	else
	{
		UVOLSPD21 =false;
		PK21LSPDVO = false;
	}

	// C2

	if (PBUSTO3_2_2k && Ush1dpl >= 18.0)
	{
		UVOSP22 = USASL_to_alpha(alpha_ra_a6);   //Dummy
		UVOLBL22 = USASL_to_alpha(alpha_ra_a7);  //Dummy
		PK22SPVO = true;
		PK22LBLVO = true;
	}

	else
	{
		UVOSP22 = false;   
		UVOLBL22 = false;
		PK22SPVO = false;
		PK22LBLVO = false;
	}

	// D1

	if (PBUSTO3_1_1k)
	{
		UVOPPD11 = USASL_to_alpha(alpha_ra_a8);   //Dummy
		PK11PPDVO = true;
		UVOPBL11 = USASL_to_alpha(alpha_ra_a10);   //Dummy
		PK11PBLVO = true;
	}

	else
	{
		UVOPPD11 = false;   
		PK11PPDVO = false;
		UVOPBL11 = false;
		PK11PBLVO = false;
	}

	// D2

	if (PBUSTO3_2_1k)
	{
		UVOPPD21 = USASL_to_alpha(alpha_ra_a8);   //Dummy
		PK21PPDVO = true;
		UVOPBL21 = USASL_to_alpha(alpha_ra_a10);   //Dummy
		PK21PBLVO = true;
	}

	else
	{
		UVOPPD21 = false;   
		PK21PPDVO = false;
		UVOPBL21 = false;
		PK21PBLVO = false;
	}



	//////////////////////////////////////////////////////////////////////////////
	// A5

	if (Ush1l >= 18.0 && F5_3311 == true && otkaz_vstrosv_busto3_1_k1_shto)
	{
		PBUSTO3_3_1k = true;
	}
	else
	{
		PBUSTO3_3_1k = false;
	}

	// A6

	if (Ush2p >= 18.0 && F6_3311 == true && otkaz_vstrosv_busto3_1_k2_shto)
	{
		PBUSTO3_3_2k = true;
	}
	else
	{
		PBUSTO3_3_2k = false;
	}

	// A7

	if (Ush1dpl >= 18.0 && F7_3311 == true && otkaz_vstrosv_busto3_1_k1_shtn)
	{
		PBUSTO3_4_1k = true;
	}
	else
	{
		PBUSTO3_4_1k = false;
	}

	// A8

	if (Ush2dpp >= 18.0 && F8_3311 == true && otkaz_vstrosv_busto3_1_k2_shtn)
	{
		PBUSTO3_4_2k = true;
	}
	else
	{
		PBUSTO3_4_2k = false;
	}

	// B2

	if (PBUSTO3_3_1k)
	{
		UVOLBSH1 = USASL_to_alpha(alpha_ra_a12); //Just dummy
		PK1PDSHOVO = true;
	}
	else
	{
		UVOLBSH1 = false; 
		PK1PDSHOVO = false;
	}

	// C3

	if (PBUSTO3_3_1k && Ush1l >= 18.0)
	{
		UVOLBSH1 = USASL_to_alpha(alpha_ra_a12);   //Dummy
		PK1LBSHVO = true;
	}

	else
	{
		UVOLBSH1 =false;
		PK1LBSHVO = false;
	}

	// B3

	if (PBUSTO3_4_1k)
	{
		UVOPDSHO2 = USASL_to_alpha(alpha_ra_a11); //Just dummy
		PK2PDSHOVO = true;
	}
	else
	{
		UVOPDSHO2 = false; 
		PK2PDSHOVO = false;
	}

	// B4

	if (PBUSTO3_3_2k)
	{
		UVOPDSHN1 = USASL_to_alpha(alpha_ra_a11); //Just dummy
		PK1PDSHNVO = true;
	}
	else
	{
		UVOPDSHN1 = false; 
		PK1PDSHNVO = false;
	}

	// C4

	if (PBUSTO3_4_1k && Ush1dpl >= 18.0)
	{
		UVOLBSH2 = USASL_to_alpha(alpha_ra_a12);   //Dummy
		PK2LBSHVO = true;
	}
	else
	{
		UVOLBSH2 = false;   //Dummy
		PK2LBSHVO = false;
	}

	// C5

	if (PBUSTO3_3_2k && Ush1l >= 18.0)
	{
		UVOPBSH1 = USASL_to_alpha(alpha_ra_a14);   //Dummy
		PK2PBSHVO = true;
	}
	else
	{
		UVOPBSH1 = false;
		PK2PBSHVO = false;
	}

	// B5

	if (PBUSTO3_4_2k)
	{
		UVOPDSHN1 = USASL_to_alpha(alpha_ra_a13); //Just dummy
		PK2PDSHNVO = true;
	}
	else
	{
		UVOPDSHN1 = false; 
		PK2PDSHNVO = false;
	}

	// C6

	if (PBUSTO3_4_2k && Ush1dpl >= 18.0)
	{
		UVOPBSH2 = USASL_to_alpha(alpha_ra_a14);   //Dummy
		PK2PBSHVO = true;
	}
	else
	{
		UVOPBSH2 = false;
		PK2PBSHVO = false;
	}
}
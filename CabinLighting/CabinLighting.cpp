#include "CabinLighting.h"
int CabinLightingLogic()
{
	// PBUSTO4 toggle
	//A1
	if (Ush1l >= 18.0 && F1_3310 == true && otkaz_zaliv_osvesh_lev_1 == true)
	{
		PBUSTO4_1_1k = true;
	}
	else
	{
		PBUSTO4_1_1k = true;
	}

	// PBUSTO4 toggle
	//A2
	if (Ush2p >= 18.0 && F2_3310 == true && otkaz_zaliv_osvesh_prav_1 == true)
	{
		PBUSTO4_1_2k = true;
	}
	else
	{
		PBUSTO4_1_2k = true;
	}

	// PBUSTO4 toggle
	//A3
	if (Ush1dpl >= 18.0 && F3_3310 == true && otkaz_zaliv_osvesh_lev_2 == true)
	{
		PBUSTO4_2_1k = true;
	}
	else
	{
		PBUSTO4_2_1k = true;
	}

	// PBUSTO4 toggle
	//A4
	if (Ush2dpp >= 18.0 && F4_3310 == true && otkaz_zaliv_osvesh_prav_2 == true)
	{
		PBUSTO4_2_2k = true;
	}
	else
	{
		PBUSTO4_2_2k = true;
	}

	// PK21PBLL30, PK11PBLL30 toggle  
	//B1
	if (Ush1l >= 18.0 && PBUSTO4_2_1k == true)
	{
		UZOPBLL1 = USASL_to_alpha(alpha_ra2a3);
		PK21PBLLZO = true;
	}
	else
	{
		UZOPBLL1 = false;
		PK21PBLLZO = false;
	}

	// PK21PBLL30, PK11PBLL30 toggle  
	//B2
	if (Ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
	{
		UZOPBLL1 = USASL_to_alpha(alpha_ra2a3);
		PK11PBLLZO = true;
	}
	else
	{
		UZOPBLL1 = false;
		PK11PBLLZO = false;
	}

	// PK12PBPL30, PK22PBPL30
	//C1
	if (PBUSTO4_1_2k == true)
	{
		UZOPBPL2 = USASL_to_alpha(alpha_ra2a7);
		PK12PBPLZO = true;
	}
	else
	{
		UZOPBPL2 = false;
		PK12PBPLZO = true;
	}

	//C2
	if (PBUSTO4_2_2k == true)
	{
		UZOPBPL2 = USASL_to_alpha(alpha_ra2a7);
		PK22PBPL30 = true;
	}
	else
	{
		UZOPBLL1 = false;
		PK22PBPL30 = false;
	}

	// PK1LSPD30, PK2LSPD30
	//D1
	if (Ush1dpl >= 18.0 && PBUSTO4_1_1k == true)
	{
		UZOLSPD1 = USASL_to_alpha(alpha_ra2a4);
		PK1LSPD30 = true;
	}
	else
	{
		UZOLSPD1 = false;
		PK1LSPD30 = false;
	}

	//D2
	if (Ush1l >= 18.0 && PBUSTO4_2_1k == true)
	{
		UZOLSPD2 = USASL_to_alpha(alpha_ra2a4);
		PK2LSPD30 = true;
	}
	else
	{
		UZOLSPD2 = false;
		PK2LSPD30 = false;
	}

	// PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
	//E1
	if (PBUSTO4_1_2k)
	{
		UZOPPD1 = USASL_to_alpha(alpha_ra2a6 );
		PK1PPDZO = true;
	}
	else
	{
		UZOPPD1 = false;
		PK1PPDZO = false;
	}

	// PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
	//E2
	if (PBUSTO4_2_2k)
	{
		UZOPPD2 = USASL_to_alpha(alpha_ra2a6 );
		PK2PPDZO = true;
	}
	else
	{
		UZOPPD2 = false;
		PK2PPDZO = false;
	}

	// PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
	//E3
	if (Ush1dpl)
	{
		UZOSPLS1 = USASL_to_alpha(alpha_ra2a6 );
		PK1SPLSZO = true;
	}
	else
	{
		UZOSPLS1 = false;
		PK1SPLSZO = false;
	}

	//  PK1PPDZO, PK2PPDZO, PK1SPLS1ZO, PK1SPSSZO toggle
	//E4
	if (Ush2dpp)
	{
		UZOSPPS1 = USASL_to_alpha(alpha_ra50a8 );
		PK1SPPSZO = true;
	}
	else
	{
		UZOSPPS1 = false;
		PK1SPPSZO = false;
	}

	// PBUSTO4 toggle
	//A1
	if (Ush1l >= 18.0 && F5_3310 == true && otkaz_zaliv_osvesh_shturmop_1 == true)
	{
		PBUSTO4_3_1k = true;
	}
	else
	{
		PBUSTO4_3_1k = true;
	}

	// PBUSTO4 toggle
	//A2
	if (Ush2p >= 18.0 && F6_3310 == true && otkaz_zaliv_osvesh_shturmnav_1 == true)
	{
		PBUSTO4_3_2k = true;
	}
	else
	{
		PBUSTO4_3_2k = true;
	}

	// PBUSTO4 toggle
	//A3
	if (Ush1dpl >= 18.0 && F7_3310 == true && otkaz_zaliv_osvesh_shturmop_2 == true)
	{
		PBUSTO4_4_1k = true;
	}
	else
	{
		PBUSTO4_4_1k = true;
	}

	// PBUSTO4 toggle
	//A4
	if (Ush2dpp >= 18.0 && F8_3310 == true && otkaz_zaliv_osvesh_shturmnav_2 == true)
	{
		PBUSTO4_4_2k = true;
	}
	else
	{
		PBUSTO4_4_2k = true;
	}
	
	// PK1PDSHOZO, PK2PDSHOZO toggle  
	//B1
	if (Ush1l >= 18.0 && PBUSTO4_4_1k == true)
	{
		UZOPDSHO1 = USASL_to_alpha(alpha_ra2a3);
		PK1PDSHOZO = true;
	}
	else
	{
		UZOPDSHO1 = false;
		PK1PDSHOZO = false;
	}

	// PK1PDSHOZO, PK2PDSHOZO toggle  
	//B2
	if (Ush1dpl >= 18.0 && PBUSTO4_3_1k == true)
	{
		UZOPDSHO2 = USASL_to_alpha(alpha_ra2a3);
		PK2PDSHOZO = true;
	}
	else
	{
		UZOPDSHO2 = false;
		PK2PDSHOZO = false;
	}

	// PK1LBSHOZO, PK2LBSHOZO
	//C1
	if (PBUSTO4_3_1k == true)
	{
		UZOLBSHO1 = USASL_to_alpha(alpha_ra2a12);
		PK1LBSHOZO = true;
	}
	else
	{
		UZOLBSHO1  = false;
		PK1LBSHOZO = true;
	}

	// PK1LBSHOZO, PK2LBSHOZO
	//C2
	if (PBUSTO4_4_1k == true)
	{
		UZOLBSHO2 = USASL_to_alpha(alpha_ra2a12);
		PK2LBSHOZO = true;
	}
	else
	{
		UZOLBSHO2 = false;
		PK2LBSHOZO = false;
	}

	// PK1PDSHNZO, PK2PDSHNZO
	//D1
	if (Ush1dpp >= 18.0 && PBUSTO4_3_2k == true)
	{
		UZOPDSHN1 = USASL_to_alpha(alpha_ra2a14);
		PK1PDSHNZO = true;
	}
	else
	{
		UZOPDSHN1 = false;
		PK1PDSHNZO = false;
	}

	//D2
	if (Ush2p >= 18.0 && PBUSTO4_4_2k == true)
	{
		UZOPDSHN2 = USASL_to_alpha(alpha_ra2a14);
		PK2PDSHNZO = true;
	}
	else
	{
		UZOPDSHN2 = false;
		PK2PDSHNZO = false;
	}



}
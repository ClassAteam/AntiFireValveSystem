#pragma once

int CabinLightingLogic();
double
UZOPBLL1, Ush2dpp, Ush1dpl, Ush2p, Ush1l, alpha_ra2a12,
UZOLBSHO2, Ush1dpp, alpha_ra2a14
;
bool
otkaz_zaliv_osvesh_prav_2, F4_3310, PBUSTO4_2_2k, otkaz_zaliv_osvesh_lev_2,
F3_3310, F3_3310o, tkaz_zaliv_osvesh_lev_2, PBUSTO4_2_1k, F2_3310,
otkaz_zaliv_osvesh_prav_1, PBUSTO4_1_2k, PBUSTO4_1_1k, F1_3310,
otkaz_zaliv_osvesh_lev_1, alpha_ra2a3, PK21PBLLZO, PK11PBLLZO, UZOPBPL2
, PK12PBLLZO, PK12PBPLZO, PK12PBPLZO, alpha_ra2a7, PK22PBPL30, UZOLSPD1, PK1LSPD30,
alpha_ra2a4, PK2LSPD30, UZOLSPD2, UZOPPD1, alpha_ra2a6, PK1PPDZO,
UZOPPD2, UZOSPLS1, PK1SPLSZO, UZOSPPS1, PK1SPPSZO, alpha_ra50a8, F5_3310
, otkaz_zaliv_osvesh_shturmop_1, PBUSTO4_3_1k, F6_3310
, otkaz_zaliv_osvesh_shturmnav_1, PBUSTO4_3_2k, F7_3310
, otkaz_zaliv_osvesh_shturmop_2, PBUSTO4_4_1k
, PK2PPDZO, F8_3310, otkaz_zaliv_osvesh_shturmnav_2, PBUSTO4_4_2k, PK1PDSHOZO
, PK2PDSHOZO, UZOPDSHO2, UZOPDSHO1, PK2LBSHOZO, PK1LBSHOZO, PK2LBSHOZO,
UZOLBSHO1, alpha_ra2a12UZOLBSHO2, UZOPDSHN1, PK1PDSHNZO
;

double USASL_to_alpha(double alpha)
{
	double result;
	result = (0.25 * alpha) + 0.75;
	return result;
}

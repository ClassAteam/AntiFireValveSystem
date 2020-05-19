#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
void logic()
{
	//						F91 toggle
	if (Ush1p >= 18.0 && F9_7322 == true	)
	{
		F91 = true;
	}
	else
	{
		F91 = false;
	}

	//						F101 toggle
	if (Ush1dpl >= 18.0 && F3_10010 == true)
	{
		F101 = true;
	}
	else
	{
		F101 = false;
	}

	//						F31 toggle
	if (Ush2dpl >= 18.0 && F3_10010 == true)
	{
		F31 = true;
	}
	else
	{
		F31 = false;
	}
	//						F318 toggle
	if (S1_2910 || K11_2910 || K10_2910 == true)
	{
		F318 = false;
	}
	else
	{
		F318 = true;
	}

	//					F323 toggle
	if (F31 != true)
	{
		F323 = false;
	}
	else
	{
		if (S2_2910 == 2)
		{
			if (f_grl1 == false || f_grl2 == false)
			{
				F323 = false;
			}
		}
		else
		{
			if (PUPPOP == true)
			{
				if (PUPLOP == true)
				{
					F323 = true;
				}
				else
				{
					F323 = false;
				}
			}
			else
			{
				F323 = false;
			}
		}
	}
	//					K5 toggle
	if (S1_2910 == 2)
	{
		K5_2910 = true;
	}
	else
	{
		K5_2910 = false;
	}

	//					F18 toggle
	if (K5_2910 == true)
	{
		F18 = false;
	}
	else
	{
		if (P2OBLOP == true)
		{
			if (a_rud_dv1 > 45)
			{
				F18 = false;
			}
			else
			{
				if (S6_2910 == 4)
				{
					if (F91 == true)
					{
						F18 = true;
					}
					else
					{
						F18 = false;
					}
				}
				else
				{
					F18 = false;
				}
			}
		}
		else
		{
			if (K4_2910 == true)
			{
				F18 = false;
			}
			else
			{
				if (K12_2910 == true)
				{
					F18 = false;
				}
				else
				{
					if (K25_2910 == true)
					{
						F18 = false;
					}
					else
					{
						if (Ushal >= 18)
						{
							F18 = true;
						}
						else
						{
							F18 = false;
						}
					}
				}
			}
		}
	}
	//					F78 toggle
	if (K5_2910 == true)
	{
		F78 = false;
	}
	else
	{
		if (P2OBLOP == true)
		{
			if (a_rud_dv2 > 45)
			{
				F78 = false;
			}
			else
			{
				if (S5_2910 == 5)
				{
					if (F91 == true)
					{
						F78 = true;
					}
					else
					{
						F78 = false;
					}
				}
				else
				{
					F78 = false;
				}
			}
		}
		else
		{
			if (K2_2910 == true)
			{
				F78 = false;
			}
			else
			{
				if (K12_2910 == true)
				{
					F78 = false;
				}
				else
				{
					if (K25_2910 == true)
					{
						F78 = false;
					}
					else
					{
						if (Ushal >= 18)
						{
							F78 = true;
						}
						else
						{
							F78 = false;
						}
					}
				}
			}
		}
	}
	//					F58 toggle
	if (K5_2910 == true)
	{
		F58 = false;
	}
	else
	{
		if (P2OBPOP == true)
		{
			if (a_rud_dv3 > 45)
			{
				F58 = false;
			}
			else
			{
				if (S5_2910 == 6)
				{
					if (F91 == true)
					{
						F58 = true;
					}
					else
					{
						F58 = false;
					}
				}
				else
				{
					F58 = false;
				}
			}
		}
		else
		{
			if (K4_2910 == true)
			{
				F58 = false;
			}
			else
			{
				if (K2_2910 == true)
				{
					F58 = false;
				}
				else
				{
					if (K25_2910 == true)
					{
						F58 = false;
					}
					else
					{
						if (Ushal >= 18)
						{
							F58 = true;
						}
						else
						{
							F58 = false;
						}
					}
				}
			}
		}
	}
	//					F88 toggle
	if (K5_2910 == true)
	{
		F88 = false;
	}
	else
	{
		if (P2OBPOP == true)
		{
			if (a_rud_dv4 > 45)
			{
				F88 = false;
			}
			else
			{
				if (S6_2910 == 7)
				{
					if (F91 == true)
					{
						F88 = true;
					}
					else
					{
						F88 = false;
					}
				}
				else
				{
					F88 = false;
				}
			}
		}
		else
		{
			if (K4_2910 == true)
			{
				F88 = false;
			}
			else
			{
				if (K2_2910 == true)
				{
					F88 = false;
				}
				else
				{
					if (K2_2910 == true)
					{
						F88 = false;
					}
					else
					{
						if (Ushal >= 18)
						{
							F88 = true;
						}
						else
						{
							F88 = false;
						}
					}
				}
			}
		}
	}
	F78 = false;
	
	//				F78, K28, K29, K30, K31 toggle
	if (K5_2910 == true)
	{
		K28_2910 = false;
		K29_2910 = false;
		K30_2910 = false;
		K31_2910 = false;
	}
	else
	{
		if (P2OBLOP == true)
		{
			if (a_rud_dv2 > 45)
			{
				K28_2910 = false;
				K29_2910 = false;
				K30_2910 = false;
				K31_2910 = false;
			}
			else
			{
				if (S7_2910 == 5)
				{
					if (F91 == true)
					{
						F78 = true;
					}
					else
					{
						K28_2910 = false;
						K29_2910 = false;
						K30_2910 = false;
						K31_2910 = false;
					}
				}
				else
				{
					if (S5_2910 == 8)
					{
						if (F91 == true)
						{
							F78 = true;
						}
						else
						{
							K28_2910 = false;
							K29_2910 = false;
							K30_2910 = false;
							K31_2910 = false;
						}
					}
					else
					{
						K28_2910 = false;
						K29_2910 = false;
						K30_2910 = false;
						K31_2910 = false;
					}
				}

			}
		}
		else
		{
			if (K2_2910 || K12_2910 || K25_2910 == true && Ushal >= 18)
			{
				F78 = true;
			}
			else
			{
				K28_2910 = false;
				K29_2910 = false;
				K30_2910 = false;
				K31_2910 = false;
			}
		}
	}

	//					K31, K28, K29, K30 toggle
	if (Ushal >= 18.0)
	{
		if (Pn1gs1 <= 80.0)
		{
			K31_2910 = true;
		}
		if (Pn2gs2 <= 80.0)
		{
			K28_2910 = true;
		}
		if (Pn1gs1 <= 80)
		{
			K29_2910 = true;
		}
		if (Pn2gs1 <= 80)
		{
			K30_2910 = true;
		}
		K32_2910 = false;
		K35_2910 = false;
		K34_2910 = false;
		K38_2910 = false;
	}
	else
	{
		K32_2910 = false;
		K35_2910 = false;
		K34_2910 = false;
		K38_2910 = false;
	}

	if (Ushap >= 18.0)
	{
		if (Pn1gs3 <= 80)
		{
			K32_2910 = true;
		}
		if (Pn2gs3 <= 80)
		{
			K35_2910 = true;
		}
		if (Pn1gs4 <= 80)
		{
			K38_2910 = true;
		}
		if (Pn2gs4 <= 80)
		{
			K34_2910 = true;
		}
	}
	//			K1_2910, K3_2910, K7_2910, K15_2910 toggle
	if (F323 == true)
	{
		if (F318 == true)
		{
			if (S3_2910 == 1)
			{
				K1_2910 = true;
				K3_2910 = false;
			}
			if (S3_2910 == 2)
			{
				K1_2910 = false;
				K3_2910 = true;
			}
		}
		else
		{
			K1_2910 = false;
			K3_2910 = true;
		}
	}
	else
	{
		K1_2910 = false;
		K3_2910 = true;
	}
	if (Ushal >= 18.0)
	{
		if (Pn1gs2 <= 80 && Pn2gs2 <=80)
		{
			K7_2910 = true;
		}
		else
		{
			K7_2910 = false;
		}
	}
	if (Ushal >= 18.0)
	{
		if (Pn1gs3 <= 80 && Pn2gs3 <= 80)
		{
			K15_2910 = true;
		}
		else
		{
			K15_2910 = false;
		}
	}

	//			K1_2910, K3_2910, K21_2910, K8_2910, K18_2910 toggle
	if (F323 == true)
	{
		if (F318 == true)
		{
			if (S4_2910 == 1)
			{
				K3_2910 = true;
				K1_2910 = false;
			}
			if (S4_2910 == 2)
			{
				K3_2910 = false;
				K1_2910 = true;
			}
		}
		else
		{
			K21_2910 = false;
			K19_2910 = true;
		}
	}
	else
	{
		K1_2910 = false;
		K3_2910 = true;
	}
	if (Ushal >= 18.0)
	{
		if (Pn1gs1 <= 80 && Pn2gs1 <= 80)
		{
			K8_2910 = true;
		}
		else
		{
			K8_2910 = false;
		}
	}
	if (Ushal >= 18.0)
	{
		if (Pn1gs4 <= 80 && Pn2gs4 <= 80)
		{
			K18_2910 = true;
		}
		else
		{
			K18_2910 = false;
		}
	}

	//						K10_2910, K11_2910 toggle
	if (F31 == true)
	{
		if (S1_2910 == 5)
		{
			K11_2910 = false;
			K10_2910 = false;
		}
		else
		{
			if (K1_2930 == true)
			{
				K11_2910 = true;
			}
			if (K2_2930 == true)
			{
				K11_2910 = true;
			}
			if (K3_2930 == true)
			{
				K11_2910 = true;
			}
			if (K4_2930 == true)
			{
				K11_2910 = true;
			}
			if (K11_2910 == true)
			{
				if (P2OBLOP == true)
				{
					K11_2910 = false;
				}
				else
				{
					K10_2910 = false;
				}
			}
			else
			{
				K10_2910 = false;
			}
		}
	}

	//						Reset K2, K4, K12, K25
	if (F31 == true)
	{
		if (K2_2910 = true)
		{
			K10_2910 = true;
		}
		else
		{
			if (K4_2910 == true)
			{
				K10_2910 = true;
			}
			else
			{
				if (K12_2910 == true)
				{
					K10_2910 = true;
				}
				else
				{
					if (K25_2910 == true)
					{
						K10_2910 = true;
					}
					else
					{
						K2_2910 = false;
						K4_2910 = false;
						K12_2910 = false;
						K25_2910 = false;
					}
				}
			}
		}
	}
	else
	{
		K2_2910 = false;
		K4_2910 = false;
		K12_2910 = false;
		K25_2910 = false;
	}

	//					K2_2910, K4_2910, K12_2910, K25_2910 toggle
	if (F18 == true)
	{
		if (PRD1 == false)
		{
			K2_2910 = true;
		}
	}
	if (F78 == true)
	{
		if (PRD2 == false)
		{
			K4_2910 = true;
		}
	}
	if (F58 == true)
	{
		if (PRD2 == false)
		{
			K12_2910 = true;
		}
	}
	if (F88 == true)
	{
		if (PRD3 == false)
		{
			K25_2910 = true;
		}
	}

	//			PRN1 & K13_2910 toggles
	if (Ushal >= 18.0)
	{
		if (K2_2910 == true)
		{
			PRN1GS1 = true;
			K13_2910 = true;
		}
		else
		{
			if (K1_2910 == true)
			{
				PRN1GS1 = true;
			}
			else
			{
				PRN1GS1 = false;
				K13_2910 = false;
			}
		}
	}
	else
	{
		PRN1GS1 = false;
		K13_2910 = false;
	}

	//			PRN2 & K14_2910 toggles
	if (Ushal >= 18.0)
	{
		if (K2_2910 == true)
		{
			PRN2GS2 = true;
			K14_2910 = true;
		}
		else
		{
			if (K3_2910 == true)
			{
				PRN2GS2 = true;
			}
			else
			{
				PRN2GS2 = false;
				K14_2910 = false;
			}
		}
	}
	else
	{
		PRN2GS2 = false;
		K14_2910 = false;
	}

	//				PRN2GS1 & K16_2910 toggle
	if (Ushal >= 18.0)
	{
		if (K4_2910 == true)
		{
			PRN2GS1 = true;
			K16_2910 = true;
		}
		else
		{
			if (K3_2910 == true)
			{
				PRN2GS1 = true;
				K16_2910 = true;
			}
			else
			{
				PRN2GS1 = false;
				K16_2910 = false;
			}
		}
	}
	else
	{
		PRN2GS1 = false;
		K16_2910 = false;
	}

	//				PRN1GS2 & K17_2910 toggle
	if (Ushal >= 18.0)
	{
		if (K4_2910 == true)
		{
			PRN1GS2 = true;
			K17_2910 = true;
		}
		else
		{
			if (K1_2910 == true)
			{
				PRN1GS2 = true;
				K17_2910 = true;
			}
			else
			{
				PRN1GS2 = false;
				K17_2910 = false;
			}
		}
	}
	else
	{
		PRN1GS2 = false;
		K17_2910 = false;
	}

	//				PRN1GS3 & K20_2910 toggle
	if (Ushal >= 18.0)
	{
		if (K12_2910 == true)
		{
			PRN1GS3 = true;
			K20_2910 = true;
		}
		else
		{
			if (K21_2910 == true)
			{
				PRN1GS3 = true;
				K20_2910 = true;
			}
			else
			{
				PRN1GS3 = false;
				K20_2910 = false;
			}
		}
	}
	else
	{
		PRN1GS3 = false;
		K20_2910 = false;
	}

	//				PRN2GS4 & K33_2910 toggle
	if (Ushal >= 18.0)
	{
		if (K12_2910 == true)
		{
			PRN2GS4 = true;
			K33_2910 = true;
		}
		else
		{
			if (K19_2910 == true)
			{
				PRN2GS4 = true;
				K33_2910 = true;
			}
			else
			{
				PRN2GS4 = false;
				K33_2910 = false;
			}
		}
	}
	else
	{
		PRN2GS4 = false;
		K33_2910 = false;
	}

	//				PRN1GS4 & K37_2910 toggle
	if (Ushal >= 18.0)
	{
		if (K25_2910 == true)
		{
			PRN1GS4 = true;
			K37_2910 = true;
		}
		else
		{
			if (K21_2910 == true)
			{
				PRN1GS4 = true;
				K37_2910 = true;
			}
			else
			{
				PRN1GS4 = false;
				K37_2910 = false;
			}
		}
	}
	else
	{
		PRN1GS4 = false;
		K37_2910 = false;
	}

	//				PRN2GS3 & K36_2910 toggle
	if (Ushal >= 18.0)
	{
		if (K25_2910 == true)
		{
			PRN2GS3 = true;
			K36_2910 = true;
		}
		else
		{
			if (K19_2910 == true)
			{
				PRN2GS3 = true;
				K36_2910 = true;
			}
			else
			{
				PRN2GS3 = false;
				K36_2910 = false;
			}
		}
	}
	else
	{
		PRN2GS3 = false;
		K36_2910 = false;
	}
		


























}
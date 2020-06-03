#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
#include <math.h>

void logic()
{
	//////////////////////Pprgs & Puksgs toggle
	/////////////////////1st
	if (Ush1dpl >= 18.0 && F1_2930)
	{
		Pprgs1 = Pgs1;
		Puksgs1 = Pgs1;
	}
	else
	{
		Pprgs1 = (-20.0);
		Puksgs1 = 0.0;
	}
	/////////////////////2nd
	if (Ush1dpl >= 18.0 && F1_2930)
	{
		Pprgs2 = Pgs1;
		Puksgs2 = Pgs1;
	}
	else
	{
		Pprgs2 = (-20.0);
		Puksgs2 = 0.0;
	}

	/////////////////////3rd
	if (Ush1dpp >= 18.0 && F15_2930)
	{
		Pprgs3 = Pgs3;
		Puksgs3 = Pgs3;
	}
	else
	{
		Pprgs3 = (-20.0);
		Puksgs3 = 0.0;
	}
	/////////////////////4th
	if (Ush1dpp >= 18.0 && F15_2930)
	{
		Pprgs4 = Pgs4;
		Puksgs4 = Pgs4;
	}
	else
	{
		Pprgs4 = (-20.0);
		Puksgs4 = 0.0;
	}
	//				PK toggle
	if (Ush01l >= 18.0 && F14_2930)
	{
		PK = true;
	}
	else
	{
		PK = false;
	}
	//			   PKL toggle
	if (S18_2930)
	{
		PKL = true;
	}
	else
	{
		PKL = false;
	}

	//			BSS812X5N toggle

	if (Ushal >= 18.0 || K7_2910 != 1 || K8_2910 != 1 || K15_2910 != 1 || K18_2910 != 1)
	{
		BSS812X5N = true;
	}
	else
	{
		BSS812X5N = false;
	}
	//////////////////////////hydropumps dyods toggles
	////////// gs2
	if (PKL != true)
	{
		if (K7_2910 == true)
		{
			gydronasosipodklucheny_gs2 = false;
		}
		else
		{
			if (Ushal >= 18.0)
			{
				gydronasosipodklucheny_gs2 = true;
			}
			else
			{
				gydronasosipodklucheny_gs2 = false;
			}
		}
	}
	else
	{
		gydronasosipodklucheny_gs2 = true;
	}

	////////// gs1
	if (PKL != true)
	{
		if (K8_2910 == true)
		{
			gydronasosipodklucheny_gs1 = false;
		}
		else
		{
			if (Ushal >= 18.0)
			{
				gydronasosipodklucheny_gs1 = true;
			}
			else
			{
				gydronasosipodklucheny_gs1 = false;
			}
		}
	}
	else
	{
		gydronasosipodklucheny_gs1 = true;
	}

	////////// gs3
	if (PKL != true)
	{
		if (K15_2910 == true)
		{
			gydronasosipodklucheny_gs3 = false;
		}
		else
		{
			if (Ushap >= 18.0)
			{
				gydronasosipodklucheny_gs3 = true;
			}
			else
			{
				gydronasosipodklucheny_gs3 = false;
			}
		}
	}
	else
	{
		gydronasosipodklucheny_gs3 = true;
	}

	////////// gs4
	if (PKL != true)
	{
		if (K18_2910 == true)
		{
			gydronasosipodklucheny_gs4 = false;
		}
		else
		{
			if (Ushap >= 18.0)
			{
				gydronasosipodklucheny_gs4 = true;
			}
			else
			{
				gydronasosipodklucheny_gs4 = false;
			}
		}
	}
	else
	{
		gydronasosipodklucheny_gs4 = true;
	}
	
	//			PKL toggle
	if (Ush01l >= 18.0 && F14_2930 == true && S13_2920 == 1)
	{
		PKL = true;
	}
	else
	{
		PKL = false;
	}

	//			BSS824X1HH toggle
	if (KKGS1 || KKGS2 || KKGS3 || KKGS4)
	{
		BSS824X1HH = true;
	}
	else
	{
		BSS824X1HH = false;
	}

	//			TS toggle
	if (F101_2910 && S5_2910 == 2 || S6_2910 == 2 || S7_2910 == 2)
	{
		TS = true;
	}
	else
	{
		if (Ushal >= 18.0 && K7_2910 || K8_2910)
		{
			TS = true;
		}
		else
		{
			if (Ushap >= 18.0 && K15_2910 || K18_2910)
			{
				TS1 = true;
			}
			else
			{
				TS = false;
			}
		}
	}
	//			BSS812 switching to 0

	BSS812X5E = false;
	BSS812X5G = false;
	BSS812X5J = false;
	BSS812X5L = false;

	//			UKS1X3 switching to 0

	UKS1X3_33 = false;
	UKS1X3_34 = false;
	UKS1X3_35 = false;
	UKS1X3_36 = false;

	//////////////BSS812 & UKS1X3 toggle
	//////////////1st

	if (Ushal >= 18.0)
	{
		if (Ptnugs1 >= 130)
		{
			UKS1X3_33 = true;
		}
		else
		{
			if (PKL1 == true)
			{
				BSS812X5E = true;
			}
		}
	}

	//////////////BSS812 & UKS1X3 toggle
	//////////////2nd

	if (Ushal >= 18.0)
	{
		if (Ptnugs2 >= 130)
		{
			UKS1X3_34 = true;
		}
		else
		{
			if (PKL1 == true)
			{
				BSS812X5G = true;
			}
		}
	}

	//////////////BSS812 & UKS1X3 toggle
	//////////////3rd

	if (Ushap >= 18.0)
	{
		if (Ptnugs3 >= 130)
		{
			UKS1X3_35 = true;
		}
		else
		{
			if (PKL1 == true)
			{
				BSS812X5J = true;
			}
		}
	}
	
	//////////////BSS812 & UKS1X3 toggle
	//////////////4th

	if (Ushap >= 18.0)
	{
		if (Ptnugs4 >= 130)
		{
			UKS1X3_36 = true;
		}
		else
		{
			if (PKL1 == true)
			{
				BSS812X5L = true;
			}
		}
	}
	//////////////K_2930 & BSS811X toggle
	//////////////1st

	if (Ushal >= 18.0 && Pgs1 < 130)
	{
		K1_2930 = true;
		BSS811XZ = true;
		UKS2X3_16 = true;
	}
	else
	{
		K1_2930 = false;
	}
	//////////////K_2930 & BSS811X toggle
	//////////////2nd

	if (Ushal >= 18.0 && Pgs2 < 130)
	{
		K2_2930 = true;
		BSS811Xb = true;
		UKS2X3_17 = true;
	}
	else
	{
		K2_2930 = false;
	}

	//////////////K_2930 & BSS811X toggle
	//////////////3rd

	if (Ushap >= 18.0 && Pgs3 < 130)
	{
		K3_2930 = true;
		BSS811Xd = true;
		UKS2X3_18 = true;
	}
	else
	{
		K3_2930 = false;
	}

	//////////////K_2930 & BSS811X toggle
	//////////////4th

	if (Ushap >= 18.0 && Pgs4 < 130)
	{
		K4_2930 = true;
		BSS811Xf = true;
		UKS2X3_19 = true;
	}
	else
	{
		K4_2930 = false;
	}

	//////////////BSS811X2 toggle
	//////////////1st

	if (Ushal >= 18.0 && Psurgs1 < 30)
	{
		BSS811X2d = true;
	}
	else
	{
		BSS811X2d = false;
	}

	//////////////BSS811X2 toggle
	//////////////2nd

	if (Ushal >= 18.0 && Psurgs2 < 30)
	{
		BSS811X2e = true;
	}
	else
	{
		BSS811X2e = false;
	}

	//////////////BSS811X2 toggle
	//////////////3rd

	if (Ushap >= 18.0 && Psurgs3 < 30)
	{
		BSS811X2f = true;
	}
	else
	{
		BSS811X2f = false;
	}

	//////////////BSS811X2 toggle
	//////////////4th

	if (Ushap >= 18.0 && Psurgs4 < 30)
	{
		BSS811X2g = true;
	}
	else
	{
		BSS811X2g = false;
	}

	//		PSA3 toggle
	if (Ushap >= 18.0 && Pgak < 200.0)
	{
		PSA3_41 = true;
	}
	else
	{
		PSA3_41 = false;
	}
	
	//		TS1 toggle

	if (BSS811X2d || BSS811X2e || BSS811X2f || BSS811X2g)
	{
		TS1 = true;
	}
	else
	{
		TS1 = false;
	}

	///////////////////H-toggles

	if (PKL == true)
	{
		H10_930 = true;
		H11_2930 = true;
		H12_2930 = true;
		H13_2930 = true;
	}
	else
	{
		H10_930 = false;
		H11_2930 = false;
		H12_2930 = false;
		H13_2930 = false;
	}




}
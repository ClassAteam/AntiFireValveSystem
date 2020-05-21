#pragma once
extern bool PTNUGS1, PTNUGS2, PTNUGS3, PTNUGS4, PNN1gs3, PNN2gs3, PNTNUgs3, KKGS3, otkaz_gs1, otkaz_gs2, otkaz_gs3, otkaz_gs4, PNTNUGS1, PNTNUGS2, PNTNUGS3, PNTNUGS4;

extern double Pv_vsu, Pgs1, Pgs2, Pgs3, Pgs4, P0gs3, Pgat, Pgs3_r, Pgat_r, Qtnu_gs1, Qtnu_gs2, Qtnu_gs3, Qtnu_gs4, Qntnu_gs1, Qntnu_gs2, Qntnu_gs3, Qntnu_gs4, Qngs1, Qngs2, Qngs3, Qngs4,
Qngn1gs1, Qngn1gs2, Qngn1gs3, Qngn1gs4, Qngn2gs1, Qngn2gs2, Qngn2gs3, Qngn2gs4, Qutgs3, Qn_gat, Qpst, Qpgs3, Qpz_sum, Wpgs3, Wpgs3_delta, d_Xst_dt, Kgs, Cst; 

double amount_for_presure_gsi(double Pgs)
{
	double lgs = 0;
	if (Pgs <= 200.0)
	{
		lgs = (1 - (Pgs * 0.0015));		
	}
	if (Pgs > 200.0)
	{
		lgs = ((Pgs - 200) * (0.0035 / 85));				//throw exceptions for 0 and -values
	}
	return lgs;
	/*std::cout << "Pgs = " << Pgs1 << std::endl;
	std::cout << "lgs = " << lgs << std::endl;*/
}
double amount_for_presure_vsu(double Pv)
{
	double lgs;
	if (Pv < 1)
	{
		return 0;
	}
	if (Pv >= 1.0)
	{
		lgs = (0.7 * (Pv - 1));
	}
	if (Pv >= 2.0)
	{
		lgs = ((0.3 * (Pv - 2)) + 0.7);
	}
	return lgs;

	//		if (Pv <= 200.0)
	//		{
	//			lgs = (1 - (Pv * 0.0015));
	//		}
	//		if (Pv > 200.0)
	//		{
	//			lgs = ((Pv - 200) * (0.0035 / 85));				//throw exceptions for 0 and -values
	//		}
	/*std::cout << "Pv = " << Pv << std::endl;
	std::cout << "lgs = " << lgs << std::endl;*/
}
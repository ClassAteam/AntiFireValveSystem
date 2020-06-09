#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "HydroConsumersHeader.h"
#include <math.h>
void logic()
{
	/////////////////////////1st
	if (KSURGS1 == true)
	{
		Qp1k = ((abs(Qp1k - Qp1k)) * Sk);
		Qp1intl = ((abs(Qp1intl - Qp1intl)) * Sk);
		Qp1intp = ((abs(Qp1intp - Qp1intp)) * Sk);
		Qp1fll = ((abs(Qp1intp - Qp1intp)) * Sk);
		Qp1flp = ((abs(Qp1flp - Qp1flp)) * Sk);
		Qp1xl = ((abs(Qp1xl - Qp1xl)) * Sk);
		Qp1_teta_kldv1 = ((abs(Qp1_teta_kldv1 - Qp1_teta_kldv1)) * Sk);
		Qp2_fi_stv2 = ((abs(Qp2_fi_stv2 - Qp2_fi_stv2)) * Sk);
	}
	else
	{
		Qp1k = 0.0;
		Qp1intl = 0.0;
		Qp1intp = 0.0;
		Qp1fll = 0.0;
		Qp1flp = 0.0;
		Qp1xl = 0.0;
		Qp1_teta_kldv1 = 0.0;
		Qp2_fi_stv2 = 0.0;
	}
	/////////////////////////2nd
	if (KSURGS2 == true)
	{
		Qp2k = ((abs(Qp2k - Qp2k)) * Sk);
		Qp2intl = ((abs(Qp2intl - Qp2intl)) * Sk);
		Qp2intp = ((abs(Qp2intp - Qp2intp)) * Sk);
		Qp2fll = ((abs(Qp2fll - Qp2fll)) * Sk);
		Qp2flp = ((abs(Qp2flp - Qp2flp)) * Sk);
		Qp2xl = ((abs(Qp2xl - Qp2xl)) * Sk);
		Qp2_teta_kldv2 = ((abs(Qp2_teta_kldv2 - Qp2_teta_kldv2)) * Sk);
		Qp2_fi_stv2 = ((abs(Qp2_fi_stv2 - Qp2_fi_stv2)) * Sk);
	}
	else
	{
		Qp2k = 0.0;
		Qp2intl = 0.0;
		Qp2intp = 0.0;
		Qp2fll = 0.0;
		Qp2flp = 0.0;
		Qp2xl = 0.0;
		Qp2_teta_kldv2 = 0.0;
		Qp2_fi_stv2 = 0.0;
	}
	/////////////////////////3nd
	if (KSURGS3 == true)
	{
		Qp3k = ((abs(Qp3k - Qp3k)) * Sk);
		Qp3intl = ((abs(Qp3intl - Qp3intl)) * Sk);
		Qp3intp = ((abs(Qp3intp - Qp3intp)) * Sk);
		Qp3fll = ((abs(Qp3fll - Qp3fll)) * Sk);
		Qp3flp = ((abs(Qp3flp - Qp3flp)) * Sk);
		Qp3xl = ((abs(Qp3xl - Qp3xl)) * Sk);
		Qp3_teta_kldv3 = ((abs(Qp3_teta_kldv3 - Qp3_teta_kldv3)) * Sk);
		Qp3_fi_stv3 = ((abs(Qp3_fi_stv3 - Qp3_fi_stv3)) * Sk);
	}
	else
	{
		Qp3k = 0.0;
		Qp3intl = 0.0;
		Qp3intp = 0.0;
		Qp3fll = 0.0;
		Qp3flp = 0.0;
		Qp3xl = 0.0;
		Qp3_teta_kldv3 = 0.0;
		Qp3_fi_stv3 = 0.0;
	}
	/////////////////////////4nd
	if (KSURGS4 == true)
	{
		Qp4k = ((abs(Qp4k - Qp4k)) * Sk);
		Qp4intl = ((abs(Qp4intl - Qp4intl)) * Sk);
		Qp4intp = ((abs(Qp4intp - Qp4intp)) * Sk);
		Qp4fll = ((abs(Qp4fll - Qp4fll)) * Sk);
		Qp4flp = ((abs(Qp4flp - Qp4flp)) * Sk);
		Qp4xl = ((abs(Qp4xl - Qp4xl)) * Sk);
		Qp4_teta_kldv4 = ((abs(Qp4_teta_kldv4 - Qp4_teta_kldv4)) * Sk);
		Qp4_fi_stv4 = ((abs(Qp4_fi_stv4 - Qp4_fi_stv4)) * Sk);
	}
	else
	{
		Qp4k = 0.0;
		Qp4intl = 0.0;
		Qp4intp = 0.0;
		Qp4fll = 0.0;
		Qp4flp = 0.0;
		Qp4xl = 0.0;
		Qp4_teta_kldv4 = 0.0;
		Qp4_fi_stv4 = 0.0;

	}
	//				Qp1_fi_nk resolving for 1st and 2nd
	if (GKupl == true)
	{
		Qp1_fi_nk = ((abs(Qp1_fi_nk - Qp1_fi_nk)) * Sk);
	}
	else
	{
		Qp1_fi_nk = 0.0;
	}

	if (GKupp == true)
	{
		Qp3_fi_nk = ((abs(Qp3_fi_nk - Qp3_fi_nk)) * Sk);
	}
	else
	{
		Qp3_fi_nk = 0.0;
	}

	if (GKoovsh == true)
	{
		Qp2_delta_shl = ((abs(Qp2_delta_shl - Qp2_delta_shl)) * Sk);
		Qp2_delta_shp = ((abs(Qp2_delta_shp - Qp2_delta_shp)) * Sk);
		Qp2_delta_shn = ((abs(Qp2_delta_shn - Qp2_delta_shn)) * Sk);
		//Qp2_delta_shn = ((abs(Qp2_delta_shn - Qp2_delta_shn)) * Sk); ???
		Qp2_delta_tell = ((abs(Qp2_delta_tell - Qp2_delta_tell))* Sk);
		Qp2_delta_telp = ((abs(Qp2_delta_telp - Qp2_delta_telp)) * Sk);
	}
	else
	{
		Qp2_delta_shl = 0;
		Qp2_delta_shp = 0;
		Qp2_delta_shn = 0;
		//Qp2_delta_shn = ((abs(Qp2_delta_shn - Qp2_delta_shn)) * Sk); ???
		Qp2_delta_tell = 0;
		Qp2_delta_telp = 0;
	}

		Qp2_delta_prl = ((abs(Qp2_delta_prl - Qp2_delta_prl)) * Sk);
		Qp3_delta_prp = ((abs(Qp3_delta_prp - Qp3_delta_prp)) * Sk);

		Qp1_delta_zl = ((abs(Qp3_delta_prp - Qp3_delta_prp)) * Sk);

		Qp4_delta_p = ((abs(Qp3_delta_prp - Qp3_delta_prp)) * Sk);

		if (POUT == true)
		{
			Qp2_torl = (abs(dXped1 / dt)) * Stor;
			Qp2_torp = (abs(dXped1 / dt)) * Stor;
		}
		else
		{
			Qp2_torl = 0.0;
			Qp2_torp = 0.0;
		}

		Qp1_grl = ((dXgrl1 / (dt * Sgrl)));

		Qp2_grl = ((dXgrl2 / (dt * Sgrl)));

		Qp1_sum = Qp1_sum;

		Qp2_sum = Qp2_sum;

		Qp3_sum = Qp3_sum;

		Qp4_sum = Qp4_sum;

	























}
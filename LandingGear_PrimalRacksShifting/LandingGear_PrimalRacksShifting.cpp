#include "LandingGear_PrimalRacksShifting.h"
#include "linear_algorithm.h"


int racks_shifting_logic()
{

	if (GK_oovsh == true)
	{
		//releasing left rack
		if (Pbal_l >= 60.0)
		{
			Dfi_delta_sh_l = two_points_to_Y(Pbal_l, 60.0, 150.0, 0.0, 0.16);
		}
		else
		{
			fi_delta_sh_l = false;
		}
		if (GK_avl == true)
		{
			t_rv9l = t_rv9l + tc;
		}
		else
		{
			t_rv9l = false;
		}
		if (t_rv9l >= 0.5)
		{
			fi_delta_sh_l = fi_delta_sh_l - Dfi_delta_sh_l;
		}
		if (fi_delta_sh_l <= 0.0)
		{
			fi_delta_sh_l = 0.0;
		}

		//releasing right rack
		if (Pbal_p >= 60.0)
		{
			Dfi_delta_sh_p = two_points_to_Y(Pbal_p, 60.0, 150.0, 0.0, 0.16);
		}
		else
		{
			fi_delta_sh_p = false;
		}
		if (GK_avp == true)
		{
			t_rv9p = t_rv9p + tc;
		}
		else
		{
			t_rv9p = false;
		}
		if (t_rv9p >= 0.5)
		{
			fi_delta_sh_p = fi_delta_sh_p - Dfi_delta_sh_p;
		}
		if (fi_delta_sh_p <= 0.0)
		{
			fi_delta_sh_p = 0.0;
		}

	}
	else
	{
		t_rv9l = false;
		t_rv9p = false;
	}

	//usual release
	if (Pgs2 >= 130.0 && GK_oovsh == false)
	{
		Dfi_delta_sh = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.25);
	}
	else
	{
		Dfi_delta_sh = false;
	}
	if (GK_vsh == false)
	{

		//the left rack
		if (GK_ush == true && delta_sh_l == 1.0)
		{
			fi_delta_sh_l = fi_delta_sh_l + Dfi_delta_sh;
		}
		if (fi_delta_sh_l >= 1.0)
		{
			fi_delta_sh_l = 1.0;
		}

		//the right rack
		if (GK_ush == true && delta_sh_p == 1.0)
		{
			fi_delta_sh_p = fi_delta_sh_p + Dfi_delta_sh;
		}
		if (fi_delta_sh_p >= 1.0)
		{
			fi_delta_sh_p = 1.0;
		}
	}
		
	if (GK_vsh == true)
	{
		//left
		if (delta_sh_l == 1.0
			&& delta_stv_l == 90.0
			&& delta_tel_l == 1.0 
			&& GK_dvl == true
			&& otkaz_nedovipush_osn_opr == false)
		{
			fi_delta_sh_l = fi_delta_sh_l - Dfi_delta_sh;
			if (fi_delta_sh_l <= 0.0)
			{
				fi_delta_sh_l = 0.0;
			}
		}

		//right
		if (delta_sh_p == 1.0
			&& delta_stv_p == 90.0
			&& delta_tel_p == 1.0 
			&& GK_dvp == true
			&& otkaz_nedovipush_osn_opr == false)
		{
			fi_delta_sh_p = fi_delta_sh_p - Dfi_delta_sh;
			if (fi_delta_sh_p <= 0.0)
			{
				fi_delta_sh_p = 0.0;
			}
		}
	}


}
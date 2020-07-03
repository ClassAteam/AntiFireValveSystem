#include "LandingGear_PrimalRacksRelease.h"
#include "linear_algorithm.h"

int primal_racks_release()
{
	if (GK_oovsh == true)
	{
		//normal release
		if (Pgs2 >= 130.0)
		{
			Ddelta_sh = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.125);
		}
		if (Pgs2 > 280.0)
		{
			Ddelta_sh = 0.125;
		}
		else
		{
			Ddelta_sh = false;
		}

		if (GK_vsh == true)
		{
			// left rack release
			if (delta_stv_l == 90.0)
			{
				t_rv7l = t_rv7l + tc;

				if (t_rv7l >= 0.5 && otkaz_nevipusk_sh_lev_op == false)
				{
					delta_sh_l = delta_sh_l + Ddelta_sh;
				}

				if (delta_sh_l >= 1.0)
				{
					delta_sh_l = 1.0;
				}

			}
			else
			{
				t_rv7l = false;
			}
			// right rack release
			if (delta_stv_p == 90.0)
			{
				t_rv7p = t_rv7p + tc;

				if (t_rv7p >= 0.5 && otkaz_nevipusk_sh_prav_op == false)
				{
					delta_sh_p = delta_sh_p + Ddelta_sh;
				}

				if (delta_sh_p >= 1.0)
				{
					delta_sh_p = 1.0;
				}
			}
			else
			{
				t_rv7p = false;
			}
			// front rack release
			if (delta_stv_n == 90.0)
			{

				if (otkaz_nevipusk_sh_pered_op == false)
				{
					delta_sh_n = delta_sh_n + Ddelta_sh;
				}

				if (delta_sh_n >= 1.0)
				{
					delta_sh_n = 1.0;
				}
			}
		}

		// intake racks
		if (GK_ush == true)
		{
			//front rack
			if (otkaz_nepoln_ubork_per_op == false)
			{
				delta_sh_n = delta_sh_n + Ddelta_sh;
				if (delta_sh_n <= 0.0)
				{
					delta_sh_n = 0.0;
				}
			}

			//left rack
			if (GK_duoop == true && otkaz_nepoln_ubork_lev_op)
			{
				delta_sh_l = delta_sh_l - Ddelta_sh;
			}
			if (delta_sh_l <= 0.0)
			{
				delta_sh_l = 0.0;
			}

			//right rack
			if (GK_duoop == true && otkaz_nepoln_ubork_prav_op)
			{
				delta_sh_p = delta_sh_p - Ddelta_sh;
			}
			if (delta_sh_p <= 0.0)
			{
				delta_sh_p = 0.0;
			}
		}
	}
	else
	//emergency release
	{
		//left rack
		if (Pbal_l >= 60.0)
		{
			Ddelta_sh = two_points_to_Y(Pbal_l, 60.0, 150.0, 0.0, 0.08);
		}
		else
		{
			Ddelta_sh = 0.0;
		}

		if (GK_avl_op == true)
		{
			t_rv9l = t_rv9l + tc;

			if (t_rv9l >= 0.5)
			{
				delta_sh_l = delta_sh_l + Ddelta_sh;
				if (delta_sh_l >= 1.0)
				{
					delta_sh_l = 1.0;
				}
			}
		}

		//right rack
		if (Pbal_p >= 60.0)
		{
			Ddelta_sh = two_points_to_Y(Pbal_p, 60.0, 150.0, 0.0, 0.08);
		}
		else
		{
			Ddelta_sh = 0.0;
		}

		if (GK_avp_op == true)
		{
			t_rv9p = t_rv9p + tc;

			if (t_rv9p >= 0.5)
			{
				delta_sh_p = delta_sh_p + Ddelta_sh;
				if (delta_sh_p >= 1.0)
				{
					delta_sh_p = 1.0;
				}
			}
		}

		//front rack
		if (Pbal_per >= 60.0)
		{
			Ddelta_sh = two_points_to_Y(Pbal_per, 60.0, 150.0, 0.0, 0.08);
		}
		else
		{
			Ddelta_sh = 0.0;
		}

		if (GK_avn_op == true)
		{
			t_rv1n = t_rv1n + tc;

			if (t_rv1n >= 0.5)
			{
				delta_sh_n = delta_sh_n + Ddelta_sh;
				if (delta_sh_n >= 1.0)
				{
					delta_sh_n = 1.0;
				}
			}
		}
	}
}
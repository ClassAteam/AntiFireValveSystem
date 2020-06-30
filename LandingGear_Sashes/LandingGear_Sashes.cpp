#include "LandingGear_Sashes.h"
#include "linear_algorithm.h"

int LandingGear_sashes_logic()
{
	if (GK_oovsh == false)
	{
		t_rv8n = false;

		//Ddelta_stv toggling
		if (Pgs2 >= 130.0 && Pgs2 < 280.0)
		{
			Ddelta_stv = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 45.0);
		}
		if (Pgs2 >= 280.0)
		{
			Ddelta_stv = 45.0;
		}

		//if Hydro valve is open
		if (GK_vsh == true)
		// release cycle
		{
			t_rv2l = false;
			t_rv2p = false;


			t_rv6l = (t_rv6l + tc);
			t_rv6p = (t_rv6p + tc);

			//releasing left
			if (t_rv6l >= 0.5)
			{
				delta_stv_l = delta_stv_l + Ddelta_stv;
			}

			//releasing right
			if (t_rv6p >= 0.5)
			{
				delta_stv_p = delta_stv_p + Ddelta_stv;
			}

			//releasing nose
			delta_stv_n = delta_stv_n + Ddelta_stv;

			//if sashes are open
			//left
			if (delta_stv_l >= 90.0)
			{
				delta_stv_l = 90.0;
			}

			//right
			if (delta_stv_p >= 90.0)
			{
				delta_stv_p = 90.0;
			}

			//nose
			if (delta_stv_n >= 90.0)
			{
				delta_stv_n = 90.0;
			}
		} 

		t_rv6l = false;
		t_rv6p = false;

		if (GK_ush == true)
		// intake cycle
		{
			//nose intake
			if (delta_sh_n == false)
			{
				delta_stv_n = delta_stv_n - Ddelta_stv;
			}

			if (delta_stv_n <= 0)
			{
				delta_stv_n = false;
			}

			//left intake
			if (delta_sh_l == 0.0)
			{
				t_rv2l = t_rv2l + tc;
			}
			else
			{
				t_rv2l = false;
			}

			if (t_rv2l >= 0.5)
			{
				delta_stv_l = delta_stv_l - Ddelta_stv;
			}

			if (delta_stv_l <= 0.0)
			{
				delta_stv_l = 0.0;
			}

			//right intake
			if (delta_sh_p == 0.0)
			{
				t_rv2p = t_rv2p + tc;
			}
			else
			{
				t_rv2p = false;
			}

			if (t_rv2p >= 0.5)
			{
				delta_stv_p = delta_stv_p - Ddelta_stv;
			}

			if (delta_stv_p <= 0.0)
			{
				delta_stv_p = 0.0;
			}
		}
	}
	else
	// Emergency release
	{
	if (P_bal_l >= 60.0)
	{
		Ddelta_stv_l = two_points_to_Y(P_bal_l, 60.0, 150.0, 0.0, 30.0);
	}

	if (P_bal_p >= 60.0)
	{
		Ddelta_stv_p = two_points_to_Y(P_bal_p, 60.0, 150.0, 0.0, 30.0);
	}

	if (P_bal_per >= 60.0)
	{
		Ddelta_stv_n = two_points_to_Y(P_bal_per, 60.0, 150.0, 0.0, 30.0);
	}

	// emergency left release
	if (GK_avl == true)
	{
		t_rv8n = t_rv8n + tc;

		//releasing left
		if (t_rv8n >= 0.5)
		{
			delta_stv_l = delta_stv_l + Ddelta_stv_l;
		}
		//if sashes are open
		//left
		if (delta_stv_l >= 90.0)
		{
			delta_stv_l = 90.0;
		}
	}
	else
	{
		t_rv8n = false;
	}

	// emergency right release
	if (GK_avp == true)
	{
		t_rv8n = t_rv8n + tc;

		//releasing left
		if (t_rv8n >= 0.5)
		{
			delta_stv_p = delta_stv_p + Ddelta_stv_p;
		}
		//if sashes are open
		//right
		if (delta_stv_p >= 90.0)
		{
			delta_stv_p = 90.0;
		}
	}
	else
	{
		t_rv8n = false;
	}
	// emergency nose release
	if (GK_avn == true)
	{
		t_rv8n = t_rv8n + tc;

		//releasing nose
		if (t_rv8n >= 0.5)
		{
			delta_stv_n = delta_stv_n + Ddelta_stv_n;
		}
		//if sashes are open
		//nose
		if (delta_stv_n >= 90.0)
		{
			delta_stv_n = 90.0;
		}
	}
	else
	{
		t_rv8n = false;
	}

	}
}
#include "linear_algorithm.h"
#include "LandingGear_PrimalRacksCards.h"

int RacksCardsLogic()
{
	if (GK_oovsh == false)
	{
		if (Pgs2 >= 130.0)
		{
			Ddelta_tel = two_points_to_Y(Pgs2, 130.0, 280.0, 0.0, 0.25);
		}
		else
		{
			Ddelta_tel = false;
		}

		if (GK_vsh == false)
		{
			// left card moving
			t_rv7l = 0.0;

			if (GK_ush == true && fi_delta_sh_l == 1.0)
			{
				delta_tel_l = delta_tel_l - Ddelta_tel;
			}
			if (delta_tel_l <= 0.0)
			{
				delta_tel_l = 0.0;
			}

			// right card moving
			t_rv7p = 0.0;

			if (GK_ush == true && fi_delta_sh_p == 1.0)
			{
				delta_tel_p = delta_tel_p - Ddelta_tel;
			}
			if (delta_tel_p <= 0.0)
			{
				delta_tel_p = 0.0;
			}
		}
		else
		{
			// if valve are closed
			// left
			if (delta_stv_l == 90.0)
			{
				t_rv7l = t_rv7l + tc;
			}
			else
			{
				t_rv7l = 0.0;
			}

			if (t_rv7l >= 0.5 && delta_sh_l >= 0.4)
			{
				delta_tel_l = delta_tel_l + Ddelta_tel;
			}

			if (delta_tel_l >= 1.0)
			{
				delta_tel_l = 1.0;
			}

			// right
			if (delta_stv_p == 90.0)
			{
				t_rv7p = t_rv7p + tc;
			}
			else
			{
				t_rv7p = 0.0;
			}

			if (t_rv7p >= 0.5 && delta_sh_p >= 0.4)
			{
				delta_tel_p = delta_tel_p + Ddelta_tel;
			}

			if (delta_tel_p >= 1.0)
			{
				delta_tel_p = 1.0;
			}
		}
	}
	else
	{
		Ddelta_tel = a;

		//left card
		if (delta_sh_l >= 0.4)
		{
			delta_tel_l = delta_tel_l + Ddelta_tel;
			if (delta_tel_l >= 1.0)
			{
				delta_tel_l = 1.0;
			}
		}

		//right card
		if (delta_sh_p >= 0.4)
		{
			delta_tel_p = delta_tel_p + Ddelta_tel;
			if (delta_tel_p >= 1.0)
			{
				delta_tel_p = 1.0;
			}
		}
	}
}
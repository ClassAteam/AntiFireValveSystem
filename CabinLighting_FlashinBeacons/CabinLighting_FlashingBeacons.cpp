#include "CabinLighting_FlashingBeacons.h"
int FlashingBeaconsLogic()
{
	if (Ush1p >= 18.0)
	{
		
		// S2 100% mode
		if (S2_3341 == 3)
		{
			PVMN10 = false;
			PVMV10 = false;

			t1 = t1 + t_delta;

			if (t1 >= 0.6)
			{
				PVMN100 = true;
				PVMV100 = false;

				t2 = t2 + t_delta;
			}
			else
			{
				PVMN100 = false;
				PVMV100 = true;

				t2 = 0.0;
			}

			if (t2 >= 0.6)
			{
				t1 = 0.0;
			}

		}

		// S2 low mode
		if (S2_3341 == 4)
		{
			if (P2_OB_P_L_OP == false ||
				PRD1dv77 ==true && PRD4dv77 == true && F32_3250 == true)
			{
				PVMN100 = false;
				PVMV100 = false;
				t3 = t3 + t_delta;
			}
			else
			{
				PVMN100 = false;
				PVMV100 = false;
				PVMN10 = false;
				PVMV10 = false;
				t1 = t2 = t3 = t4 = false;
			}

			if (t3 >= 0.6)
			{
				PVMN10 = true;
				PVMV10 = false;
				t4 = t4 + t_delta;
			}
			
			if (t4 >= 0.6)
			{
				t3 = false;
			}

		}
		else
		{
			PVMN100 = false;
			PVMV100 = false;
			PVMN10 = false;
			PVMV10 = false;
			t1 = t2 = t3 = t4 = false;
		}

	}
}
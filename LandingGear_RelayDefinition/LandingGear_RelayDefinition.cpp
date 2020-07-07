#include "LandingGear_RelayDefinition.h"
int RelayLogic()
{
	// Presure definition
	if (Pgs2 >= 130.0)
	{
		if (GK_oovsh == true)
		{
			Plv = 30.0;
			Plu = 30.0;
			if (GK_vsh == false)
			{
				if (GK_ush == false)
				{
					Plv = 30.0;
					Plu = 30.0;
				}
				else
				{
					Plv = 30.0;
					Plu = Pgs2;
				}
			}
			else
			{
				Plv = Pgs2;
				Plu = 30.0;
			}
		}
		else
		{
			Plv = 30.0;
			Plu = 30.0;
		}
	}

	// Presure signals
	PSDVV = false;
	S46_3230 = 0;
	PSDVU = false;
	S47_3230 = 0;

	// Presure signal intake
	if (GK_vsh == true)
	{
		if (Plv >= 130.0)
		{
			PSDVV = true;
			S46_3230 = 1;
		}
	}

	// Presure signal release
	if (GK_vsh == true)
	{
		if (Plv >= 130.0)
		{
			PSDVV = true;
			S46_3230 = 1;
		}
	}

	if (Ush2dpl >= 19.0)
	{
		F16_3230 = true;
		F13_3230 = true;
		F113_3230 = true;

		K2_3230 = false;
		K3_3230 = false;
		K22_3230 = false;

		// clocks definition
		if (S2_3230 == 3)
		{
			if (PSDVV == false)
			{
				if (S3_3230 == 2)
				{
					t1 = 0.0;
				}
				else
				{
					t1 = t1 + tc;
				}
			}
			else
			{
				t1 = t1 + tc;
			}
		}
		else
		{
			if (PSDVU == true || S3_3230 == 2)
			{
				t1 = t1 + tc;
			}
			else
			{
				t1 = 0.0;
			}
		}

		// Landing is on
		if (t1 >= 60.0)
		{
			K1_3230 = true;
		}
		else
		{
			K1_3230 = false;
		}

		// landing common managing if off 
		if (S1_3230 == 3)
		{
			//release = true
			if (S2_3230 == 2)
			{
				F13_3230 = true;
			}
			//intake = true
			else
			{
				F113_3230 = true;
			}

			//toggling release clue
			if (F13_3230 == true)
			{
				if (K4_3230_1211 == true || otkaz_ne_vikl_avt_pos_vip_shas == true)
				{
					K22_3230 = true;
				}
			}

			// additional release clues on each rack
			if (K22_3230 == true)
			{
				//left
				if (S42_3230 == 2 && S51_3230 == 2)
				{
					K2_3230 = true;
				}
				//left
				if (S43_3230 == 1 && S52_3230 == 1)
				{
					K3_3230 = true;
				}
				//right
				if (S44_3230 == 1 && S53_3230 == 1)
				{
					K28_3230 == true;
				}
				//right
				if (S45_3230 == 1 && S54_3230 == 1)
				{
					K29_3230 = true;
				}
			}

		}
		
		//voltage check 1
		if (K22_3230 == true && K5_3230 == true)
		{
			F115_3230 = true;
		}
		else
		{
			F115_3230 = false;
		}

		//voltage check 2
		if (F113_3230 == true && K4_3230_2223 == true)
		{
			F114_3230 = true;
		}
		else
		{
			F114_3230 = false;
		}

		//resolving forward voltage clues by 1st result
		if (F115_3230 == true)
		{
			K4_3230_VG = true;
			K4_3230_1213 = true;
			K4_3230_2223 = true;

			K4_3230_AB = false;
			K4_3230_1211 = false;
			K4_3230_2221 = false;
		}

		//resolving forward voltage clues by 2st result
		if (F114_3230 == true)
		{
			K4_3230_VG = false;
			K4_3230_1213 = false;
			K4_3230_2223 = false;

			K4_3230_AB = true;
			K4_3230_1211 = true;
			K4_3230_2221 = true;
		}

		//release mode are on or not
		if (K22_3230 == true && K6_3230 == true && S9_3230 == 1
			&& S7_3230 == 1 && S5_3230 == 1 && S8_3230 == 1)
		{
			t2 = t2 + tc;

			if (t2 >= 15.0)
			{
				K5_3230 = true;
			}
		}
		else
		{
			t2 = 0.0;
			K5_3230 = false;
		}

	}

	// the locking resolving
	if (F113_3230 == true && K9_3230 == true
		&& K10_3230 == true && K8_3230_1112 == true)
	{
		if (K30_3230 == true || S4_3230 == 1 && S6_3230 == 1)
		{
			K30_3230 = true;
			K23_3230 = true;
		}
		else
		{
			K23_3230 = false;
		}
	}
	else
	{
		K30_3230 == false;
	}
	
	//additional intake primal racks
	K7_3230 = false;
	K11_3230 = false;
	K12_3230 = false;

	//resolving clue of additional intake
	if (K23_3230 == true)
	{
		if (S13_3230 == 1 && S15_3230 == 1)
		{
			K11_3230 = true;
		}

		if (S14_3230 == 1 && S16_3230 == 1)
		{
			K12_3230 = true;
		}

		//clocking
		if (K44_3230 == true && K45_3230 == true && K46_3230 == true)
		{
			t3 = t3 + tc;
		}
		else
		{
			t3 = 0.0;
		}

		//resolving intake mode clue
		if (t3 >= 15.0)
		{
			K7_3230 = true;
		}
		else
		{
			K7_3230 = false;
		}

		//voltage clues by intake mode
		if (K7_3230 == true)
		{
			K8_3230_AB = true;
			K8_3230_1112 = false;
			K8_3230_2223 = true;
		}

	}

	//voltage clues by other conditions
	if (F13_3230 == true && K8_3230_2223 == true)
	{
		K8_3230_VG = true;
		K8_3230_1112 = true;
		K8_3230_2223 = false;
	}

}
#include "AntiFreezeSystemHeader.h"

int AirIntakeWarmup()
{
		// K56 toggle
		if (F34_3020 || K14_3020 || K16_3020 || K19_3020 || K20_3020)
		{
			K56_3020 = true;
		}
		else
		{
			K56_3020 = false;
		}

		K22_3020 = false;

		// K57 toggle
		if (F320_3020 || K21_3020 || K23_3020 || K25_3020 || K28_3020)
		{
			K57_3020 = true;
		}
		else
		{
			K57_3020 = false;
		}

		K29_3020 = false;

		// K58 toggle
		if (F330_3020 || K30_3020 || K32_3020 || K35_3020 || K36_3020)
		{
			K58_3020 = true;
		}
		else
		{
			K58_3020 = false;
		}

		K40_3020 = false;

		// K59 toggle
		if (F340_3020 || K37_3020 || K39_3020 || K41_3020 || K44_3020)
		{
			K59_3020 = true;
		}
		else
		{
			K59_3020 = false;
		}

		K46_3020 = false;

		// K22 toggle
		
		if (F32_3020 && K56_3020 == false)
		{
			t22 = t22 + tc;

			if (t22 >= 1.0)
			{
				K22_3020 = true;
			}
			else
			{
				K22_3020 = false;
			}
		}
		else
		{
			t22 = false;
		}
		// K29 toggle
		
		if (F319_3020 && K57_3020 == false)
		{
			t29 = t29 + tc;

			if (t29 >= 1.0)
			{
				K29_3020 = true;
			}
			else
			{
				K29_3020 = false;
			}
		}
		else
		{
			t29 = false;
		}

		// K40 toggle
		
		if (F356_3020 && K58_3020 == false)
		{
			t40 = t40 + tc;

			if (t40 >= 1.0)
			{
				K40_3020 = true;
			}
			else
			{
				K40_3020 = false;
			}
		}
		else
		{
			t40 = false;
		}

		// K46 toggle
		
		if (F353_3020 && K59_3020 == false)
		{
			t46 = t46 + tc;

			if (t46 >= 1.0)
			{
				K46_3020 = true;
			}
			else
			{
				K46_3020 = false;
			}
		}
		else
		{
			t46 = false;
		}

		//BSS824X1z toggle
		if (Usho1p >= 18.0 && K22_3020 == true)
		{
			BSS824X1z = true;
		}
		//BSS824X1BB toggle
		if (Usho1p >= 18.0 && K29_3020 == true)
		{
			BSS824X1BB = true;
		}
		//BSS824X1DD toggle
		if (Usho1p >= 18.0 && K40_3020 == true)
		{
			BSS824X1DD = true;
		}
		//BSS824X1FF toggle
		if (Usho1p >= 18.0 && K46_3020 == true)
		{
			BSS824X1FF = true;
		}

		//PONdv1, POB1dv1, POB2dv1, POB3dv1 toggle
		if (Ushpl >= 106.0)
		{
			if (K14_3020)
			{
				PONdv1 = true;
			}
			else
			{
				PONdv1 = false;
			}

			if (K16_3020)
			{
				POB1dv1 = true;
			}
			else
			{
				POB1dv1 = false;
			}

			if (K19_3020)
			{
				POB2dv1 = true;
			}
			else
			{
				POB2dv1 = false;
			}

			if (K20_3020)
			{
				POB3dv1 = true;
			}
			else
			{
				POB3dv1 = false;
			}
		}
		else
		{
			PONdv1 = false;
			POB1dv1 = false;
			POB2dv1 = true;
			POB3dv1 = true;
			if (Ush1l >= 18.0 && S3_3080)
			{
				PVOVNA1 = true;
			}
			else
			{
				PVOVNA1 = false;
			}
		}
		//PONdv2, POB1dv2, POB2dv2, POB3dv2 toggle
		if (Ushpl >= 106.0)
		{
			if (K21_3020)
			{
				PONdv2 = true;
			}
			else
			{
				PONdv2 = false;
			}

			if (K32_3020)
			{
				POB1dv2 = true;
			}
			else
			{
				POB1dv2 = false;
			}

			if (K35_3020)
			{
				POB2dv2 = true;
			}
			else
			{
				POB2dv2 = false;
			}

			if (K36_3020)
			{
				POB3dv2 = true;
			}
			else
			{
				POB3dv2 = false;
			}
		}
		else
		{
			PONdv2 = false;
			POB1dv2 = false;
			POB2dv2 = true;
			POB3dv2 = true;
			if (Ush1p >= 18.0 && S4_3080)
			{
				PVOVNA2 = true;
			}
			else
			{
				PVOVNA2 = false;
			}
		}
		//PONdv3, POB1dv3, POB2dv3, POB3dv3 toggle
		if (Ushpp >= 106.0)
		{
			if (K30_3020)
			{
				PONdv3 = true;
			}
			else
			{
				PONdv3 = false;
			}

			if (K23_3020)
			{
				POB1dv3 = true;
			}
			else
			{
				POB1dv3 = false;
			}

			if (K25_3020)
			{
				POB2dv3 = true;
			}
			else
			{
				POB2dv3 = false;
			}

			if (K28_3020)
			{
				POB3dv3 = true;
			}
			else
			{
				POB3dv3 = false;
			}
		}
		else
		{
			PONdv3 = false;
			POB1dv3 = false;
			POB2dv3 = true;
			POB3dv3 = true;
			if (Ush1p >= 18.0 && S5_3080)
			{
				PVOVNA3 = true;
			}
			else
			{
				PVOVNA3 = false;
			}
		}
		//PONdv4, POB1dv4, POB2dv4, POB3dv4 toggle
		if (Ushpp >= 106.0)
		{
			if (K37_3020)
			{
				PONdv4 = true;
			}
			else
			{
				PONdv4 = false;
			}

			if (K39_3020)
			{
				POB1dv4 = true;
			}
			else
			{
				POB1dv4 = false;
			}

			if (K41_3020)
			{
				POB2dv4 = true;
			}
			else
			{
				POB2dv4 = false;
			}

			if (K44_3020)
			{
				POB3dv4 = true;
			}
			else
			{
				POB3dv4 = false;
			}
		}
		else
		{
			PONdv4 = false;
			POB1dv4 = false;
			POB2dv4 = true;
			POB3dv4 = true;
			if (Ush2p >= 18.0 && S5_3080)
			{
				PVOVNA4 = true;
			}
			else
			{
				PVOVNA4 = false;
			}
		}

		if (Usho1p >= 18.0)
		{
			BSS825PR = true;
		}
		else
		{
			BSS825PR = false;
		}

		POV3dv1 = (PONdv1 * 35) + (POB1dv1 * 40) +
			(POB2dv1 * 40) + (POB3dv1 * 30);

		POV3dv2 = (PONdv2 * 35) + (POB1dv2 * 40) +
			(POB2dv2 * 40) + (POB3dv2 * 30);

		POV3dv3 = (PONdv3 * 35) + (POB1dv3 * 40) +
			(POB2dv3 * 40) + (POB3dv3 * 30);

		POV3dv4 = (PONdv4 * 35) + (POB1dv4 * 40) +
			(POB2dv4 * 40) + (POB3dv4 * 30);
}

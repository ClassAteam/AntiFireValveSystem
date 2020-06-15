#include "AntiFreezeSystemHeader.h"

int AirIntakeLogic()
{
	F32_3020 = false;
	//F32 toggle
	if (Usho1p < 18.0 && F19_3020 || F110_3020 || F134_3020 == false)
	{
		F32_3020 = false;
	}
	else
	{
		F32_3020 = true;
	}

	F319_3020 = F353_3020 = F356_3020 = F32_3020;
	//K52, K54, K55 toggle
	//1
	if (Usho1p >= 18.0 && S2_3020 == 2)
	{
		K52_3020 = true;
	}
	else
	{
		K52_3020 = false;
	}
	//2
	if (Usho1p >= 18.0 && S3_3020 == 2)
	{
		K52_3020 = true;
	}
	else
	{
		K52_3020 = false;
	}
	//3
	if (Usho1p >= 18.0 && S4_3020 == 2)
	{
		K54_3020 = true;
	}
	else
	{
		K54_3020 = false;
	}
	//4
	if (Usho1p >= 18.0 && S5_3020 == 2)
	{
		K55_3020 = true;
	}
	else
	{
		K55_3020 = false;
	}

	// F34_3020, F320_3020, F330_3020, F340_3020 toggle
	//1
	if (F32_3020 == true && K52_3020 == false && (!OTKAZ_vtsepiob_pos1dv) && Ushpl >= 104.0)
	{
		F34_3020 = true;
	}
	else
	{
		F34_3020 = false;
	}
	//2
	if (F319_3020 == true && K53_3020 == false && (!OTKAZ_vtsepiob_pos2dv) && Ushpl >= 104.0)
	{
		F320_3020 = true;
	}
	else
	{
		F320_3020 = false;
	}
	//3
	if (F356_3020 == true && K54_3020 == false && (!OTKAZ_vtsepiob_pos3dv) && Ushpp >= 104.0)
	{
		F330_3020 = true;
	}
	else
	{
		F330_3020 = false;
	}

	//4
	if (F353_3020 == true && K55_3020 == false && (!OTKAZ_vtsepiob_pos4dv) && Ushpp >= 104.0)
	{
		F340_3020 = true;
	}
	else
	{
		F340_3020 = false;
	}
	//K14, K21, K30, K37 toggle
	//1
	if (F110_3020 && F34_3020)
	{
		K14_3020 = true;
	}
	else
	{
		K14_3020 = false;
	}
	//2
	if (F110_3020 && F320_3020)
	{
		K21_3020 = true;
	}
	else
	{
		K21_3020 = false;
	}

	//3
	if (F110_3020 && F330_3020)
	{
		K30_3020 = true;
	}
	else
	{
		K30_3020 = false;
	}
	//4
	if (F110_3020 && F340_3020)
	{
		K37_3020 = true;
	}
	else
	{
		K37_3020 = false;
	}

	// K16, K23, K32, K39 toggle
	//1
	if (F34_3020 == true && F110_3020 == false && F19_3020 == true)
	{
		K16_3020 = true;
	}
	else
	{
		K16_3020 = false;
	}
	//2
	if (F320_3020 == true && F110_3020 == false && F19_3020 == true)
	{
		K23_3020 = true;
	}
	else
	{
		K23_3020 = false;
	}
	//3
	if (F330_3020 == true && F110_3020 == false && F19_3020 == true)
	{
		K32_3020 = true;
	}
	else
	{
		K32_3020 = false;
	}
	//4
	if (F340_3020 == true && F110_3020 == false && F19_3020 == true)
	{
		K39_3020 = true;
	}
	else
	{
		K39_3020 = false;
	}
	//K19, K25, K35, K41 toggle
	//1
	if (F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F34_3020 == true)
	{
		K19_3020 = true;
	}
	else
	{
		K19_3020 = false;
	}
	//K19, K25, K35, K41 toggle
	//2
	if (F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F320_3020 == true)
	{
		K25_3020 = true;
	}
	else
	{
		K25_3020 = false;
	}
	//3
	if (F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F330_3020 == true)
	{
		K35_3020 = true;
	}
	else
	{
		K35_3020 = false;
	}
	//4
	if (F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F340_3020 == true)
	{
		K41_3020 = true;
	}
	else
	{
		K41_3020 = false;
	}
	//K20, K28, K36, K44 toggle
	//1
	if (F134_3020 == true && F125_3020 == false && F19_3020 == false 
		&& F110_3020 == false && F34_3020 == true)
	{
		K20_3020 = true;
	}
	else
	{
		K20_3020 = false;
	}
	//2
	if (F134_3020 == true && F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F320_3020 == true)
	{
		K28_3020 = true;
	}
	else
	{
		K28_3020 = false;
	}
	//3
	if (F134_3020 == true && F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F330_3020 == true)
	{
		K36_3020 = true;
	}
	else
	{
		K36_3020 = false;
	}
	//4
	if (F134_3020 == true && F125_3020 == false && F19_3020 == false
		&& F110_3020 == false && F340_3020 == true)
	{
		K44_3020 = true;
	}
	else
	{
		K44_3020 = false;
	}

}

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"
#include <math.h>

bool firstiteration = true;
void logic()
{
	//			initialization values

	PAVARR = false;
	PPP = false;
	PGK = false;
	K1_2131 = false;
	K2_2131 = false;
	K4_2131 = false;
	Ph_ = Ph * 0, 00136;
	Phmsa = presure_at_height(Ph_msa);
	

	if (Ush2dpl >= 18.0)
	{
		if (Ph_msa - Pkab >= 0.7)
		{
			K1_2131 = true;
		}
		else
		{
			K1_2131 = false;
		}

		if (S1_2131 == 2)
		{
			PPP = true;
		}
		else
		{
			if (S1_2131 == 3)
			{
				PAVARR = true;
				K4_2131 = true;
			}
		}
	}

	if (H < 8000.0 && S2_2131 == 5)
	{
		PGK = true;
	}

	if (K4_2131 == false && Pkab <= 0.34)
	{
		K2_2131 = true;
	}

	if (K1_2131 == true)
	{
		BSS838X7A = true;
		t1 = t1 + t_c;

		if (t1 >= 0.192)
		{
			t2 = t2 + t_c;
			BSS838X7A = false;
			
			if (t2 >= 0.192)
			{
				t1 = false;
			}
		}
	}
	else
	{
		t1 = t2 = false;
		SKD_300 = false;
	}

	if (K2_2131 == true)
	{
		SKD_301 = true;
		t3 = t3 + t_c;
	}
	else
	{
		SKD_301 = false;
		BSS838X5MM = false;
		BSS824X1G = false;
		BSS824X1J = false;
		t3 = t4 = 0.0;
	}

	if (t3 >= 0.192)
	{
		t4 = t4 + t_c;
		BSS838X5MM = false;
		BSS824X1G = false;
		BSS824X1J = false;

		if (t4 >= 0.192)
		{
			t3 = false;
		}
	}
	else
	{
		BSS838X5MM = true;
		BSS824X1G = true;
		BSS824X1J = false;
		t4 = false;
	}
	if (firstiteration)
	{
		Pkab = Ph_;
		Nkab = 0.0;
		Pkab_delta = 0.0;
		Pkab_zad = Ph;
		firstiteration = false;
	}
	else
	{
		if (otkaz_razgermetizatsiya)
		{
			Pkab_zad = Ph_;
			Vkab = (0.0068 / 5);
		}
		else
		{
			if (PPVSKV)
			{
				if (lyukizagermetizirovany)
				{
					if (otkaz_perenadduv)
					{
						Pkab_zad = Phmsa + 0.8;
						Vkab = (0.0068 / 5);
					}
					else
					{
						if (PAVARR)
						{
							Pkab_zad = Ph_;
						}
						else
						{
							if (PPP && H >= 7300)
							{
								Pkab_zad = Ph_msa + 0.36;
							}
							else
							{
								if (PGK)
								{
									if ((H >= -500) && (H <= 3700))
									{
										Pkab_zad = Phmsa + 0.12;
									}
									else
									{
										if ((H > 2400) && (H < 11500))
										{
											Pkab_zad = 0.77;
										}
										else
										{
											if ((H > 11500) && (H < 15000))
											{
												Pkab_zad = (0.77 + (0.33 * (11.5 - H)));
											}
											else
											{
												Pkab_zad = (Phmsa + 0.36);
											}
										}
									}
								}
								else
								{
									if ((H >= -500) && (H <= 2400))
									{
										Pkab_zad = Ph_;
									}
									else
									{
										if ((H > 2400) && (H < 11500))
										{
											Pkab_zad = 0.77;
										}
										else
										{
											if ((H > 11500) && (H < 15000))
											{
												Pkab_zad = (0.77 + (0.33 * (11.5 - H)));
											}
											else
											{
												Pkab_zad = (Phmsa + 0.36);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					Pkab_zad = Ph_;
					Vkab = (0.0068 / 5);
				}
			}
			else
			{
				Pkab_zad = Ph_;
				Vkab = (0.0068 / 5);
			}
		}
	}
	if (!firstiteration)
	{
		if (Pkab_zad >= Pkab_zad_buf)
		{
			Vkab = (0.0068 / 5);
		}
		else
		{
			Vkab = (0.0136 / 10);
		}
		Pkab_zad_buf = Pkab_zad;
	}
	if (!firstiteration)
	{
		if ((Pkab_zad - Pkab) >= 0.01)
		{
			if (Pkab < Pkab_zad)
			{
				Pkab = (Pkab + (Vkab / t_c));
			}
			else
			{
				Pkab = (Pkab - (Vkab / t_c));
			}
		}
	}

	Nkab == presure_at_height(Pkab);

	Pkab_delta = Pkab - Ph_;

	if (Nkab > 2000)
	{
		Nkab_ind = 2000;
	}
	else
	{
		if (Nkab < 0.0)
		{
			Nkab_ind = 0.0;
		}
		else
		{
			Nkab_ind = (Nkab / 1000);
		}
	}

	if (Pkab_delta > 0.8)
	{
		Pkab_ind_delta = 0.8;
	}
	else
	{
		if (Pkab < (-0.06))
		{
			Pkab_ind_delta = (-0.06);
		}
		else
		{
			Pkab_ind_delta = Pkab_delta;
		}
	}

















}
#pragma once
extern bool PRBSS_811, PRBSS_812, PRBSS_913, PVkCSOZHLx2, PBVkCSOZHLL_x2, PVkCSOZHLLx2_sum, PCSOZHLL, PVkCSOKLLy2, PBVkCSOKLLy2,
PVkCSOKLLy2_sum, PCSOKLL, PKLLL, BSS811x1, BSS811x2, BSS811y1, BSS811y2, BSS811z1, BSS811z2, USASLL;
extern double Ush1dpl, Ush2dpl, Ush1dpp, Ush2dpp; 
extern int S1_3364, alpha_rrya7ll, S5_03364;

void logic();

double USASL_to_alpha(double alpha)
{
	double result;
	result = 0.25 * alpha + 0.75;
	return result;
}








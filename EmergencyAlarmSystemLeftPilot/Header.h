#pragma once
extern bool PRBSS_811, PRBSS_812, PRBSS_913, PVkCSOKLLy1, PVkCSOKLLy2, PVkCSOKLLy3, PVkCSOKLLy4, PVkCSOKLLy5, PVkCSOKLLy6, PVkCSOKLLy7,
PCSOKLL, PKLLL, PCSOZHLL,
//Yellow
PVkCSOZHLLx1, PVkCSOZHLLx2, PVkCSOZHLLx3, PVkCSOZHLLx4, PVkCSOZHLLx5, PVkCSOZHLLx6
, PVkCSOZHLLx7, PVkCSOZHLLx8, PVkCSOZHLLx9, PVkCSOZHLLx10, PVkCSOZHLLx11, PVkCSOZHLLx12, PVkCSOZHLLx13, PVkCSOZHLLx14, PVkCSOZHLLx15,
PVkCSOZHLLx16, PVkCSOZHLLx17, PVkCSOZHLLx18, PVkCSOZHLLx19, PVkCSOZHLLx20, PVkCSOZHLLx21, PVkCSOZHLLx22, PVkCSOZHLLx23, PVkCSOZHLLx24
, PVkCSOZHLLx25, PVkCSOZHLLx26,

PVkCSOZHLLy1, PVkCSOZHLLy2, PVkCSOZHLLy3, PVkCSOZHLLy4, PVkCSOZHLLy5, PVkCSOZHLLy6, PVkCSOZHLLy7, PVkCSOZHLLy8,

BSS811x1, BSS811x2, BSS811y1, BSS811y2, BSS811z1, BSS811z2, BSS811X1B, BSS811X1D, BSS811X1N,
BSS811X1R, BSS811X1T, BSS811X1V, BSS811X1b, BSS811X1d, BSS811X1f, BSS811X1DD, UPOR_DZ_TANGAZH_L, ZAKRILKI_PARIRUY, BSS811X1Y,
DZ_OTKL_DZ_TANGAZH, BSS811X1h, BSS811X1j, BSS811X1p, BSS811X1t, BSS811X1v, BSS811X1x, BSS811X1Z, BSS811X1z, SUR_GS1_OTKL, SUR_GS2_OTKL,
SUR_GS3_OTKL, SUR_GS4_OTKL, BSS811X2A, BSS811X2B, BSS811X2G, BSS811X2H, BSS811X2J, BSS811X2K, BSS811X2M, BSS811X2N, BSS811X2P, BSS811X2R,
BSS811X2c, BSS811X2n, BSS811X2m, BSS811X2L, BSS811X2r, BSS811X2S, BSS811X2T, BSS811X2V, BSS811X2X, BSS811X2Y, BSS811X2Z, BSS811X2a, BSS811X2d
, BSS811X2e, BSS811X2f, BSS811X2g, BSS812X5j, BSS812X5p, BSS812X5HH, KREN_VELIK, SVS_OTKAZ, INS_OTKAZ, alpha_pu_gamma_ogranich, NAZHMI_Rezervtormoza,
BSS812X6T, BSS812X6V, BSS812X6e, BSS812X6j, BSS812X6k, BSS812X6m, BSS812X6q, BSS812X6n,
//Red
BSS811X1E, BSS811X2C, BSS811X1G, BSS811X2D, BSS811X1J, BSS811X2E, BSS811X1L, BSS811X2F, BSS811X1n, BSS811X2U, BSS811X1r, BSS811X2W, BSS811X1BB,
BSS811X2b, BSS812X6S, BSS812X6U, BSS812X6g, BSS812X6h, BSS812X6i, PVkCSOKLLm1, PVkCSOKLLm2, PVkCSOKLLm3, PVkCSOKLLm4, PVkCSOKLLm5,

BSS812X5h, BSS812X5n, V_velika, V_mala, alpha_pu_predel,
//Green and white
BSS811X3A, BSS811X3C, BSS811X3D, BSS811X3E, NEYTRAL_kren, NEYTRAL_kurs, BSS811X2h, BSS811X2l, BSS811X2j, BSS811X2k, BSS811X2p, BSS811X2q,
BSS812X5B, BSS812X5D, BSS812X5E, BSS812X5G, BSS812X5J, BSS812X5L, BSS812X5N, BSS812X5R, BSS812X5T, BSS812X5V, BSS812X5X, BSS812X5Z, BSS812X5d,
BSS812X5t, BSS812X5r, BSS812X5x, BSS812X5z, BSS812X5BB, BSS812X5DD, BSS812X5FF, VKL_rezervtormoza, VKL_forsirtormoza,
BSS811X6A, BSS811X6B, BSS811X6C, BSS811X6D, BSS811X6E, BSS811X6F, BSS811X6G, BSS811X6H, BSS811X6J, BSS811X6K, BSS811X6L, BSS811X6M,
BSS811X6N, BSS811X6X, BSS811X6W, BSS811X6Y, BSS811X6a, BSS811X6b, BSS811X6c, BSS811X6d, BSS811X6p, BSS811X6r, BSS811X6f, BSS812X5KK;

extern double Ush1dpl, Ush2dpl, Ush1dpp, Ush2dpp, USASLL;
extern int S1_3364, alpha_rrya7ll, S5_03364, PVkCSOZHLLx_sum, PVkCSOKLLy_sum, PVkCSOZHLLy_sum, PVkCSOKLLm_sum ;

void logic();

double USASL_to_alpha(double alpha)
{
	double result;
	result = (0.25 * alpha) + 0.75;
	return result;
}







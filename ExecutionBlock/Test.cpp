#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <ostream>

bool PPBI2, K1, K3, K6, K9, K12, K24, K31, K32, K33, K34, K35, K42, K49, K50, K51, K53, K54, K57, K58, K60, K61, K67, PAPDvh6,
F25, F35, F45, F55, F65, F82, F92, F91, F101, F111, F121, F181, F911, F912, F913, F914, F915, F916, F917, F72, F82;

double Ush1dpl, Ush1dpp, Ush2dpl, Ush2dpp;

int AZSF9, AZSF10, AZSF18, AZSF11, AZSF12, S1, S2, S11, S13, S14, S15, PNU, PW1och_l, PW1och_o, PW2och, PW3och, OtkazSPZ,
pozhar_1dv, pozhar_2dv, pozhar_3dv, pozhar_4dv, peregrev_1dv, peregrev_2dv, peregrev_3dv, peregrev_4dv, pozhar_vsu, F135, F145, F155, F165;

void logic();

int printvalues()
{
	std::cout.setf(std::ios::right);
	std::cout << PKO << "=" << "PKO" << std::endl << PO1och << "=" << "PO1och" << std::endl << K24 << "=" << "K24" << std::endl
		<< K50 << "=" << "K50" << std::endl << K51 << "=" << "K51" << std::endl << K53 << "=" << "K53" << std::endl
		<< K54 << "=" << "K54" << std::endl << K57 << "=" << "K57" << std::endl << K58 << "=" << "K58" << std::endl
		<< K60 << "=" << "K60" << std::endl << K61 << "=" << "K61" << std::endl << K80 << "=" << "K80" << std::endl
		<< F11 << "=" << "F11" << std::endl << F25 << "=" << "F25" << std::endl << F35 << "=" << "F35" << std::endl
		<< F45 << "=" << "F45" << std::endl << F55 << "=" << "F55" << std::endl << F65 << "=" << "F65" << std::endl
		<< F72 << "=" << "F72" << std::endl << F132 << "=" << "F132" << std::endl << F91 << "=" << "F91" << std::endl
		<< F101 << "=" << "F101" << std::endl << F111 << "=" << "F111" << std::endl << F121 << "=" << "F121" << std::endl
		<< F181 << "=" << "F181" << std::endl << PW1och_o << "=" << "PW1och_o" << std::endl << PW2och << "=" << "PW2och" << std::endl
		<< PW3och << "=" << "PW3och" << std::endl << P2OBLOP << "=" << "P2OBLOP" << std::endl << PSA10_1 << "=" << "PSA10_1" << std::endl
		<< PSA10_2 << "=" << "PSA10_2" << std::endl << PSA19_1 << "=" << "PSA19_1" << std::endl << PSA19_2 << "=" << "PSA19_2" << std::endl
		<< Ushal << "=" << "Ushal" << std::endl << Ushap << "=" << "Ushap" << std::endl << S10 << "=" << "S10" << std::endl
		<< PF11 << "=" << "PF11" << std::endl << PF9 << "=" << "PF9" << std::endl << LzhSrabSigPrg1dv << "=" << "LzhSrabSigPrg1dv" << std::endl
		<< LzhSrabSigPrg2dv << "=" << "LzhSrabSigPrg2dv" << std::endl << LzhSrabSigPrg3dv << "=" << "LzhSrabSigPrg3dv" << std::endl
		<< LzhSrabSigPrg4dv << "=" << "LzhSrabSigPrg4dv" << std::endl << BSS811X1n << "=" << "BSS811X1n" << std::endl
		<< BSS811X1r << "=" << "BSS811X1r" << std::endl << BSS812X5h << "=" << "BSS812X5h" << std::endl << BSS812X5n << "=" << "BSS812X5n" << std::endl
		<< BSS811X1x << "=" << "BSS811X1x" << std::endl << BSS811X1z << "=" << "BSS811X1z" << std::endl
		<< BSS913X3E << "=" << "BSS913X3E" << std::endl << BSS913X3G << "=" << "BSS913X3G" << std::endl << BSS811X1B << "=" << "BSS811X1B" << std::endl
		<< BSS838X7G << "=" << "BSS838X7G" << std::endl << BSS811X1VV << "=" << "BSS811X1VV" << std::endl << BSS838X7C << "=" << "BSS838X7C" << std::endl
		<< BSS913X3J << "=" << "BSS913X3J" << std::endl << BSS926X1F << "=" << "BSS926X1F" << std::endl << BSS913X3L << "=" << "BSS913X3L" << std::endl
		<< BSS926X1h << "=" << "BSS926X1h" << std::endl << BSS913X3N << "=" << "BSS913X3N" << std::endl << BSS926X1j << "=" << "BSS926X1j" << std::endl
		<< BSS811X1v << "=" << "BSS811X1v" << std::endl << BSS811X1p << "=" << "BSS811X1p" << std::endl << BSS811X1t << "=" << "BSS811X1t" << std::endl
		<< BSS812X5j << "=" << "BSS812X5j" << std::endl << BSS812X5p << "=" << "BSS812X5p" << std::endl;
	return 0;
};

int main()
{
	std::vector<std::string> words;
	std::ifstream file("Values.txt");
	std::string word;

	while (std::getline(file, word))
	{
		if (word == "PKO")
		{
			std::cout << word;
			std::getline(file, word);
			PKO = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PO1och")
		{
			std::cout << word;
			std::getline(file, word);
			PO1och = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K24")
		{
			std::cout << word;
			std::getline(file, word);
			K24 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K50")
		{
			std::cout << word;
			std::getline(file, word);
			K50 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K51")
		{
			std::cout << word;
			std::getline(file, word);
			K51 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K53")
		{
			std::cout << word;
			std::getline(file, word);
			K53 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K54")
		{
			std::cout << word;
			std::getline(file, word);
			K54 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K57")
		{
			std::cout << word;
			std::getline(file, word);
			K57 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K58")
		{
			std::cout << word;
			std::getline(file, word);
			K58 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K60")
		{
			std::cout << word;
			std::getline(file, word);
			K60 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K61")
		{
			std::cout << word;
			std::getline(file, word);
			K61 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "K80")
		{
			std::cout << word;
			std::getline(file, word);
			K80 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F11")
		{
			std::cout << word;
			std::getline(file, word);
			F11 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F25")
		{
			std::cout << word;
			std::getline(file, word);
			F25 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F35")
		{
			std::cout << word;
			std::getline(file, word);
			F35 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F45")
		{
			std::cout << word;
			std::getline(file, word);
			F45 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F55")
		{
			std::cout << word;
			std::getline(file, word);
			F55 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F65")
		{
			std::cout << word;
			std::getline(file, word);
			F65 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F72")
		{
			std::cout << word;
			std::getline(file, word);
			F72 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F132")
		{
			std::cout << word;
			std::getline(file, word);
			F132 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F91")
		{
			std::cout << word;
			std::getline(file, word);
			F91 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F101")
		{
			std::cout << word;
			std::getline(file, word);
			F101 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F111")
		{
			std::cout << word;
			std::getline(file, word);
			F111 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F121")
		{
			std::cout << word;
			std::getline(file, word);
			F121 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "F181")
		{
			std::cout << word;
			std::getline(file, word);
			F181 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PW1och_o")
		{
			std::cout << word;
			std::getline(file, word);
			PW1och_o = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PW2och")
		{
			std::cout << word;
			std::getline(file, word);
			PW2och = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PW3och")
		{
			std::cout << word;
			std::getline(file, word);
			PW3och = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "P2OBLOP")
		{
			std::cout << word;
			std::getline(file, word);
			P2OBLOP = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PSA10_1")
		{
			std::cout << word;
			std::getline(file, word);
			PSA10_1 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PSA10_2")
		{
			std::cout << word;
			std::getline(file, word);
			PSA10_2 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PSA19_1")
		{
			std::cout << word;
			std::getline(file, word);
			PSA19_1 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PSA19_2")
		{
			std::cout << word;
			std::getline(file, word);
			PSA19_2 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "Ushal")
		{
			std::cout << word;
			std::getline(file, word);
			Ushal = stod(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "Ushap")
		{
			std::cout << word;
			std::getline(file, word);
			Ushap = stod(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "S10")
		{
			std::cout << word;
			std::getline(file, word);
			S10 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PF11")
		{
			std::cout << word;
			std::getline(file, word);
			PF11 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "PF9")
		{
			std::cout << word;
			std::getline(file, word);
			PF9 = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "LzhSrabSigPrg1dv")
		{
			std::cout << word;
			std::getline(file, word);
			LzhSrabSigPrg1dv = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "LzhSrabSigPrg2dv")
		{
			std::cout << word;
			std::getline(file, word);
			LzhSrabSigPrg2dv = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "LzhSrabSigPrg3dv")
		{
			std::cout << word;
			std::getline(file, word);
			LzhSrabSigPrg3dv = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "LzhSrabSigPrg4dv")
		{
			std::cout << word;
			std::getline(file, word);
			LzhSrabSigPrg4dv = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1n")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1n = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1r")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1r = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS812X5h")
		{
			std::cout << word;
			std::getline(file, word);
			BSS812X5h = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS812X5n")
		{
			std::cout << word;
			std::getline(file, word);
			BSS812X5n = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}

		if (word == "BSS811X1x")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1x = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1z")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1z = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS913X3E")
		{
			std::cout << word;
			std::getline(file, word);
			BSS913X3E = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS913X3G")
		{
			std::cout << word;
			std::getline(file, word);
			BSS913X3G = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1B")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1B = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1VV")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1VV = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS838X7C")
		{
			std::cout << word;
			std::getline(file, word);
			BSS838X7C = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS913X3J")
		{
			std::cout << word;
			std::getline(file, word);
			BSS913X3J = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS926X1F")
		{
			std::cout << word;
			std::getline(file, word);
			BSS926X1F = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS913X3L")
		{
			std::cout << word;
			std::getline(file, word);
			BSS913X3L = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS926X1h")
		{
			std::cout << word;
			std::getline(file, word);
			BSS926X1h = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS913X3N")
		{
			std::cout << word;
			std::getline(file, word);
			BSS913X3N = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS926X1j")
		{
			std::cout << word;
			std::getline(file, word);
			BSS926X1j = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1v")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1v = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1p")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1p = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS811X1t")
		{
			std::cout << word;
			std::getline(file, word);
			BSS811X1t = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS812X5j")
		{
			std::cout << word;
			std::getline(file, word);
			BSS812X5j = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
		if (word == "BSS812X5p")
		{
			std::cout << word;
			std::getline(file, word);
			BSS812X5p = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;
		}
	}
	std::cout << std::endl;
	logic();
	std::cout << "After logic()" << std::endl;
	printvalues();
	/*printvalues();*/
}
/*std::vector<std::string> lines;
	std::ifstream file("input.txt");

	std::string line;
	while (std::getline(file, line)) {
		if (!line.empty())
			lines.push_back(line);
	}
*/
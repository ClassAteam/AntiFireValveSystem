#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <ostream>

 bool PKO, PO1och, K24, K50, K51, K53, K54, K57, K58, K60, K61, K80;
 bool F11, F25, F35, F45, F55, F65, F72, F132, F91, F101, F111, F121, F181;
 bool PW1och_o, PW2och, PW3och, P2OBLOP;
 bool PSA10_1, PSA10_2, PSA19_1, PSA19_2;
 double Ushal, Ushap;
 int S10, PF11, PF9;
 bool LzhSrabSigPrg1dv, LzhSrabSigPrg2dv, LzhSrabSigPrg3dv, LzhSrabSigPrg4dv;
 bool BSS811X1n, BSS811X1r, BSS812X5h, BSS812X5n, BSS811X1x, BSS811X1z, BSS913X3E, BSS913X3G, BSS811X1B, BSS838X7G, BSS811X1VV, BSS838X7C, BSS913X3J, BSS926X1F
, BSS913X3L, BSS926X1h, BSS913X3N, BSS926X1j, BSS811X1v, BSS811X1p, BSS811X1t, BSS812X5j, BSS812X5p;

void logic();

//int printvalues()
//{
//	std::cout.setf(std::ios::right);
//	std::cout << std::setw(20) << PKO << std::setw(20) << PO1och << std::setw(20) << K24 << std::setw(20) << K50 << std::setw(20) << K51 
//		<< std::setw(20) << K53 << std::setw(20) << K54 << std::setw(20) << K57 << std::setw(20) << K58 << std::setw(20) << K60 
//		<< std::setw(20) << K61 << std::setw(20) << K80 << std::setw(20) << F11 << std::setw(20) << F25 << std::setw(20) << F35 
//		<< std::setw(20) <<F45 << std::setw(20) << F55 << std::setw(20) << F65 << std::setw(20) << F72 << std::setw(20) << F132 << std::setw(20) 
//		<< F91 << std::setw(20) << F101 << std::setw(20) << F111 << std::setw(20) << F121 << std::setw(20) << F181 
//		<< std::setw(20) << PW1och_o << std::setw(20) << PW2och << std::setw(20) << PW3och << std::setw(20) << P2OBLOP << std::setw(20) << PSA10_1
//		<< std::setw(20) << PSA10_2 << std::setw(20) << PSA19_1 << std::setw(20) << PSA19_2 << std::setw(20) << Ushal << std::setw(20) << Ushap 
//		<< std::setw(20) << S10 << std::setw(20) << PF11 << std::setw(20) << PF9 << std::setw(20) << LzhSrabSigPrg1dv << std::setw(20)
//		<< LzhSrabSigPrg2dv << std::setw(20) << LzhSrabSigPrg3dv << std::setw(20) << LzhSrabSigPrg4dv << std::setw(20) << BSS811X1n << std::setw(20) 
//		<< BSS811X1r << std::setw(20)<< BSS812X5h << std::setw(20) << BSS812X5n << std::setw(20) << BSS811X1x << std::setw(20) << BSS811X1z << std::setw(20) 
//		<< BSS913X3E << std::setw(20)
//		<< BSS913X3G << std::setw(20) << BSS811X1B << std::setw(20) << BSS838X7G << std::setw(20) << BSS811X1VV << std::setw(20) << BSS838X7C << std::setw(20)
//		<< BSS913X3J << std::setw(20) << BSS926X1F << std::setw(20) << BSS913X3L << std::setw(20) << BSS926X1h 
//		<< std::setw(20) << BSS913X3N << std::setw(20) << BSS926X1j << std::setw(20) << BSS811X1v << std::setw(20)
//		<< BSS811X1p << std::setw(20) << BSS811X1t << std::setw(20) << BSS812X5j << std::setw(20) << BSS812X5p << std::setw(20)<<std::endl;
//	return 0;
//};

int main()
{
	std::vector<std::string> words;
	std::ifstream file("Values.txt");
	std::string word;



	while (std::getline(file, word))
	{
		if (word == "PKO")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PKO = stoi(word);
			std::cout << std::endl;
			std::cout << word << std::endl;

		}
		if (word == "PO1och")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PO1och = stoi(word);
		}
		if (word == "K24")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K24 = stoi(word);
		}
		if (word == "K50")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K50 = stoi(word);
		}
		if (word == "K51")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K51 = stoi(word);
		}
		if (word == "K53")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K53 = stoi(word);
		}
		if (word == "K54")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K54 = stoi(word);
		}
		if (word == "K57")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K57 = stoi(word);
		}
		if (word == "K58")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K58 = stoi(word);
		}
		if (word == "K60")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K60 = stoi(word);
		}
		if (word == "K61")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K61 = stoi(word);
		}
		if (word == "K80")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			K80 = stoi(word);
		}
		if (word == "F11")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F11 = stoi(word);
		}
		if (word == "F25")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F25 = stoi(word);
		}
		if (word == "F35")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F35 = stoi(word);
		}
		if (word == "F45")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F45 = stoi(word);
		}
		if (word == "F55")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F55 = stoi(word);
		}
		if (word == "F65")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F65 = stoi(word);
		}
		if (word == "F72")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F72 = stoi(word);
		}
		if (word == "F132")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F132 = stoi(word);
		}
		if (word == "F91")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F91 = stoi(word);
		}
		if (word == "F101")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F101 = stoi(word);
		}
		if (word == "F111")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F111 = stoi(word);
		}
		if (word == "F121")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F121 = stoi(word);
		}
		if (word == "F181")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			F181 = stoi(word);
		}
		if (word == "PW1och_o")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PW1och_o = stoi(word);
		}
		if (word == "PW2och")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PW2och = stoi(word);
		}
		if (word == "PW3och")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PW3och = stoi(word);
		}
		if (word == "P2OBLOP")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			P2OBLOP = stoi(word);
		}
		if (word == "PSA10_1")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PSA10_1 = stoi(word);
		}
		if (word == "PSA10_2")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PSA10_2= stoi(word);
		}
		if (word == "PSA19_1")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PSA19_1 = stoi(word);
		}
		if (word == "PSA19_2")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PSA19_2 = stoi(word);
		}
		if (word == "Ushal")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			Ushal = stod(word);
		}
		if (word == "Ushap")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			Ushap= stod(word);
		}
		if (word == "S10")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			S10 = stoi(word);
		}
		if (word == "PF11")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PF11 = stoi(word);
		}
		if (word == "PF9")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			PF9 = stoi(word);
		}
		if (word == "LzhSrabSigPrg1dv")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			LzhSrabSigPrg1dv = stoi(word);
		}
		if (word == "LzhSrabSigPrg2dv")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			LzhSrabSigPrg2dv = stoi(word);
		}
		if (word == "LzhSrabSigPrg3dv")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			LzhSrabSigPrg3dv = stoi(word);
		}
		if (word == "LzhSrabSigPrg4dv")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			LzhSrabSigPrg4dv = stoi(word);
		}
		if (word == "BSS811X1n")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1n = stoi(word);
		}
		if (word == "BSS811X1r")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1r = stoi(word);
		}
		if (word == "BSS812X5h")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS812X5h = stoi(word);
		}
		if (word == "BSS812X5n")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS812X5n = stoi(word);
		}

		if (word == "BSS811X1x")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1x= stoi(word);
		}
		if (word == "BSS811X1z")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1z= stoi(word);
		}
		if (word == "BSS913X3E")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS913X3E= stoi(word);
		}
		if (word == "BSS913X3G")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS913X3G = stoi(word);
		}
		if (word == "BSS811X1B")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1B = stoi(word);
		}
		if (word == "BSS838X7G")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS838X7G= stoi(word);
		}
		if (word == "BSS811X1VV")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1VV = stoi(word);
		}
		if (word == "BSS838X7C")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS838X7C = stoi(word);
		}
		if (word == "BSS913X3J")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS913X3J = stoi(word);
		}
		if (word == "BSS926X1F")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS926X1F = stoi(word);
		}
		if (word == "BSS913X3L")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS913X3L = stoi(word);
		}
		if (word == "BSS926X1h")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS926X1h= stoi(word);
		}
		if (word == "BSS913X3N")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS913X3N = stoi(word);
		}
		if (word == "BSS926X1j")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS926X1j = stoi(word);
		}
		if (word == "BSS811X1v")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1v = stoi(word);
		}
		if (word == "BSS811X1p")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1p = stoi(word);
		}
		if (word == "BSS811X1t")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS811X1t = stoi(word);
		}
		if (word == "BSS812X5j")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS812X5j = stoi(word);
		}
		if (word == "BSS812X5p")
		{
			std::cout << std::setw(20) << std::right << word;
			std::getline(file, word);
			BSS812X5p = stoi(word);
		}
		
	}
	std::cout << std::endl;
	/*printvalues();*/
	logic();
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
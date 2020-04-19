#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <ostream>

bool K15, K16, K19, K20, K23, K24, K25, K26, K27, K28, K50, K53, K51, K54, K57,
K58, K60, K61, F25, F35, F45, F55, F65, F72, F82, F132, F142;

double UbusL, UbusR, Uacc;

int F7, F8, S3, S4, S5, S6, S7, S8, S9;

void logic();

int printvalues()
{
	std::cout.setf(std::ios::right);
	std::cout << std::setw(5) << K15 << std::setw(5) << K16 << std::setw(5) << K19 << std::setw(5) << K20 << std::setw(5) << K23 << std::setw(5) << K24 << std::setw(5) << K25 << std::setw(5) << K26 << std::setw(5) << K27 << std::setw(5) << K28 << std::setw(5) << K50 << std::setw(5) << K53 << std::setw(5) << K51 << std::setw(5) << K54 << std::setw(5) << K57 << std::setw(5) <<
		K58 << std::setw(5) << K60 << std::setw(5) << K61 << std::setw(5) << F25 << std::setw(5) << F35 << std::setw(5) << F45 << std::setw(5) << F55 << std::setw(5) << F65 << std::setw(5) << F72 << std::setw(5) << F82 << std::setw(5) << F132 << std::setw(5) << F142 << std::setw(5) << UbusL << std::setw(5) << UbusR << std::setw(5) << Uacc
		<< std::setw(5) << F7 << std::setw(5) << F8 << std::setw(5) << S3 << std::setw(5) << S4 << std::setw(5) << S5 << std::setw(5) << S6 << std::setw(5) << S7 << std::setw(5) << S8 << std::setw(5) << S9 << std::endl;
	return 0;
};

int main()
{
	std::vector<std::string> words;
	std::ifstream file("Values.txt");
	std::string word;
	


	while (std::getline(file, word))
	{
		if (word == "K15")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K15 = stoi(word);
			
		}
		if (word == "K16")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K16 = stoi(word);
		}
		if (word == "K19")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K19= stoi(word);
		}
		if (word == "K20")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K20 = stoi(word);
		}
		if (word == "K23")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K23 = stoi(word);
		}
		if (word == "K24")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K24 = stoi(word);
		}
		if (word == "K25")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K25 = stoi(word);
		}
		if (word == "K26")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K26 = stoi(word);
		}
		if (word == "K27")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K27 = stoi(word);
		}
		if (word == "K28")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K28 = stoi(word);
		}
		if (word == "K50")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K50 = stoi(word);
		}
		if (word == "K51")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K51 = stoi(word);
		}
		if (word == "K53")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			 K53= stoi(word);
		}
		if (word == "K54")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K54 = stoi(word);
		}
		if (word == "K57")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K57 = stoi(word);
		}
		if (word == "K58")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K58 = stoi(word);
		}
		if (word == "K60")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K60 = stoi(word);
		}
		if (word == "K61")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			K61 = stoi(word);
		}
		if (word == "F25")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F25 = stoi(word);
		}
		if (word == "F35")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F35 = stoi(word);
		}
		if (word == "F45")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F45 = stoi(word);
		}
		if (word == "F55")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F55 = stoi(word);
		}
		if (word == "F65")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F65 = stoi(word);
		}
		if (word == "F72")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F72 = stoi(word);
		}
		if (word == "F82")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F82 = stoi(word);
		}
		if (word == "F132")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F132 = stoi(word);
		}
		if (word == "F142")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F142 = stoi(word);
		}
		if (word == "UbusL")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			UbusL = stod(word);
		}
		if (word == "UbusR")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			UbusR = stod(word);
		}
		if (word == "Uacc")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			Uacc = stod(word);
		}
		if (word == "F7")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F7 = stoi(word);
		}
		if (word == "F8")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			F8 = stoi(word);
		}
		if (word == "S3")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S3 = stoi(word);
		}
		if (word == "S4")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S4 = stoi(word);
		}
		if (word == "S5")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S5 = stoi(word);
		}
		if (word == "S6")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S6 = stoi(word);
		}
		if (word == "S7")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S7 = stoi(word);
		}
		if (word == "S8")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S8 = stoi(word);
		}
		if (word == "S9")
		{
			std::cout << std::setw(5) << std::right << word;
			std::getline(file, word);
			S9 = stoi(word);
		}
	}
	std::cout << std::endl;
	printvalues();
	logic();
	printvalues();
}
/*std::vector<std::string> lines;
	std::ifstream file("input.txt");

	std::string line;
	while (std::getline(file, line)) {
		if (!line.empty())
			lines.push_back(line);
	}
*/
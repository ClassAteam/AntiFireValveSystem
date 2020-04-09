#include "Header.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
void logic();

int main()
{
	std::vector<std::string> words;
	std::ifstream file("Values.txt");
	std::string word;
	


	while (std::getline(file, word))
	{
		if (word == "K15")
		{
			std::getline(file, word);
			K15 = stoi(word);
		}
		if (word == "K16")
		{
			std::getline(file, word);
			K16 = stoi(word);
		}
		if (word == "K19")
		{
			std::getline(file, word);
			K19= stoi(word);
		}
		if (word == "K20")
		{
			std::getline(file, word);
			K20 = stoi(word);
		}
		if (word == "K23")
		{
			std::getline(file, word);
			K23 = stoi(word);
		}
		if (word == "K24")
		{
			std::getline(file, word);
			K24 = stoi(word);
		}
		if (word == "K25")
		{
			std::getline(file, word);
			K25 = stoi(word);
		}
		if (word == "K26")
		{
			std::getline(file, word);
			K26 = stoi(word);
		}
		if (word == "K27")
		{
			std::getline(file, word);
			K27 = stoi(word);
		}
		if (word == "K28")
		{
			std::getline(file, word);
			K28 = stoi(word);
		}
		if (word == "K50")
		{
			std::getline(file, word);
			K50 = stoi(word);
		}
		if (word == "K51")
		{
			std::getline(file, word);
			K51 = stoi(word);
		}
		if (word == "K53")
		{
			std::getline(file, word);
			 K53= stoi(word);
		}
		if (word == "K54")
		{
			std::getline(file, word);
			K54 = stoi(word);
		}
		if (word == "K57")
		{
			std::getline(file, word);
			K57 = stoi(word);
		}
		if (word == "K58")
		{
			std::getline(file, word);
			K58 = stoi(word);
		}
		if (word == "K69")
		{
			std::getline(file, word);
			K60 = stoi(word);
		}
		if (word == "K61")
		{
			std::getline(file, word);
			K61 = stoi(word);
		}
		if (word == "F25")
		{
			std::getline(file, word);
			F25 = stoi(word);
		}
		if (word == "F35")
		{
			std::getline(file, word);
			F35 = stoi(word);
		}
		if (word == "F45")
		{
			std::getline(file, word);
			F45 = stoi(word);
		}
		if (word == "F55")
		{
			std::getline(file, word);
			F55 = stoi(word);
		}
		if (word == "F65")
		{
			std::getline(file, word);
			F65 = stoi(word);
		}
		if (word == "F72")
		{
			std::getline(file, word);
			F72 = stoi(word);
		}
		if (word == "F82")
		{
			std::getline(file, word);
			F82 = stoi(word);
		}
		if (word == "F132")
		{
			std::getline(file, word);
			F132 = stoi(word);
		}
		if (word == "F142")
		{
			std::getline(file, word);
			F142 = stoi(word);
		}
		if (word == "UbusL")
		{
			std::getline(file, word);
			UbusL = stod(word);
		}
		if (word == "UbusR")
		{
			std::getline(file, word);
			UbusR = stod(word);
		}
		if (word == "Uacc")
		{
			std::getline(file, word);
			Uacc = stod(word);
		}
		if (word == "F7")
		{
			std::getline(file, word);
			F7 = stoi(word);
		}
		if (word == "F8")
		{
			std::getline(file, word);
			F8 = stoi(word);
		}
		if (word == "S3")
		{
			std::getline(file, word);
			S3 = stoi(word);
		}
		if (word == "S4")
		{
			std::getline(file, word);
			S4 = stoi(word);
		}
		if (word == "S5")
		{
			std::getline(file, word);
			S5 = stoi(word);
		}
		if (word == "S6")
		{
			std::getline(file, word);
			S6 = stoi(word);
		}
		if (word == "S7")
		{
			std::getline(file, word);
			S7 = stoi(word);
		}
		if (word == "S8")
		{
			std::getline(file, word);
			S8 = stoi(word);
		}
		if (word == "S9")
		{
			std::getline(file, word);
			S9 = stoi(word);
		}
	}
	std::cout << K15 << K16 << K19 << K20 << K23 << K24 << K25 << K26 << K27 << K28 << K50 << K53 << K51 << K54 << K57 <<
		K58 << K60 << K61 << F25 << F35 << F45 << F55 << F65 << F72 << F82 << F132 << F142 << UbusL << UbusR << Uacc 
		<< F7 <<F8 << S3 << S4 << S5 << S6 << S7 << S8 << S9 << std::endl;
	logic();
	std::cout << K15 << K16 << K19 << K20 << K23 << K24 << K25 << K26 << K27 << K28 << K50 << K53 << K51 << K54 << K57 <<
		K58 << K60 << K61 << F25 << F35 << F45 << F55 << F65 << F72 << F82 << F132 << F142 << UbusL << UbusR << Uacc
		<< F7 << F8 << S3 << S4 << S5 << S6 << S7 << S8 << S9 << std::endl;

	
}
/*std::vector<std::string> lines;
	std::ifstream file("input.txt");

	std::string line;
	while (std::getline(file, line)) {
		if (!line.empty())
			lines.push_back(line);
	}
*/
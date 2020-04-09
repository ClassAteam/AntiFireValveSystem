#include "Header.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
	std::vector<std::string> words;
	std::ifstream file("Values.txt");
	std::string word;
	char* cstr = new char[word.length() + 1];


	while (std::getline(file, word))
	{
		if (word == "F132")
		{
			std::getline(file, word);
			F132 = stoi(word);
		}
	}
	std::cout << F132;
}
/*std::vector<std::string> lines;
	std::ifstream file("input.txt");

	std::string line;
	while (std::getline(file, line)) {
		if (!line.empty())
			lines.push_back(line);
	}
*/
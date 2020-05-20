// PumpsFillingAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double Pgs1 = 200;
	double l1gs1 = 0;
	if (Pgs1 <= 200.0)
	{
		l1gs1 = (1 - (Pgs1 * 0.0015));
	}
	if (Pgs1 > 200.0)
	{
		Pgs1 - 200.0;
		l1gs1 = (0.7 - (Pgs1 * 0.0082352941176471));
	}
	std::cout << "Pgs1 = " << Pgs1 << std::endl;
	std::cout << "l1gs1 = " << l1gs1 << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

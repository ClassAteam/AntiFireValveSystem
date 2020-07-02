#include <iostream>
#include "math.h"
#include "linear_algorithm.h"


int main()
{
	double Y_result;
	double insert;
	
	insert = 130.0;

	Y_result = two_points_to_Y(insert, 130, 280, 0, 45.0);
	
	std::cout << Y_result;
}

	// get Y value of point on linear function between two points(x1,y1 ; x2,y2)
	double two_points_to_Y(double insert, double x1, double x2, double y1, double y2)
	{
		double Y;
		Y = (((insert - x1) / (x2 - x1)) * (y2 - y1)) + y1;
		return Y;
	}
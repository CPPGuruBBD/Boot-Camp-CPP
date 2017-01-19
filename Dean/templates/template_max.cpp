// template_max.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>
T maximum(T value1, T value2, T value3);

int main()
{
	int		int1, int2, int3;
	double	double1, double2, double3;
	char	char1, char2, char3;

	cout << "Input three integer values: \n";
	cin >> int1 >> int2 >> int3;
	cout << "The maximum integer value is: " << maximum(int1, int2, int3);
	cout << "\n\nInput three double values: \n";
	cin >> double1 >> double2 >> double3;
	cout << "The maximum double value is: "
		<< maximum(double1, double2, double3);
	cout << "\n\nInput three characters: \n";
	cin >> char1 >> char2 >> char3;
    return (0);
}

template < typename T >
T maximum(T value1, T value2, T value3)
{
	T	max = value1;

	if (value2 > max)
		max = value2;
	if (value3 > max)
		max = value3;
	return (max);
}
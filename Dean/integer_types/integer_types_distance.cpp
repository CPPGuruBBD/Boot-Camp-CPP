// integer_types_distance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;

	unsigned int yards = 10, feet = 10, inches = 10;
	const unsigned int feet_per_yard(3U);
	const unsigned int inches_per_foot(12U);
	unsigned int total_inches{};

	total_inches = inches + inches_per_foot * (yards * feet_per_yard * feet);
	cout << "The distance corresponds to " << total_inches << " inches." << endl;

	cout << "Enter a distance in inches : ";
	cin >> total_inches;
	feet = total_inches / inches_per_foot;
	inches = total_inches % inches_per_foot;
	yards = feet / feet_per_yard;
	feet = feet % feet_per_yard;
	cout << "The distances corresponds to "
		<< yards << " yards "
		<< feet << " feet "
		<< inches << " inches." << std::endl;
    return 0;
}


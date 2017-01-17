// converting_distances.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>            

using namespace std;

int main()
{
		
	unsigned int yards(10);
	unsigned int feet(10); 
	unsigned int inches(10);

	const unsigned int feet_per_yard(3U);
	const unsigned int inches_per_foot(12U);
	unsigned int total_inches{};

	total_inches = (inches + (inches_per_foot * (yards * (feet_per_yard + feet))));
	cout << "The distances corresponds to " << total_inches << " inches." << endl;

	cout << "Enter a distance in inches: ";
	cin >> total_inches;
	feet = (total_inches / inches_per_foot);
	inches = (total_inches % inches_per_foot);
	yards = (feet / feet_per_yard);
	feet = (feet % feet_per_yard);
	cout << "The distances corresponds to " << endl << yards << " yards " << feet << " feet "; 
	cout << inches << " inches." << endl;
    
	return 0;
}


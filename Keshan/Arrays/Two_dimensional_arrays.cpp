// Two_dimensional_arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 

const int CITIES = 5;
const int YEAR = 4;

int main()
{
	using namespace std;
	const char * cities[CITIES] = { "A", "AA", "AAA", "AAAA", "AAAAA" };

	int maxtemps[YEAR][CITIES] = { { 96, 100, 87, 101, 105 }, { 96, 98, 91, 107, 104 }, 
	    { 97, 101, 93, 108, 107 }, { 98, 103, 95, 109, 108 } };

	cout << "Maximum temperatures for 2008 - 2011\n" << endl;
	for (int city = 0; city < CITIES; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < YEAR; ++year)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;
}

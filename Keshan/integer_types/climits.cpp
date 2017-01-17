// climits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <climits>
#include <iostream>

using namespace std;

int main()
{
	int n_int(INT_MAX);
	short n_short(SHRT_MAX);
	long int n_long(LONG_MAX);
	long long n_llong(LLONG_MAX);

	cout << "int is " << sizeof(int) << endl << "short int is " << sizeof(n_short) << endl;
	cout << "long is " << sizeof(n_long) << endl << "long long is " << sizeof(n_llong) << endl << endl;

	cout << "Maximum Values\n";
	cout << "int: " << n_int << endl << "short: " << n_short << endl;
	cout << "long int: " << n_long << endl << "long long: " << n_llong << endl;

    return 0;
}


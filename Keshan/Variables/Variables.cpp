// Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;

	short int apple_count(15);
	long int orange_count(5);
	long long total_fruit(apple_count + orange_count);

	cout << "int size " << sizeof(apple_count) << endl;
	cout << "The value of the apple count is " << apple_count << endl;
	cout << "long int size " << sizeof(orange_count) << endl;
	cout << "The value of the orange count is " << orange_count << endl;
	cout << "long long size " << sizeof(total_fruit) << endl;
	cout << "The value of the total fruit is " << total_fruit << endl;
    
	return 0;
}


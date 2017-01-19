// ref_classobject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string my_func(const string & s1, const string & s2);

int main()
{
	string	input, copy, result;

	cout << "Enter a string : ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = my_func(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
    return (0);
}

string my_func(const string & s1, const string & s2)
{
	return (s2 + s1 + s2);
}


// strings_example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>                

using namespace std;

int main()
{
	string str_1("java2s.com");
	string str_2;
	string str_3;

	cout << "You can assign one string object to another: s2 = s1" << endl;
	str_2 = str_1;
	cout << "str_1: " << str_1 << ", str_2: " << str_2 << endl;
	cout << "You can assign a C-Style string to a string object." << endl;
	cout << "str_2 = \"New Value\"" << endl;
	str_2 = "C++";
	cout << "str_2: " << str_2 << endl;
	cout << "You can concatenate strings: str_3 = str_1 + str_2" << endl;
	str_3 = str_1 + str_2;
	cout << "str_3: " << str_3 << endl;
	cout << "You can append strings.\n";
	str_1 += str_2;
	cout << "str_1 += str_2 returns str_1 = " << str_1 << endl;
	str_2 += " for a day";
	cout << "str_2 += \" for a day\" returns str_2 = " << str_2 << endl;

	return 0;
}

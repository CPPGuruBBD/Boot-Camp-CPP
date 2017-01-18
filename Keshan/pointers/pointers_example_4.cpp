// pointers_example_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <cstring> 

using namespace std;

char *getname(void);

int main()
{
	char *name; 

	name = getname(); 
	cout << name << " at " << (int *)name << "\n";
	delete[] name; 

	name = getname(); 
	cout << name << " at " << (int *)name << "\n";
	delete[] name;
	return 0;
}

char *getname(void) 
{
	char tmp[80];

	cout << "Enter last name: ";
	cin >> tmp;

	char *ret = new char[strlen(tmp) + 1];
	strcpy_s(ret, strlen(tmp + 2), tmp);

	return ret; 
}

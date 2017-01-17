// pointers_delete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

char	*getname(void)
{
	char	temp[80];
	char	*ret;
	
	cout << "Enter last name: ";
	cin >> temp;
	ret = new char[strlen(temp) + 1];
	strcpy_s(ret, strlen(temp) + 1, temp);
	return ret;
}

int main()
{
	char	*name;

	name = getname();
	cout << name << " at " << (int*)name << "\n"; 
	delete [] name;
	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete [] name;
    return 0;
}


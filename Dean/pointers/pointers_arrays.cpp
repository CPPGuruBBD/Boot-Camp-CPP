#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	double	wages[3] = { 1.0, 2.0, 3.0 };
	short	stacks[3] = { 3, 2, 1 };
	double	*pw = wages;
	short	*ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw++;
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps++;
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "*stacks = " << *stacks
		<< ", (stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array."  << endl;
	cout << sizeof(pw) << " = size of pw pointer" << endl;

    return 0;
}


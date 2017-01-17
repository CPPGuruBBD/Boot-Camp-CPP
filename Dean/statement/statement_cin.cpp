// statement_cin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int examples(0);

	cout << "How many examples do you have ?" << endl;
	cin >> examples;
	cout << "Here are 2 more." << endl;
	examples += 2;
	cout << "Now you have " << examples << " examples." << endl;
    return 0;
}


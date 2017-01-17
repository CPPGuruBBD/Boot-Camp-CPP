// practical.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	char	MyArray[3][10][3] = 
	{ 
		{ "24", "93", "80", "28", "31", "96", "9", "54", "22", "37" },
		{ "84", "61", "67", "71", "49", "26", "78", "13", "55", "39" },
		{ "38", "25", "37", "25", "49", "95", "32", "21", "21", "97" } 
	};

	cout << "Addition\n";
	int	outputArr[4][10] = { 0 };
	for (size_t col = 0; col < 10; col++)
	{
		int total = 0;
		for (size_t row = 0; row < 3; row++)
		{
			int num = atoi(MyArray[row][col]);
			total += num;
			outputArr[row][col] = num;
		}
		outputArr[3][col] = total;
	}
	for (size_t row = 0; row < 4; row++)
	{
		for (size_t col = 0; col < 10; col++)
		{
			cout << outputArr[row][col] << "\t|";
		}
		cout << "\n";
	}

	cout << "Subtraction\n";
	int highest[10];
	for (size_t col = 0; col < 10; col++)
	{
		highest[col] = atoi(MyArray[0][col]);
		for (size_t row = 0; row < 3; row++)
		{
			int num = atoi(MyArray[row][col]);
			if (num > highest[col])
				highest[col] = num;
			outputArr[row][col] = num;
		}
		bool found = false;
		int tot = 0;
		for (size_t row = 0; row < 3; row++)
		{
			if (atoi(MyArray[row][col]) != highest[col] || found)
				tot += atoi(MyArray[row][col]);
			else
				found = true;
		}
		outputArr[3][col] = highest[col] - tot;
	}

	for (size_t row = 0; row < 4; row++)
	{
		for (size_t col = 0; col < 10; col++)
		{
			cout << outputArr[row][col] << "\t|";
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Multiplication\n";
	int	mult[2][10] = { 0 };

	for (size_t col = 0; col < 10; col++)
	{
		for (size_t row = 0; row < 2; row++)
		{
			int num = atoi(MyArray[row][col]);
			mult[row][col] = atoi(MyArray[row][col]) * atoi(MyArray[row + 1][col]);
		}
	}
	for (size_t row = 0; row < 2; row++)
	{
		for (size_t col = 0; col < 10; col++)
		{
			cout << mult[row][col] << "\t|";
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Division\n";
	float	div[2][10] = { 0 };
	for (size_t col = 0; col < 10; col++)
	{
		for (size_t row = 0; row < 2; row++)
		{
			int num = atoi(MyArray[row][col]);
			div[row][col] = (float)atoi(MyArray[row][col]) / (float)atoi(MyArray[row + 1][col]);
		}
	}
	for (size_t row = 0; row < 2; row++)
	{
		for (size_t col = 0; col < 10; col++)
		{
			cout << div[row][col] << "\t|";
		}
		cout << "\n";
	}
	cout << "\n";
    return 0;
}

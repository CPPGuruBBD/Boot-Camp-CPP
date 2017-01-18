// Practical.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum(0);
	int subtraction(0);
	double val1(0);
	double val2(0);
	double val3(0);
	double tmp(0);
	char MyArray[3][10][3] = { { "24", "93", "80", "28", "31", "96", "9", "54", "22", "37" } 
		,{ "84", "61", "67", "71", "49", "26", "78", "13", "55", "39" } ,{ "38", "25", "37", "25", "49", "95", "32", "21", "21", "97" } };
	
	double out_put[4][2][10] = { 0 }; 

	for (int i = 0; i < 4; i++)
	{
		for (int y = 0; y < 10; y++)
		{
			val1 = atoi(MyArray[0][y]);
			val2 = atoi(MyArray[1][y]);
			val3 = atoi(MyArray[2][y]);
			if (i == 0)
			{
				out_put[i][0][y] = val1 + val2;
				out_put[i][1][y] = val2 + val3;
			}
			else if (i == 1)
			{
				if (val1 >= val2 && val1 >= val3)
				{
					out_put[i][0][y] = (val2 + val3);
					out_put[i][1][y] = (val1 - out_put[i][0][y]);
				}
				else if ((val2 >= val1) && (val2 >= val3))
				{
					out_put[i][0][y] = (val1 + val3);
					out_put[i][1][y] = (val2 - out_put[i][0][y]);
				}
				else if (val3 >= val1 && val3 >= val2)
				{
					out_put[i][0][y] = (val1 + val2);
					out_put[i][1][y] = (val3 - out_put[i][0][y]);
				}
			}
			else if (i == 2)
			{
				
				out_put[i][0][y] = val1 * val2;
				out_put[i][1][y] = val2 * val3;
			}
			else if (i == 3)
			{
				
				out_put[i][0][y] = val1 / val2;
				out_put[i][1][y] = val2 / val3;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 10; k++)
				cout << out_put[i][j][k] << " ";
			cout << endl;
		}
		cout << endl;
	}
	
    return 0;
}


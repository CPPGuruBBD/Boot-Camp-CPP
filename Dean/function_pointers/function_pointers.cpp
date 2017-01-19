// function_pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double	my_func(int);
void	estimate(int lines, double(*pf)(int));

int main()
{
	int code(40);

	estimate(code, my_func);
	return (0);
}

double	my_func(int lns)
{
	return (lns * 0.05);
}

void	estimate(int lines, double(*pf)(int))
{
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";
}


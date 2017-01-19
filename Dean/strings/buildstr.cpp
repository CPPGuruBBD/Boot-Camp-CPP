// buildstr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char *buildstr(char c, int n);

int main()
{
	int		times;
	char	ch;
	char	*pt;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	pt = buildstr(ch, times);
	cout << pt << endl;
	delete[] pt;
	pt = buildstr('+', 20);
	cout << pt << "-DONE-" << pt << endl;
	delete[] pt;
    return 0;
}

char	*buildstr(char c, int n)
{
	char	*str;
	int		i(0);

	str = new char[n + 1];
	str[n] = '\0';
	while (str[i])
	{
		str[i] = c;
		i++;
	}
	return (str);
}



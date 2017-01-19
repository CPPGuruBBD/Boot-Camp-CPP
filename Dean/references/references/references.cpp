#include "stdafx.h"
#include <iostream>
using namespace std;
void swapr(int &a, int &b);
void swapp(int *p, int *q);

int main()
{
	int my_value1 = 300;
	int my_value2 = 350;
	
	cout << "my_value1 : " << my_value1 << ", my_value2 : " << my_value2 << endl;
	cout << "Using references to swap contents:\n";
	swapr(my_value1, my_value2);
	cout << "my_value1 : " << my_value1 << ", my_value2 : " << my_value2 << endl;
	cout << "Using pointers to swap contents:\n";
	swapp(&my_value1, &my_value2);
	cout << "my_value1 : " << my_value1 << ", my_value2 : " << my_value2 << endl;
    return (0);
}

void	swapr(int &a, int &b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

void	swapp(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// passsing_structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;

struct my_time
{
	int hours;
	int mins;
};
const int MINUTES = 60;

my_time sum(my_time t1, my_time t2);
void show_time(my_time t);

int main()
{
	my_time day1 = { 5, 45 };    // 5 hrs, 45 min
	my_time day2 = { 4, 55 };    // 4 hrs, 55 min

	my_time trip = sum(day1, day2);
	show_time(trip);
	return 0;
}

my_time sum(my_time t1, my_time t2)
{
	my_time total;
	total.mins = (t1.mins + t2.mins) % MINUTES;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / MINUTES;
	return total;
}

void show_time(my_time t)
{
	cout << t.hours << " hours, " << t.mins << " minutes\n";
}


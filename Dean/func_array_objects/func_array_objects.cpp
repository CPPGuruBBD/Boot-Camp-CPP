// func_array_objects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>

const int								Seasons = 4;
const std::array<std::string, Seasons>	Snames =
										{ "Baseball", "Football", "Basketball", "Hockey" };

void fill(std::array<double, Seasons> *pa);
void show(std::array<double, Seasons> da);

int main()
{
	std::array<double, 4>	expenses;

	fill(&expenses);
	show(expenses);
    return (0);
}

void fill(std::array<double, Seasons> *pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons> da)
{
	double total = 0.0;

	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": $" << da[i] << '\n';
		total += da[i];
	}
	std::cout << "Total: $" << total << '\n';
}


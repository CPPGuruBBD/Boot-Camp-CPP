// integer_types.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int	apple_count{15};
	int orange_count{5};
	int total_fruit{apple_count + orange_count};
	short short_int{ 42 };
	long  long_int{ 42 };
	long long  long_long_int{ 42 };

	std::cout << "The value of apple_count is " << apple_count << std::endl;
	std::cout << "The value of orange_count is " << orange_count << std::endl;
	std::cout << "The value of total_fruit is " << total_fruit << std::endl;
	std::cout << "The size of short_int is " << sizeof(short_int) << " bytes." << std::endl;
	std::cout << "The size of long_int is " << sizeof(long_int) << " bytes." << std::endl;
	std::cout << "The size of long_long_int is " << sizeof(long_long_int) << " bytes." << std::endl;
    return 0;
}


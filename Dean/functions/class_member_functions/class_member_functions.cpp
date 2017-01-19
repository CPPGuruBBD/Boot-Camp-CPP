#include "stdafx.h"
#include <iostream> 
#include <string> 
using std::string;

class Product
{
	private:
		string company;
		long shares;
		double normal_val;
		double discount_val;
		void set_tot() { discount_val = shares * normal_val; }
	public:
		void acquire(const std::string &co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show();
};

void	Product::acquire(const string &co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	normal_val = pr;
	set_tot();
}

void	Product::buy(long num, double price)
{
	shares += num;
	normal_val = price;
	set_tot();
}

void	Product::sell(long num, double price)
{
	shares -= num;
	normal_val = price;
	set_tot();
}

void Product::update(double price)
{
	normal_val = price;
	set_tot();
}

void Product::show()
{
	std:: cout << "Company: " << company
		<< "  Shares: " << shares << '\n'
		<< "  Share Price: R" << normal_val
		<< "  Total Worth: R" << discount_val << '\n';
}

int main()
{
	Product computer;
	computer.acquire("NanoSmart", 20, 12.50);
	computer.show();
	computer.buy(15, 18.125);
	computer.show();
	computer.sell(400, 20.00);
	computer.show();
	computer.buy(300000, 40.125);
	computer.show();
	computer.sell(300000, 0.125);
	computer.show();
	return (0);
}

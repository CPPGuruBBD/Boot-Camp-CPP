// template_practical.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
const float	taxRate = 0.05F;
const float	vatRate = 0.14F;

struct Policy
{
	int		polseq;
	float	amount;
	float	tax;
	float	vat;
	int		term;
	string	endDate;
	string	description;
};

struct Quote
{
	int		quoteseq;
	float	amount;
	float	tax;
	float	vat;
	string	description;
};

struct RFQ
{
	int		rfqseq;
	float	amount;
	float	tax;
	float	vat;
	string	prod;
	string	description;
};

template <typename Data> 
void	calcVatTax(Data &item);
template <typename Data> 
void	displayAmounts(Data &item);

int main()
{
	Policy policy = { 1234, 100.0F, 0, 0, 4, "05/05/2018", "Policy" };
	Quote quote = { 1555, 569.0F, 0, 0, "Quote" };
	RFQ rfq = { 6671, 1222.0F, 0, 0, "something", "RFQ" };

	calcVatTax(policy);
	calcVatTax(quote);
	calcVatTax(rfq);

	cout << "Description\t|" << "Amount\t|" << "Tax\t|" << "Vat\n";
	displayAmounts(policy);
	displayAmounts(quote);
	displayAmounts(rfq);
    return (0);
}

template <typename Data> 
void	calcVatTax(Data &item)
{
	item.tax = item.amount * taxRate;
	item.vat = item.amount * vatRate;
}

template <typename Data> 
void	displayAmounts(Data &item)
{
	cout << item.description << "\t\t|" << item.amount << "\t|" << item.tax << "\t|" << item.vat << "\n";
}
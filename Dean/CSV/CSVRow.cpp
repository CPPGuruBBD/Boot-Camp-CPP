#include "stdafx.h"
#include "CSVRow.h"

CSVRow::CSVRow()
{
}

CSVRow::CSVRow(vector<string> cells)
{
	this->cells = cells;
	this->columns = cells.size();
}

CSVRow::~CSVRow()
{
	this->cells.clear();
}

void	CSVRow::addCell(string data)
{
	this->cells.push_back(data);
	this->columns++;
}

void	CSVRow::show()
{
	using	std::cout;
	for (unsigned int i = 0; i < columns; i++)
	{
		cout << cells.at(i) << this->seperator;
	}
	cout << "\n";
}

string			CSVRow::csvFormat()
{
	string format;
	using	std::cout;
	if (this->columns > 0)
		format = this->cells.at(0);
	for (unsigned int i = 1; i < columns; i++)
	{
		if (i == columns)
			format += this->cells.at(i);
		else
			format = format + "," + this->cells.at(i);
	}
	return format;
}
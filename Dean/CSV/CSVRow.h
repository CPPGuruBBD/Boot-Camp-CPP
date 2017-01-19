#pragma once
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class CSVRow
{
	public:
		int						columns = 0;
		vector<string>			cells;
		string					seperator = " | ";
		CSVRow(vector<string> cells);
		CSVRow(void);
		virtual ~CSVRow();

		void			addCell(string data);
		void			show();
		vector<string>	getCells() { return this->cells; }
		int				getSize() { return this->columns; }
		string			csvFormat();

};
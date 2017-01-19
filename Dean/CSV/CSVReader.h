#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "CSVRow.h"

using std::string;

class CSVReader
{
public:
	enum outmode { COMMA = 1, TABBED, NEWLINE, CUSTOM };
		//Constructor & Destructor
		CSVReader();
		CSVReader(string fileName);
		virtual ~CSVReader();

		//Methods
		void	setFileName(string fileName);
		void	setOutMode(int mode);
		void	setHeader(CSVRow header);
		void	setCustomSep(string seperator);
		void	output();
		void	addRow(CSVRow row);
		vector<CSVRow>	getRows() { return this->rows; };
		CSVRow			getHeaders() { return this->headers; };



	private:
		string			fileName;
		int				rowCount = 0;
		CSVRow			headers;
		vector<CSVRow>	rows;
		int				outmode = COMMA;
		void			readFile();
		CSVRow			createRow(string row);
		string			seperator = ", ";
		string			getSeperator();

};


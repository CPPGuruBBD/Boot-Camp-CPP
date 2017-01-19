#pragma once
#include <iostream>
#include <string>
#include <fstream> 
#include "CSVRow.h"
using std::string;
using std::cout;
using std::endl;

class CSVWrite
{
	public:
		string			outputFile;
		int				rowCount = 0;
		CSVRow			headers;
		vector<CSVRow>	rows;

		CSVWrite();
		CSVWrite(string outputFile);
		virtual ~CSVWrite();

		//set
		void	setHeaders(CSVRow headers) { this->headers = headers; }
		void	setRows(vector<CSVRow>	rows);
		void	writeFile();
		void	writeFile(string fileName);
};


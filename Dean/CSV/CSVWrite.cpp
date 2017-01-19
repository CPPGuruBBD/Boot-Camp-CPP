#include "stdafx.h"
#include "CSVWrite.h"


CSVWrite::CSVWrite()
{
}

CSVWrite::CSVWrite(string outputFile)
{
	this->outputFile = outputFile;
}

CSVWrite::~CSVWrite()
{
	this->rows.clear();
}

void	CSVWrite::setRows(vector<CSVRow> rows)
{
	this->rows = rows;
	rowCount = rows.size();
}

void	CSVWrite::writeFile()
{
	using std::ofstream;
	if (this->outputFile.length() > 0)
	{
		ofstream outFile;
		outFile.open(this->outputFile);
		if (!outFile.is_open())
			cout << "Could not open output file";
		outFile << this->headers.csvFormat() << endl;
		for (int i = 0; i < rowCount; i++)
		{
			outFile << rows[i].csvFormat() << endl;
		}
	}
}

void	CSVWrite::writeFile(string fileName) 
{
	string	fileNameBackup = this->outputFile;
	this->outputFile = fileName;
	this->writeFile();
	this->outputFile = fileName;
}

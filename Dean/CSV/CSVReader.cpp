#include "stdafx.h"
#include "CSVReader.h"


CSVReader::CSVReader() {}

CSVReader::~CSVReader() 
{
	this->rows.clear();
}

CSVReader::CSVReader(string fileName)
{
	this->fileName = fileName;
	readFile();
}

void	CSVReader::setHeader(CSVRow row)
{
	this->headers = row;
}

CSVRow	CSVReader::createRow(string row)
{
	CSVRow	temp;
	int	pos;

	pos = row.find(',');
	while (pos != -1)
	{
		string sub = row.substr(0, row.length());
		int end = sub.find(',');
		if (end == -1)
			temp.addCell(sub);
		else
		{
			string	cell = sub.substr(0, end);
			temp.addCell(cell);
		}
		row = row.substr(pos + 1, row.length());
		pos = row.find(',');
	}
	return (temp);
}

void	CSVReader::addRow(CSVRow row)
{
	this->rows.push_back(row);
	this->rowCount++;
}

void		CSVReader::setOutMode(int mode)
{
	if (mode >= 1 && mode <= 4)
		this->outmode = mode;
}

void	CSVReader::readFile()
{
	using std::vector;
	using std::ifstream;
	using std::cout;
	using std::endl;
	vector<string> contents;

	ifstream inFile;
	inFile.open(this->fileName);
	if (!inFile.is_open()) 
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	string line;
	getline(inFile, line);
	this->setHeader(createRow(line));
	while (getline(inFile, line)) 
	{
		addRow(createRow(line));
	}
}
string	CSVReader::getSeperator()
{
	switch (this->outmode)
	{
		case COMMA : 
			return (", ");
		case TABBED:
			return ("\t");
		case NEWLINE:
			return ("\n");
		default :
			return (this->seperator);
	}
}

void	CSVReader::setCustomSep(string seperator)
{
	if (this->outmode == CUSTOM)
		this->seperator = seperator;
}

void	CSVReader::output()
{
	headers.show();
	for (int i = 0; i < this->rowCount; i++)
	{
		rows.at(i).seperator = this->getSeperator();
		rows.at(i).show();
	}
}

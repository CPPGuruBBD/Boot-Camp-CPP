
#include "stdafx.h"
#include "CSVRow.h"
#include "CSVReader.h"
#include "CSVWrite.h"
using namespace std;

int main()
{
	cout << "Read Example.csv : \n \n";
	CSVReader myReader("Example.csv");
	myReader.output();
	CSVWrite myWriter("output.csv");
	myWriter.setHeaders(myReader.getHeaders());
	myWriter.setRows(myReader.getRows());
	myWriter.writeFile();
	cout << "Write output.csv : \n \n";
	CSVReader testWriter("output.csv");
	testWriter.setOutMode(CSVReader::CUSTOM);
	testWriter.setCustomSep(" ----- ");
	testWriter.output();
    return 0;
}


// Contains the main function

#include <iostream>


#include "functions.h" 
#include "BinaryReader.h"// How to include the header file. 
// never include any .cpp file
#include "Analyzer.h"
#include "DuplicatesAnalyzer.h"
#include "MissingAnalyzer.h"
#include "SearchAnalyzer.h" //Greg added SearchAnalyzer.h and StatisticsAnalyzer.h
#include "StatisticsAnalyzer.h"





using namespace std;

int main()
{
	string filename = "hello.dat";
	createBinaryFile(filename);

	BinaryReader br(filename);
	int* vals = br.getValues();
	cout << "Size is " << br.getSize() << endl;
	for (int i = 0; i < br.getSize(); i++)
	{
		cout << vals[i] << endl;
	}

	StatisticsAnalyzer stat(vals, br.getSize());
	string stat_result = stat.analyze();
	cout << stat_result << endl;

	DuplicatesAnalyzer da(vals, br.getSize());
	string res = da.analyze();
	cout << res << endl;

	MissingAnalyzer ma(vals, br.getSize());
	string result = ma.analyze();
	cout << result << endl;

	SearchAnalyzer sa(vals, br.getSize()); //Greg added SearchAnalyzer and StatisticsAnalyzer
    string sa_result = sa.analyze();
    cout << sa_result << endl;

    

	return 0;

}

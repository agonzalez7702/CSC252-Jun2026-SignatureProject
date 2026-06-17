// Contains the main function

#include <iostream>


#include "functions.h" 
#include "BinaryReader.h"// How to include the header file. 
// never include any .cpp file
#include "Analyzer.h"
#include "DuplicatesAnalyzer.h"




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

	DuplicatesAnalyzer da(vals, br.getSize());
	string res = da.analyze();
	cout << res << endl;

	/*Analyzer an(br.getValues(), br.getSize());
	string result = an.analyze();
	cout << result << endl;*/

	
	/*int* rand_nums = createArray(SIZE);
	writeBinary("test.dat", rand_nums, SIZE);
	
	cout << "Hello World\n";
	cout << SIZE << endl;*/



}
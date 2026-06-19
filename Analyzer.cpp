#include "Analyzer.h"
#include <sting> //greg added to include srting

using namespace std;

int* Analyzer::cloneValues(int* values, int size)
{
	int* res = new int[size]; // res = result
	for (int i = 0; i < size; i++)
	{
		res[i] = values[i];
	}

	return res;
}

Analyzer::Analyzer(int* values, int size)
{
	this->size = size;
	this->values = cloneValues(values, size);
}

Analyzer::~Analyzer()
{
	delete[] this->values; // Cleans the memory location we created for this = values
}

std::string Analyzer::analyze()
{
	int sum = values[0];
	int min = values[0];
	int max = values[0];
	for (int i = 1; i < size; i++)
	{
		sum += values[i];
		if (values[i] < min)
		{
			min = values[i];
		}
		if (values[i] > max)
		{
			max = values[i];
		}
	}

	double average = (double)sum / size; //Greg added (double) to prevent weird decimal errors
	string res = "The average: " 
		+ to_string(average) + ". \n";

	res += "The min: " + to_string(min) + ". \n";

	res += "The max: " + to_string(max) + ". \n";

	return res;
}



#include "SearchAnalyzer.h"
#include "Functions.h"
#include <string>

std::string SearchAnalyzer::analyze()
{
	int* numbers = new int[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < SIZE; i++)
	{
		int idx = values[i];
		numbers[idx]++;
	}

	int search = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (numbers[i] == 0)
		{
			search++;
		}
	}

	delete[] numbers;

	return "There were " + std::to_string(search) + " search values.";
}

// class SearchAnalyzer : public Analyzer
//	SearchAnalyzer(int* values, int size)
//	std::string analyze() override

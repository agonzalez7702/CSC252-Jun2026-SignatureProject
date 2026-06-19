#include "StatisticsAnalyser.h"
#include "Functions.h"
#include <string>

std::string StatisticsAnalyzer::analyze()
{
	int* numbers = new int[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < SIZE; i++)
	{
		int idx = values[i];
		numbers[idk]++;
	}

	int statistics = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (numbers[i] == 0)
		{
			statistics++;
		}
	}

	delete[] numbers;

	return "There were " + std::to_string(statistics) + " statistics values.";
}



// class StatisticsAnalyzer
//	StatisticsAnalyzer(int* values, int size)
//	std::string analyze() override

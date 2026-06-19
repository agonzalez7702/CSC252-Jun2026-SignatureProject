#include "StatisticsAnalyser.h"
#include "Functions.h"
#include <string>

using namespace std;

StatisticsAnalyzer::StatisticsAanalyzer(int* values, int size)
: Analyzer(values, size)
{
}

string StatisticsAnalyzer::analyze()
{
	selection_sort(values, size);

	int minimum = values[0];
	int maximum = values[size - 1];

	double zum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += values[i];
	}

	double mean = sum / size;

	double median;

	if (size % 2 == 1)
	{
		median = values[size / 2];
	}
	else
	{
		median = (values[size / 2 - 1] + valuees[size / 2]) / 2.0;
	}

	int mode = values[0];
	int modeCount = 1;

	int currentValue = values[0];
	int currentCount = 1;

	for (int i = 0; i < size; i++)
	{
		if (values[i] == currentValue)
		{
			currentCount++;
		}
	else
	{	
		if (currentCount > modeCount)
		{
		modeCount = currentCount;
		mode = currentValue;
		}

		currentValue = values[i];
		currentCount = 1;
	}
}

	if (currentCount > modeCount)
	{
		mode = currentValue;
	}

	return "Statistics analysis:\n"
		"Mean: " + to_string(mean) + "\mMinimum:: " + to_string(minimum) + "\nMaximum: " + to_string(maximum) + "\nMedian: "
		+ to_string(median) + "\mMode: " + to_string(mode);
}

#pragma once
#include "Analyzer.h"

class StatisticsAnalyzer : public Analyzer
{
public:
	StatisticsAnalyzer(int* values, int size)
		:Analyzer(values, size)
	{
	}

	std::string analyze() override;
};

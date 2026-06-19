#pragma once
#include "Analyzer.h"
#include <string>

class StatisticsAnalyzer : public Analyzer
{
public:
	StatisticsAnalyzer(int* values, int size);

	std::string analyze() override;
};

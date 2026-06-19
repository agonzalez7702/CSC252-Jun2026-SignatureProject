#pragma once
#include "Analyzer.h"

class SearchAnalyzer : public Analyzer
{
public:
	SearchAnalyzer(int* values, int size)
		:Analyzer(values, size)
	{
	}

	std::string analyze() override;
};

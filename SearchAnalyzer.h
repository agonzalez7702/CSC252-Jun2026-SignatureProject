#pragma once
#include "Analyzer.h"
#include <string>

class SearchAnalyzer : public Analyzer
{
public:
	SearchAnalyzer(int* values, int size)

	std::string analyze() override;
};

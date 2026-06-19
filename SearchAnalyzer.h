#pragma once
#include "Analyzer.h"
#include <string>

class SearchAnalyzer : public Analyzer
{
public:
	SearchAnalyzer(int* values, int size); //Greg added ;

	std::string analyze() override;
};

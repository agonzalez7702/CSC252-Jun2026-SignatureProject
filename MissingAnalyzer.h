#pragma once
#include "Analyzer.h"

class MissingAnalyzer :public Analyzer
{
public:
	MissingAnalyzer(int* vals, int s)
		:Analyzer(vals, s) {
	}

	std::string analyze() override;
};


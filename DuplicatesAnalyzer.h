#pragma once
#include "Analyzer.h"
class DuplicatesAnalyzer :public Analyzer // The analyze method in the derived class will scan the values for duplicate values
	                                      //The method returns a string that tells how many duplicate values are found.
{
public:
	DuplicatesAnalyzer(int* vals, int s)
		:Analyzer(vals, s) { }             // This is the base class

	std::string analyze() override;
};


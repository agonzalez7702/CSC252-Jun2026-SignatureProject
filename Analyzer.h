#pragma once
#include <string>


class Analyzer
{
private:
	int* values;
	int size;
	// Utility or Helper Method
	int* cloneValues(int* values, int size);
public:
	Analyzer(int* values, int size); // Constructor

	~Analyzer(); // Destructor = Class name; it never has parameters

	std::string analyze();
};


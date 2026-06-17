#pragma once
#include <string>


class Analyzer
{
protected:
	int* values;
	int size;
private:
	
	// Utility or Helper Method
	int* cloneValues(int* values, int size);
public:
	Analyzer(int* values, int size); // Constructor

	~Analyzer(); // Destructor = Class name; it never has parameters

	virtual std::string analyze() =0;

};


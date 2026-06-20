#include "SearchAnalyzer.h"
#include "functions.h" //Greg updated lowercase f
#include <string>

using namespace std;

SearchAnalyzer::SearchAnalyzer(int* values, int size) : Analyzer(values, size)
{
	selection_sort(this->values, this->size);
}

string SearchAnalyzer::analyze() //Greg addded method
{
	int foundCount = 0;

	for (int i = 0; i < 100; i++) //Greg updated to only generate 100 random numbers
	{
		int key = rand() % 1000;

		if (binary_search(values, key, size))
		{
			foundCount++;
		}
	}

return "\nSearch analysis:\n"
"There were " + to_string(foundCount) + " out of 100 random values.";
}

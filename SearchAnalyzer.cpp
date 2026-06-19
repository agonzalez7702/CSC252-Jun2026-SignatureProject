#include "SearchAnalyzer.h"
#include "Functions.h"
#include <string>

using namespace std;

SearchAnalyzer::SearchAnalyzer(int* values, int size) : Analyzer(values, size)
{
	selection_sort(this->values, this->size);
}

string SearchAnalyzer
{
	int foundCount = 0;

	for (int i = 0; i < SIZE; i++)
	{
		int key = rand() % 1000;

		if (binary_search(values, key, size))
		{
			foundCount++;
		}
	}

return "Search analysis: Found " + to_string(foundCount) + " out of 100 random values.";
}

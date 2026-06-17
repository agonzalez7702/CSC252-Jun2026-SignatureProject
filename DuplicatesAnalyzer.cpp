#include "DuplicatesAnalyzer.h"
#include <string>

std::string DuplicatesAnalyzer::analyze()
{
    int* numbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        numbers[0] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        int idx = values[i];
        numbers[idx]++;
    }

    int dups = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > 1)
        {
            dups++;
        }
    }

    return "There are " + std::to_string(dups) + " duplicate values.";
}

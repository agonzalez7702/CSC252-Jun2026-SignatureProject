#include "MissingAnalyzer.h"
#include "functions.h"
#include <string>

std::string MissingAnalyzer::analyze()
{
    int min_val = values[0]; //Greg added min and max to determine range
    int max_val = values[0];
    for (int i = 1; i < size; i++)
    {
        if (values[i] < min_val) min_val = values[i];
        if (values[i] > max_val) max_val = values[i];
    }
    
    int* numbers = new int[max_val + 1]; //Greg updated for max

    for (int i = 0; i < max_val; i++) //Greg updated for max
    {
        numbers[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        int idx = values[i];
        numbers[idx]++;
    }

    int missing = 0;

    for (int i = min_val; i <= max_val; i++) //Greg updated for min max
    {
        if (numbers[i] == 0)
        {
            missing++;
        }
    }

    delete[] numbers;

    return "There were " + std::to_string(missing) + " missing values.";
}

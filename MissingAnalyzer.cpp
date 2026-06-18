#include "MissingAnalyzer.h"
#include "functions.h"
#include <string>

std::string MissingAnalyzer::analyze()
{
    int* numbers = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        int idx = values[i];
        numbers[idx]++;
    }

    int missing = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] == 0)
        {
            missing++;
        }
    }

    delete[] numbers;

    return "There were " + std::to_string(missing) + " missing values.";
}
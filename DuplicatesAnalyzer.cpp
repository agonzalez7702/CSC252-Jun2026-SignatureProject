#include "DuplicatesAnalyzer.h"
#include <string>

std::string DuplicatesAnalyzer::analyze()
{
    int max_val = values[0]  //Greg added a max value finder to prevent memory issues if number larger than dataset 
    for (int i = 1; i < size; i++)
    {
        if (values[i] > nax_val)
        {
            max_val = values[i];
        }
    }          
    
    int* numbers = new int[max_val + 1]; //updated to make size always large enough
    for (int i = 0; i < max_val; i++)
    {
        numbers[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        int idx = values[i];
        numbers[idx]++;
    }

    int dups = 0;
    for (int i = 0; i < max_val; i++)
    {
        if (numbers[i] > 1)
        {
            dups++;
        }
    }

    delete[] numbers;

    return "There are " + std::to_string(dups) + " duplicate values.";
}

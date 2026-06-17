
#include <cstdlib>
#include <ctime>
#include <fstream>


#include "functions.h"

using namespace std;


int* createArray(int length)
{
    //step1: prepare the result array
    int* results = new int[length];
    //step2 generate the random nums
    int rand_num;
    srand(unsigned(time(NULL)));
    for (int i = 0; i < length; i++)
    {
        rand_num = rand() % SIZE;
        results[i] = rand_num;
    }
    //step3 return the result
    return results;
}

void writeBinary(string filename, int* values, int length)
{
    ofstream out(filename, ios::binary);
    out.write(reinterpret_cast<char*>(&length), sizeof(int)); // Integer is 4 bytes. 

    for (int i = 0; i < length; i++)
    {
        out.write(reinterpret_cast<char*>(&values[i]), sizeof(int));
    }
    out.close(); // Close file stream.
}

void createBinaryFile(std::string filename)
{
    int size = SIZE;
    int* nums = createArray(size);
    writeBinary(filename, nums, size); // To generate the external file

    delete[] nums;
}

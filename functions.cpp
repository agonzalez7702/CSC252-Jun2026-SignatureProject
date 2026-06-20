
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
        rand_num = rand() %1000; // Alex changed so the numbers generated are from 0-999
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

void selection_sort(int* values, int size) //Greg added selection_sort, binary_search_recursive, and binary_search
{
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (values[j] < values[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = values[i];
            values[i] = values[min_idx];
            values[min_idx] = temp;
        }
    }
}

bool binary_search_recursive(int* values, int key, int start, int end) 
{
    if (start > end) 
    {
        return false;
    }
    
    int mid = start + (end - start) / 2;
    
    if (values[mid] == key) 
    {
        return true;
    }
    
    if (values[mid] > key) 
    {
        return binary_search_recursive(values, key, start, mid - 1);
    }
    
    return binary_search_recursive(values, key, mid + 1, end);
}

bool binary_search(int* values, int key, int size) 
{
    return binary_search_recursive(values, key, 0, size - 1);
}

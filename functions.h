#pragma once // Guard - To only compile once
#include <string>

//function.h
// It's used to declare functions and constants here
// NEVER use "using namespace std;" in header files

// Declaring constants
const int SIZE = 100; // Alex changed to general array of 100 numbers

// Declaring functions

int* createArray(int); // This is the function call to generate the numbers
void writeBinary(std::string, int*, int);
void createBinaryFile(std::string filename);
void selection_sort(int* values, int size); //Greg added other functions required here and below
bool binary_search_recursive(int* values, int key, int start, int end);
bool binary_search(int* values, int key, int size);



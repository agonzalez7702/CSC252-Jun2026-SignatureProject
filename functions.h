#pragma once // Guard - To only compile once
#include <string>

//function.h
// It's used to declare functions and constants here
// NEVER use "using namespace std;" in header files

// Declaring constants
const int SIZE = 5;

// Declaring functions

int* createArray(int); // This is the function call to generate the numbers
void writeBinary(std::string, int*, int);
void createBinaryFile(std::string filename);




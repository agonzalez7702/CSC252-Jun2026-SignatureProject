#pragma once
#include <string>

class BinaryReader
{
private:
	int* values;
	int size;
	// Utility method
	

public:
	BinaryReader(std::string filename);
	~BinaryReader(); // Destructor
	int* readBinary(std::string, int& length);

	// Getter method
	int* getValues() const;
	int getSize() const;
};


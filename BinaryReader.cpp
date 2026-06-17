
#include <fstream>
#include "BinaryReader.h"

using namespace std;


BinaryReader::BinaryReader(std::string filename) // Constructor
{
	values = readBinary(filename, size);

}

BinaryReader::~BinaryReader()
{
	delete[] this->values; // Cleans the memory location we created for this = values
}

int* BinaryReader::readBinary(string filename, int& length) // Method implementation
{
	ifstream in_file(filename, ios::binary); // ios = Input Output Stream
	in_file.read(reinterpret_cast<char*> (&length), sizeof(int)); // sizeof(int) = 4 bytes
	int* result = new int[length];
	for (int i = 0; i < length; i++)
	{
		in_file.read(reinterpret_cast<char*>(&result[i]), sizeof(int));
	}
	return result;
}

int* BinaryReader::getValues() const
{
	return values;
}

int BinaryReader::getSize() const
{
	return size;
}

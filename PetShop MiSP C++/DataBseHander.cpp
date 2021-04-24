#include "DataBaseHander.h"

string DataBaseHander::ReadFile(const string& path, const uint searchNumber)
{
	fstream fileReader;

	fileReader.open(path);
	if (!fileReader.is_open()) {

		cout << "FILE OPENING ERROR" << endl;
	}

	uint number = searchNumber;

	string numberLine;
	string searchName;
	string line;

	while (getline(fileReader, line)) {

		stringstream lineStream(line);

		getline(lineStream, numberLine, '.');
		getline(lineStream, searchName, '.');

		if (stoi(numberLine) == number) {

			return searchName;
		}
	}

	return searchName;
}

string DataBaseHander::RandReadFile(const string& path, const uint maxNumberLine)
{
	fstream fileReader;

	fileReader.open(path);
	if (!fileReader.is_open()) {

		cout << "FILE OPENING ERROR" << endl;
	}

	uint number = 1 + rand() % maxNumberLine; //Rand(1, maxNumberLine);
	
	string numberLine;
	string searchName;
	string line;

	while (getline(fileReader, line)) {

		stringstream lineStream(line);

		getline(lineStream, numberLine, '.');
		getline(lineStream, searchName, '.');

		if (stoi(numberLine) == number) {

			return searchName;
		}
	}

	return searchName;
}

void DataBaseHander::numerationBase(const string& path)
{
	fstream _fileReader;
	fstream fileReader;

	fileReader.open(path, ios::in);
	if (!fileReader.is_open()) {

		cout << "FILE OPENING ERROR" << endl;
	}

	_fileReader.open("XXX.txt", fstream::out);
	if (!_fileReader.is_open()) {

		cout << "FILE OPENING ERROR" << endl;
	}

	string line;
	uint number = 1;

	while (getline(fileReader, line)) {

		_fileReader << to_string(number) << "." + line << endl;
		number++;
	}
}
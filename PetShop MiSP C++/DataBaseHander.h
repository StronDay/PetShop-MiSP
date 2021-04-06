#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdio> 
#include <string>
#include <ctime>

using namespace std;
typedef unsigned int uint;

class DataBaseHander 
{
public:

	void numerationBase(const string& path);

	string ReadFile(const string& path, const uint numberLine);
	string RandReadFile(const string& path, const uint maxNumberLine);
};
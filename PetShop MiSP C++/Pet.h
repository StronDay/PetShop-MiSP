#pragma once

#include <iostream>
#include <string>
#include <cassert>
#include <ctime>
#include "DataBaseHander.h"

using namespace std;
typedef unsigned int uint;

class Pet
{
private:

	static const string _species;

protected:

	uint _age;
	string _sex;
	string _name;
	string _breed;

	virtual void Say() const = 0;

public:
	
	Pet(const string& name, const string& breed, uint age, const string& sex);
	Pet();

	virtual	const string& GetSpecies() const;
	
	virtual void Play() const = 0;

	Pet& operator= (const Pet& pet);
	bool operator== (const Pet& pet2);
	bool operator!= (const Pet& pet2);
	
	friend ostream& operator<<(ostream& os, const Pet& pet);
};
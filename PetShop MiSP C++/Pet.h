#pragma once

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

/* Заменяем тип unsigned int на unit */
typedef unsigned int uint;

class Pet 
{
private:

	static const string _pet;

protected:

	uint _age;
	string _name;
	string _breed;
	string _species;

public:

	Pet(const string& name, const string& breed, uint age, const string& species);
	//virtual ~Pet();

	virtual	string GetSpecies() const;
	virtual void PrintPet();

	virtual void Say() const = 0;
	virtual void Play() const = 0;

	friend ostream& operator<<(ostream& os, const Pet& pet);
};
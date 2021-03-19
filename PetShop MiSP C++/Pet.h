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

	string _name;
	uint _age;
	string _breed;

public:

	Pet(const string& name, const string& breed, uint age);
	virtual	string GetBreed() const;
	//virtual ~Pet();

	virtual void Say() const = 0;
	virtual void Play() const = 0;

	friend ostream& operator<<(ostream& os, const Pet& pet);
};
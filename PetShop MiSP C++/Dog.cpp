#include "Dog.h"

const string Dog::_species = "Dog";

Dog::Dog(const string& name, uint age, const string& breed, const string& sex) : Pet(name, breed, age, sex)
{
}

Dog::Dog()
{
	DataBaseHander data;

	_age = 1 + rand() % 25;
	uint sex = 1 + rand() % 2;
	
	if (sex == 1) {

		_name = data.RandReadFile("HeDogName.txt", 24);
		_sex = "Male";
	}

	if (sex == 2) {

		_name = data.RandReadFile("SheDogName.txt", 22);
		_sex = "Female";
	}

	_breed = data.RandReadFile("DogsBreed.txt", 40);
}

const string& Dog::GetSpecies() const { return _species; }

void Dog::Say() const
{
	cout << "WOOOOOOF!!!" << endl;
}

void Dog::Play() const
{
	cout << "*throw a stick " << _name << "*"  << endl;
	cout << "*" << _name << " brought a stick * WOOOF! :)))" << endl;
}
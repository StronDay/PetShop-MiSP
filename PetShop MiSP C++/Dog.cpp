#include "Dog.h"

Dog::Dog(const string& name, uint age, const string& breed) : Pet (name, breed, age)
{
	_species = "dog";
}

Dog::Dog()
{
	uint sex = 0 + rand() % 1;

	DataBaseHander data;

	_age = 1 + rand() % 25;
	
	if (sex == 0) {

		_name = data.RandReadFile("HeDogName.txt", 24);
	}

	if (sex == 1) {

		_name = data.RandReadFile("SheDogName.txt", 22);
	}

	_breed = data.RandReadFile("DogsBreed.txt", 40);
	_species = "dog";
}

void Dog::Say() const
{
	cout << "WOOOOOOF!!!" << endl;
}

void Dog::Play() const
{
	cout << "*throw a stick " << _name << "*"  << endl;
	cout << "*" << _name << " brought a stick * WOOOF! :)))" << endl;
}
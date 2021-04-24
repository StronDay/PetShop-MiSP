#include "Cat.h"

const string Cat::_species = "Cat";

Cat::Cat(const string& name, uint age, const string& breed, const string& sex) : Pet(name, breed, age, sex)
{
}

Cat::Cat()
{
	DataBaseHander data;

	uint sex = 1 + rand() % 2;
	_age = 1 + rand() % 25;

	if (sex == 1) {

		_name = data.RandReadFile("HeCatName.txt", 258);
		_sex = "Male";
	}

	if (sex == 2) {

		_name = data.RandReadFile("SheCatName.txt", 255);
		_sex = "Female";
	}

	_breed = data.RandReadFile("CatsBreed.txt", 40);
}

const string& Cat::GetSpecies() const { return _species; }

void Cat::Say() const
{
	cout << "Meow" << endl;
}

void Cat::Play() const
{
	cout << "*stroking " << _name << "*" << endl;
	cout << "MURR MURRRR :))" << endl;
}
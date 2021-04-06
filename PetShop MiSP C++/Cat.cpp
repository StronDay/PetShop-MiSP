#include "Cat.h"

Cat::Cat(const string& name, uint age, const string& breed) : Pet(name, breed, age)
{
	_species = "cat";
}

Cat::Cat()
{
	uint sex = 0 + rand() % 1;

	DataBaseHander data;

	_age = 1 + rand() % 25;

	if (sex == 0) {

		_name = data.RandReadFile("HeCatName.txt", 258);
	}

	if (sex == 1) {

		_name = data.RandReadFile("SheCatName.txt", 255);
	}

	_breed = data.RandReadFile("CatsBreed.txt", 40);
	_species = "cat";
}

void Cat::Say() const
{
	cout << "Meow" << endl;
}

void Cat::Play() const
{
	cout << "*stroking " << _name << "*" << endl;
	cout << "MURR MURRRR :))" << endl;
}
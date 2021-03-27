#include "Cat.h"

Cat::Cat(const string& name, uint age, const string& breed, const string& species) : Pet(name, breed, age, species)
{
	Say();
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
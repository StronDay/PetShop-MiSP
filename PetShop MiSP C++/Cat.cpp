#include "Cat.h"

Cat::Cat(const string& name, uint age, const string& breed) : Pet(name, breed, age)
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
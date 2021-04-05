#include "Dog.h"

Dog::Dog(const string& name, uint age, const string& breed) : Pet (name, breed, age)
{
	_species = "dog";
	Say();
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
#include "Dog.h"

Dog::Dog(const string& name, uint age, const string& breed, const string& species) : Pet (name, breed, age, species)
{
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
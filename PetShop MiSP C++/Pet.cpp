#include "Pet.h"

Pet::Pet(const string& name, const string& breed, uint age, const string& species)
{
	assert(age < 30 && "THE AGE IS TOO BIG");

	_name = name;
	_age = age;
	_breed = breed;
	_species = species;
}

string Pet::GetSpecies() const { return _species; }

ostream& operator<<(ostream& os, const Pet& pet)
{
	os << "Pet name: " << pet._name << endl;
	os << "Pet age: " << pet._age << endl;
	os << "Pet breed: " << pet._breed << endl;
	os << "Pet species: " << pet._species << endl;

	return os;
}

void Pet::PrintPet()
{
	cout << "Pet name: " << _name << endl;
	cout << "Pet age: " << _age << endl;
	cout << "Pet breed: " << _breed << endl;
	cout << "Pet species: " << _species << endl;

}
#include "Pet.h"

Pet::Pet(const string& name, const string& breed, uint age)
{
	_age = age;
	_name = name;
	_breed = breed;
	_species = "pet";
}

Pet::Pet()
{
	_age = 1;
	_name = "pet";
	_breed = "pet";
	_species = "pet";
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

bool operator==(const Pet& pet1, const Pet& pet2)
{
	return 
		(
			pet1._age == pet2._age &&
			pet1._name == pet2._name &&
			pet1._breed == pet2._breed &&
			pet1._species == pet2._species
		);
}

bool operator!=(const Pet& pet1, const Pet& pet2)
{
	return !(pet1 == pet2);
}

void Pet::PrintPet()
{
	cout << "Pet name: " << _name << endl;
	cout << "Pet age: " << _age << endl;
	cout << "Pet breed: " << _breed << endl;
	cout << "Pet species: " << _species << endl;

}

Pet& Pet::operator=(const Pet& pet)
{
	if (this == &pet) {

		return *this;
	}

	_name = pet._name;
	_age = pet._age;
	_breed = pet._breed;
	_species = pet._species;

	return *this;
}
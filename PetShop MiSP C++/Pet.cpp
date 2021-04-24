#include "Pet.h"

const string Pet::_species = "Pet";

Pet::Pet(const string& name, const string& breed, uint age, const string& sex)
	: _age(age), _name(name), _breed(breed), _sex(sex)
{
}

Pet::Pet() : _age(1), _name("Pet"), _breed("Pet"), _sex("Pet")
{
}

const string& Pet::GetSpecies() const { return _species; }

ostream& operator<<(ostream& os, const Pet& pet)
{
	os << "Pet name: " << pet._name << endl;
	os << "Pet age: " << pet._age << endl;
	os << "Pet sex: " << pet._sex << endl;
	os << "Pet breed: " << pet._breed << endl;
	os << "Pet species: " << pet.GetSpecies() << endl;

	return os;
}

bool Pet::operator==(const Pet& pet2)
{
	return 
		(
			_sex == pet2._sex &&
			_age == pet2._age &&
			_name == pet2._name &&
			_breed == pet2._breed &&
			_species == pet2.GetSpecies()
		);
}

bool Pet::operator!=(const Pet& pet2)
{
	return !(this == &pet2);
}

Pet& Pet::operator=(const Pet& pet)
{
	if (this == &pet) {

		return *this;
	}

	_sex = pet._sex;
	_age = pet._age;
	_name = pet._name;
	_breed = pet._breed;

	return *this;
}
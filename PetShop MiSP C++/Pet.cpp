#include "Pet.h"

Pet::Pet(const string& name, const string& breed, uint age)
{
	assert(age < 30 && "THE AGE IS TOO BIG");

	_name = name;
	_age = age;
	_breed = breed;
}

string Pet::GetBreed() const { return _breed; }

ostream& operator<<(ostream& os, const Pet& pet)
{
	os << "Pet name: " << pet._name << endl;
	os << "Pet age: " << pet._age << endl;
	os << "Pet breed: " << pet._breed << endl;

	return os;
}
#include "PetShop.h"

PetShop::PetShop(size_t size) : _size(size)
{
	_pets = new Pet * [_size];
	_index = 0;
}

void PetShop::Put(Pet* pet)
{
	_pets[_index] = pet;
	_index++;
}

PetShop::~PetShop()
{
	if (_pets != nullptr) {

		delete[] _pets;
	}
}

void PetShop::CheckInfoShop() const
{
	uint counter = 1;

	for (int i = 0; i < _index; i++) {
		
		cout << "Pet Number: " << counter++ << endl;
		cout << *_pets[i] << endl;
	}
}

Pet* PetShop::Get()
{
	_index--;

	Pet* pointer = _pets[_index];
	_pets[_index] = 0;


	return pointer;
}

Pet& PetShop::operator[](const int index) const
{
	if (index > _index && index < 0) {

		cout << "going out of the array" << endl;
	}

	return *_pets[index];
}

ostream& operator<<(ostream& os, const PetShop& petShop)
{
	os << "Pet name: " << *petShop._pets[petShop._index - 1] << endl;

	return os;
}

std::istream& operator>> (std::istream& in, PetShop& petShop)
{
	string name;
	string breed;
	string species;

	int age;

	cout << "Pet name: ";
	in >> name;
	cout << "Pet age: ";
	in >> age;
	cout << "Pet breed: ";
	in >> breed;
	cout << "Pet species: ";
	in >> species;
	cout << endl;

	if (species == "dog" || species == "Dog" || species == "DOG") {

		Dog dog(name, age, breed, species);
		petShop._pets[petShop._index] = &dog;
	}

	if (species == "cat") {

		//Cat cat(name, age, breed, species);
		Cat cat(name, age, breed, species);
		Pet* pet = &cat;
		petShop._pets[petShop._index] = pet;
		petShop._index = petShop._index + 1;
	}

	return in;
}
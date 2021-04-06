#include "PetShop.h"

PetShop::PetShop(const string& name, size_t size) : _size(size)
{
	_pets = new Pet * [_size];
	if (_pets != NULL) {
		_index = 0;

		_name = name;
	}
	else {

		cout << "No memory allocated (PetShop::PetShop(const string& name, size_t size) : _size(size))" << endl;
		exit(0);
	}
}

PetShop::PetShop(const string& name)
{
	uint species;

	_size = 1 + rand() % 15;

	_pets = new Pet * [_size];
	if (_pets != NULL) {
		_index = 1 + rand() % _size;

		_name = name;

		for (uint i = 0; i < _index; i++) {

			species = 1 + rand() % 2;

			if (species == 1) {

				Cat* cat = new Cat();
				_pets[i] = cat;
			}

			if (species == 2) {

				Dog* dog = new Dog();
				_pets[i] = dog;
			}
		}
	}
	else {

		cout << "No memory allocated (PetShop::PetShop(const string& name, size_t size) : _size(size))" << endl;
		exit(0);
	}
}

PetShop::PetShop(const PetShop& petShop)
{
	_size = petShop._size;

	_pets = new Pet * [_size];
	if (_pets != NULL) {

		_name = petShop._name;

		for (uint i = 0; i < _size; i++) {

			_pets[i] = petShop._pets[i];
		}

		_index = petShop._index;
	}
	else {

		cout << "No memory allocated (PetShop::PetShop(const PetShop& petShop))" << endl;
		exit(0);
	}
}

PetShop::~PetShop()
{
	if (_pets != nullptr) {

		delete[] _pets;
	}
}

void PetShop::Put(Pet* pet)
{
	_pets[_index] = pet;
	_index++;
}

void PetShop::DeletePet(uint index)
{
	for (uint i = index; i < _index; i++) {

		_pets[i] = _pets[i + 1];
	}

	_index--;
}

Pet* PetShop::Get()
{
	_index--;

	Pet* pointer = _pets[_index];
	_pets[_index] = 0;


	return pointer;
}

Pet& PetShop::operator[](const uint index) const
{
	if (index > _index && index < 0) {

		cout << "going out of the array" << endl;
	}

	return *_pets[index];
}

void PetShop::operator()() const
{
	cout << "PetShop name: "<< _name << endl << endl;
	
	uint counter = 1;

	for (uint i = 0; i < _index; i++) {

		cout << "Pet Number: " << counter++ << endl;
		cout << *_pets[i] << endl;
	}

	cout << "Free place: " << (_size - _index) << endl;
}

PetShop& PetShop::operator=(const PetShop& shop)
{
	if (this == &shop) {
	
		return *this;
	}

	_size = shop._size;

	for (uint i = 0; i < _size; i++) {
	
		_pets[i] = shop._pets[i];
	}

	_index = shop._index;

	return *this;
}

ostream& operator<<(ostream& os, const PetShop& petShop)
{
	os << "Pet name: " << *petShop._pets[petShop._index - 1] << endl;

	return os;
}

istream& operator>>(istream& in, PetShop& petShop)
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

	if (species == "dog" || species == "Dog" || species == "DOG") {

		Pet* pet = new Dog(name, age, breed);
		if (pet != NULL) {
			petShop.Put(pet);

			return in;
		}

		cout << "No memory allocated (istream& operator>>(istream& in, PetShop& petShop))" << endl;
		exit(0);
	}

	if (species == "cat" || species == "Cat" || species == "CAT") {

		Pet* pet = new Cat(name, age, breed);
		if (pet != NULL) {
			petShop.Put(pet);

			return in;
		}

		cout << "No memory allocated (istream& operator>>(istream& in, PetShop& petShop))" << endl;
		exit(0);
	}

	cout << "There is no such type of animal" << endl;

	return in;
}

bool operator==(const PetShop& petShop1, const PetShop& petShop2)
{
	uint counter = 0;

	PetShop _shop2 = petShop2;

	for (uint i = 0; i < petShop1._index; i++)
		for (uint j = 0; j < _shop2._index; j++) {

			if (petShop1[i] == _shop2[j]) {

				counter++;
				_shop2.DeletePet(j);
				
				break;
			}
		}

	return (petShop1._index == petShop2._index && counter == petShop1._index);
}

bool operator!=(const PetShop& shop1, const PetShop& shop2)
{
	return !(shop1 == shop2);
}
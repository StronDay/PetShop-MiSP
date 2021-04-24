#include "PetShop.h"

PetShop::PetShop(const string& name, size_t size) : _size(size), _index(0), _name(name)
{
	_pets = new Pet * [_size];
}

PetShop::PetShop(const string& name, const size_t index, const size_t size) 
	: _name(name), _size(size), _index(index)
{
	uint species;
	_pets = new Pet * [_size];
	
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

PetShop::PetShop(const PetShop& petShop) : _size(petShop._size)
{
	_pets = new Pet * [_size];

	memcpy(this->_pets, petShop._pets, petShop._index * sizeof(Pet*));

	_name = petShop._name;
	_index = petShop._index;
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
	Pet** buff = new Pet * [_size];

	memcpy(buff, _pets, (index - 1) * sizeof(Pet*));
	memcpy(&buff[index - 1], &_pets[index], (_size - index) * sizeof(Pet*));

	delete[] _pets; 
	_size--;

	_pets = buff;

	_index--;
	_pets[_index] = 0;
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

PetShop& PetShop::operator=(const PetShop& shop) // FIXME
{
	if (this == &shop) {
	
		return *this;
	}

	Pet** buff = new Pet * [shop._size];

	memcpy(buff, shop._pets, shop._size * sizeof(Pet*));
	delete[] _pets;
	
	_pets = buff;

	_name = shop._name;
	_size = shop._size;
	_index = shop._index;

	return *this;
}

ostream& operator<<(ostream& os, const PetShop& petShop)
{
	os << "Pet name: " << *petShop._pets[petShop._index - 1] << endl;

	return os;
}

bool PetShop::operator==(const PetShop& petShop2)
{
	uint counter = 0;

	PetShop _shop2 = petShop2;

	for (uint i = 0; i < _index; i++)
		for (uint j = 0; j < _shop2._index; j++) {

			if (_pets[i] == &_shop2[j]) {

				counter++;
				_shop2.DeletePet(j);
				
				break;
			}
		}

	return (_index == petShop2._index && counter == _index);
}

bool PetShop::operator!=(const PetShop& shop2)
{
	return !(this == &shop2);
}
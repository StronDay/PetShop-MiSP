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

void PetShop::CheckInfoShop()
{
	uint counter = 1;

	for (int i = 0; i < _index; i++) {
		
		cout << "Pet Number: " << counter++ << endl;
		cout << *_pets[i] << endl;
	}
}

//Pet& PetShop::Get() const
//{
//	return ;
//}
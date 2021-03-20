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

//Pet& PetShop::Get() const
//{
//	return *this;
//}
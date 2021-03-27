#pragma once

#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

class PetShop 
{
private:

	Pet** _pets;

	size_t _size;
	size_t _index;

public:

	PetShop(size_t size);
	~PetShop();
	

	void Put(Pet* pet);
	//Pet* Get() const;

	void CheckInfoShop();
};
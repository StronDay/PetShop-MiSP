#pragma once

#include <iostream>
#include <string>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"

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
	Pet* Get();

	void CheckInfoShop() const;

	Pet& operator[] (const int index) const;

	friend ostream& operator<<(ostream& os, const PetShop& petShop);
	friend std::istream& operator>> (std::istream& in, PetShop& petShop);
};
#pragma once

#include <iostream>
#include <string>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include <ctime>
#include "DataBaseHander.h"

using namespace std;

class PetShop 
{
private:

	Pet** _pets;

	size_t _size;
	size_t _index;
	string _name;

public:

	PetShop(const string& name, size_t size);
	PetShop(const string& name, const size_t index, const size_t size);
	~PetShop();

	PetShop(const PetShop& petShop);
	

	void Put(Pet* pet);
	void DeletePet(uint index);
	Pet* Get();

	Pet& operator[](const uint index) const;
	PetShop& operator= (const PetShop& shop);
	void operator()() const;
	bool operator== (const PetShop& shop2);
	bool operator!= (const PetShop& shop2);

	friend ostream& operator<<(ostream& os, const PetShop& petShop);
	//friend istream& operator>>(istream& in, PetShop& petShop);
};
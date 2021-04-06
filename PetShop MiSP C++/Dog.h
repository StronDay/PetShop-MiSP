#pragma once

#include "Pet.h"

class Dog : public Pet
{
protected:

	void Say() const override;

public:

	Dog(const string& name, uint age, const string& breed);
	Dog();

	void Play() const override;
};

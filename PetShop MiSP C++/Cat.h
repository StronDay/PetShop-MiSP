#pragma once

#include "Pet.h"

class Cat : public Pet
{
protected:

	void Say() const override;

public:

	Cat(const string& name, uint age, const string& breed);
	Cat();

	void Play() const override;
};

#pragma once

#include "Pet.h"

class Cat : public Pet
{
private:

	static const string _species;

protected:

	void Say() const override;

public:

	Cat(const string& name, uint age, const string& breed, const string& sex);
	Cat();

	const string& GetSpecies() const override final;
	void Play() const override;
};

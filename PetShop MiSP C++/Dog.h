#pragma once

#include "Pet.h"

class Dog : public Pet
{
private:

	static const string _species;

protected:

	void Say() const override;

public:

	Dog(const string& name, uint age, const string& breed, const string& sex);
	Dog();
	
	const string& GetSpecies() const override final;
	void Play() const override;
};

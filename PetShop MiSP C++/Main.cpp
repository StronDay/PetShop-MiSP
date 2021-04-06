#include "PetShop.h"
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "DataBaseHander.h"

int main() 
{
	srand(time(NULL));

	PetShop MyPetShop("Zverinets", 10);
	PetShop HimPetShop("Zverinets", 10);
	PetShop shop("RandShop");

	Cat cat1("Barsik", 3, "Yard");
	Dog dog1("Lord", 5, "Yard");
	Cat cat2("Tom", 8, "Yard");

	MyPetShop.Put(&cat2);
	MyPetShop.Put(&cat2);
	MyPetShop.Put(&cat1);

	HimPetShop.Put(&cat2);
	HimPetShop.Put(&cat2);
	HimPetShop.Put(&cat1);
	
	shop();

	return 0;
}
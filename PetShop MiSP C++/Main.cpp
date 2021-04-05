#include "PetShop.h"
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include <sstream>

int main() 
{

	PetShop MyPetShop("Zverinets", 10);
	PetShop HimPetShop("Zverinets", 10);

	Cat cat1("Barsik", 3, "Yard");
	Dog dog1("Lord", 5, "Yard");
	Cat cat2("Tom", 8, "Yard");
	//Dog* dog2 = new Dog("Charli", 6, "Yard");

	cout << endl;

	MyPetShop.Put(&cat2);
	MyPetShop.Put(&cat2);
	MyPetShop.Put(&cat1);
	//MyPetShop.Put(dog2);

	HimPetShop.Put(&cat2);
	HimPetShop.Put(&cat2);
	HimPetShop.Put(&cat1);
	//HimPetShop.Put(dog2);

	cout << endl;
	 
	if (MyPetShop == HimPetShop) {
	
		cout << "Yesss!!" << endl;
	
	}

	return 0;
}
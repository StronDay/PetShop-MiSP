#include "PetShop.h"
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"

int main() 
{

	PetShop MyPetShop(2);
	Cat cat("Barsik", 3, "Yard");
	Dog dog("Lord", 5, "Yard");

	//MyPetShop.Put();

	cout << endl;
	dog.Play();
	cout << endl;
	cat.Play();
	cout << endl;
	cout << dog;
}
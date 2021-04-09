#include "PetShop.h"
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "DataBaseHander.h"

int main() 
{
	srand(time(NULL));

	PetShop shop("MyZooo");
	PetShop shop2 = shop;

	shop();
	shop2();

	return 0;
}
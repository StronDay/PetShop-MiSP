#include "PetShop.h"
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "DataBaseHander.h"

int main() 
{
	srand(time(NULL));

	PetShop shop("MyZooo" , 4, 8);
	PetShop shop2("YouZooo", 7, 8);
	
	shop = shop2;
	shop();


	return 0;
}
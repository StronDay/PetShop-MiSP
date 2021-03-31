#include "PetShop.h"
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"

int main() 
{

	PetShop MyPetShop(10);
	Cat cat("Barsik", 3, "Yard", "cat");
	Dog dog("Lord", 5, "Yard", "dog");
	Dog dog2("Charli", 2, "Yard", "dog");
	cout << endl;

	MyPetShop.Put(&cat);
	MyPetShop.Put(&dog);

	MyPetShop.CheckInfoShop();

	//cout << MyPetShop.Get() << endl << endl;

	//MyPetShop.CheckInfoShop();
	//cout << endl;

	/*cout << "*****************" << endl;
	cout << MyPetShop[0] << endl;

	cout << "*****************" << endl;
	cout << MyPetShop << endl;*/

	cin >> MyPetShop;
	cout << "*****************" << endl;
	MyPetShop.CheckInfoShop();

	cout << "*****************" << endl;
	cout << MyPetShop;
	
	/*cout << endl;
	dog.Play();
	cout << endl;
	cat.Play();
	cout << endl;
	cout << dog;
	cout << endl;
	cout << cat;*/
}
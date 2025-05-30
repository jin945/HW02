#include "Animal.h"


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	Animal *animals[3];
	Dog dog;
	Cat cat;
	Cow cow;
	Zoo zoo;


	//필수
	animals[0] = &dog;
	animals[1] = &cat;
	animals[2] = &cow;

	for (int i = 0; i < 3; i++)
	{
		animals[i]->makeSound();
	}


	//도전
	for (int i = 0; i < 10; ++i) {
		Animal* animal = zoo.createRandomAnimal();
		zoo.addAnimal(animal);
	}
	
	zoo.animalActions();

}

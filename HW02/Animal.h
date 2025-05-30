#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal
{
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {}


};


class Dog : public Animal 
{
public:
    void makeSound() const override 
    {
        cout << "港港" << endl;
    }
};


class Cat : public Animal 
{
public:
    void makeSound() const override 
    {
        cout << "具克" << endl;
    }
};


class Cow : public Animal 
{
public:
    void makeSound() const override
    {
        cout << "澜皋" << endl;
    }
};


class Zoo {
private:
    Animal* animals[10];
public:
   
    Zoo()
    {
        for (int i = 0; i < 10; ++i) {
            animals[i] = nullptr; 
        }
		
    }

   
    void addAnimal(Animal* animal)
    {
        for (int i = 0; i < 10; ++i)
        {
            if (animals[i] == nullptr)
            {
                animals[i] = animal;
                return;
            }
        }
    }

    
    void animalActions()
    {
        for (int i = 0; i < 10; ++i) {
            if (animals[i] != nullptr) {
                animals[i]->makeSound();
            }
        }
	}

    Animal* createRandomAnimal()
    {
        
        int random = rand() % 3; 
        switch (random) {
            case 0: return new Dog(); 
            case 1: return new Cat();
            case 2: return new Cow(); 
		}
	
    }

    ~Zoo()
    {
        for (int i = 0; i < 10; ++i) {
            if (animals[i] != nullptr)
            {
                delete animals[i];
            }
		}
    }
};

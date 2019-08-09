#include <iostream>
#include <list>

/**
 * This is an abstract base class. You can never create a "pet", but you can create a cat/dog.
 */
class Pet {
public:
	virtual void talk() = 0;
};

/**
 * A Dog is a Pet, and it implements the Pet::talk method.
 */
class Dog: public Pet {
public:
	void talk() { std::cout << "bark" << std::endl; }
};

/**
 * A Cat is a Pet, and it implements the Pet::talk method.
 */
class Cat: public Pet {
public:
	void talk() { std::cout << "meow" << std::endl; }
};

// main is the entry point for the program
int main() {
	std::cout << "hello world" << std::endl;

	// create a list of pets
	std::list<Pet *> my_pets;

	// add a dog to the list
	my_pets.push_back(new Dog());

	// add a cat to the list
	my_pets.push_back(new Cat());

	// tell all pets to talk
	for( auto && pet: my_pets) {
		std::cout << "this pet says" << std::endl;
		pet->talk();
	}

	// delete all pets to avoid a memory leak, if you ever
	// use new, then make sure to use delete, note that you 
	// can use smart pointers to handle this for you or avoid
	// dynamic allocation
	for( auto && pet: my_pets) {
		delete pet;
	}
	return 0;
}

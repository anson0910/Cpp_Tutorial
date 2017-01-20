#include <iostream>
using namespace std;

class Animal {
private:
	static int ID;
	const int id;
	string name;

public:
	Animal() : id(ID++) { cout << "Constructor called.\n"; }

	Animal(const Animal &other) : id(ID++), name(other.name) {
		cout << "Copy constructor called.\n";
	}

	~Animal() {
		cout << "Destructor called.\n";
	}

	void setName(string name) { this->name = name; }

	void speak() const {
		cout << "My id is " << id << ", my name is " + name << endl;
	}
};

int Animal::ID = 1;


/**
 * If you return Animal at the end of the function,
 * the copy constructor will be called two times, which is inefficient.
 *
 * You should not return reference to local object,
 * since it is only valid in function scope.
 *
 * Returning pointer is the best way to work around this,
 * but remember to delete after done using object!
 */
Animal *createAnimal() {
	Animal *pAnimal = new Animal();
	pAnimal->setName("Alex");
	return pAnimal;
}


int main() {
	Animal *pFrog = createAnimal();
	pFrog->speak();
	delete pFrog;
	return 0;
}

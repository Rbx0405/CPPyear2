#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() const
    { // Ensure the virtual keyword is here
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() const override
    { // Function signature matches base class
        cout << "Dog says: Woof! Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() const override
    { // Function signature matches base class
        cout << "Cat says: Meow! Meow!" << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.makeSound(); // Calls Dog's overridden makeSound()
    cat.makeSound(); // Calls Cat's overridden makeSound()

    return 0;
}
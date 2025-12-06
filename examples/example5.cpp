#include <iostream>
class Animal {
public:
    // pure virtual method
    virtual void makeSound() = 0;

    // non-virtual method is allowed
    void describe() {
        std::cout << "I'm an animal" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Wof wof" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow meow" << std::endl;
    }
};

int main ()
{
// dynamically created objects
Animal *animal1 = new Dog();
Animal *animal2 = new Cat();

// using the '->' instead of '.' because animal1 and animal2 are pointers
animal1->makeSound();
animal2->makeSound();

// don't forget to delete dynamically allocated objects
delete animal1;
delete animal2;
}
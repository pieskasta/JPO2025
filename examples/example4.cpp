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

int main ()
{
Dog dog;
dog.describe();
dog.makeSound();
//Animal animal; // ERROR!
}

#include <iostream>
class Animal {
public:
    std::string name;

    Animal() {
        name = "unknown";
        std::cout << "Base class' default constructor called!" << std::endl; 
    }
    Animal(std::string n) : name(n) {
        std::cout << "Base class' parametrized constructor called!" << std::endl;
    }
    void printName() {
        std::cout << "Name: " << name << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "Derived class' default constructor called!" << std::endl; 
    }
    Dog(std::string n) : Animal(n) { // explicitly call base class' parametrized constructor
        std::cout << "Derived class' parametrized constructor called!" << std::endl;
    }
};


int main ()
{
Dog dog1;
dog1.printName();

Dog dog2("Burek");
dog2.printName();
}
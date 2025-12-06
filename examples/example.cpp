// base class
#include <iostream>
class Animal {
public:
    void introduce() {
        std::cout << "I'm an animal"<< std::endl;
    }
};

// derived class, public inheritance
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "Wof wof!" << std::endl;
    }
};

int main ()
{
Dog dog;
dog.introduce(); // method from the base class
dog.makeSound(); // method from the derived class
}
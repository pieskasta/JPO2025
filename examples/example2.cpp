#include <iostream>
class Animal {
public:
    virtual void makeSound() {
        std::cout << "The sound of animal"<< std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Wof wof!" << std::endl;
    }
};


int main ()
{
Animal animal;
animal.makeSound();
Dog dog;
dog.makeSound();
}
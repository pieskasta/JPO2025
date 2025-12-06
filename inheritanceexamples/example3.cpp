#include <iostream>
class Animal {
public:
    // pure virtual method
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound () override {
        std::cout << "Making sound\n";
    }

};

int main ()
{
    Dog husky;
    husky.makeSound();
}
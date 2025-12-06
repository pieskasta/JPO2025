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
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow";
    }
};

Animal* chooseAnimal(int number) {
    if (number%2 == 0) {
         Animal *animal = new Dog();
        return animal; /* TODO return dynamically created Dog object */
    } else {
         Animal *animal = new Cat();
        return animal; /* TODO return dynamically created Cat object */
    }
}

int main() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    /* TODO properly free dynamically allocated object */
    delete animal;

    return 0;
}

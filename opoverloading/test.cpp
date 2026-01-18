#include <iostream>
#include <vector>
#include "ComplexNumber.hpp"
int main () {
std::vector<int> v1 {1, 2, 3, 4};
std::vector<int> v2 {1, 2, 3, 4};
std::vector<int> v3 {30, 40, 50};
std::cout << "v1 equals v2: " << (v1 == v2) << std::endl;
std::cout << "v1 equals v3: " << (v1 == v3) << std::endl;

ComplexNumber Liczba1 (1.2,2.3);
ComplexNumber Liczba2 (2.8,3.7);
ComplexNumber a(1, 2), b(3, 4);

ComplexNumber Wynik = Liczba1 + Liczba2;

//Wynik.print();
std::cout << a + b << std::endl;
std::cout << a - b << std::endl;

//mnozenie (a_real + a_imag·i)(b_real + b_imag·i)
}
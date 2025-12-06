#include <iostream>
class Myclass {
private:
    std::string m_name;
public:

    ~Myclass(){
        std::cout << "Destructor of <" << m_name << "> called\n";
    }

    // parameterized constructor
    Myclass(std::string n) : m_name(n) {
        std::cout << "Constructor of <" << m_name << "> called\n";
    }
};

Myclass obj1 ("global");

int main ()
{
    std::cout << "Entering main() function\n";
    Myclass obj2 ("local");

    if(true) {
        Myclass obj3 ("block");
    }

    std::cout << "Leaving main() function\n";
}

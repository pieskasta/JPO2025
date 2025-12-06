
#include <iostream>
class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
        if(a>0)
        {
        m_age = a;
        }
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if(n!="")
        {
            m_name = n;
        }
    }
    std::string getName() const {
        return m_name;
    }
};

int main (){
    Student student1;
    std::string input;
    int int_input;
    std::cout << "Enter your name: ";
    std::cin >> input;
    student1.setName(input);
    std::cout << "Enter your age: ";
    std::cin >> int_input;
    student1.setAge(int_input);
    //student1.setName("Konrad");
    std::cout << student1.getName() << " is " << student1.getAge() << " yrs old.\n";
}

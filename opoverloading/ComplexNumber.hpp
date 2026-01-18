#pragma once
#include <iostream>
class ComplexNumber {
private:
    double m_real;
    double m_imag;
public:

    friend std::ostream& operator<<(std::ostream& os,
                                    const ComplexNumber& c);//do przeciazenia << powalone to jest

    ~ComplexNumber(){}

    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {

    }

    void set_real (double r = 0.0)
    {
        m_real = r;
    }

    void set_imag (double i = 0.0)
    {
        m_imag = i;
    }

    double get_real (void)
    {
        return m_real;
    }

    double get_imag (void)
    {
        return m_imag;
    }

    void print (void)
    {
        std::cout << m_real << "," << m_imag;
;
    }

    ComplexNumber operator+(const ComplexNumber& other) const {
    // NOTE: returns a new object by copy
    return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
    return ComplexNumber(m_real - other.m_real,
    m_imag - other.m_imag);
}
};

inline std::ostream& operator<<(std::ostream& os,
                                const ComplexNumber& c) {
    os << c.m_real << " + " << c.m_imag << "i";
    return os;
}
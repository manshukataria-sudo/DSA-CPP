#include <iostream>
#include <string>
using namespace std;
class Complex
{
private:
    double real;
    double imaginary;

public:
    void setReal(double real) { this->real = real; }
    void setImaginary(double imaginary) { this->imaginary = imaginary; }
    double getReal() { return this->real; }
    double getImaginary() { return this->imaginary; }
    Complex operator+(Complex &b)
    {
        Complex c;
        c.real = this->real + b.real;
        c.imaginary = this->imaginary + b.imaginary;
        return c;
    }
    void operator++()
    {
        (this->real)++;
    }
};
int main()
{
    Complex a, b;
    a.setReal(1.6);
    a.setImaginary(4.78);
    b.setReal(2);
    b.setImaginary(4.5);
    Complex c = a + b;
    cout << "Resultant complex number is : " << c.getReal() << "+" << c.getImaginary() << "i" << endl;
    ++b;
    cout << "New real part is : " << b.getReal();
}

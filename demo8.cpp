#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void print()
    {
        cout << "Real value = " << this->real << endl;
        cout << "Imag value = " << this->imag << endl;
    }
    friend void sum(Complex &c);
    friend class B;
};

void sum(Complex &c)
{
    cout << "Addition of real and imag =" << c.real + c.imag << endl;
}

class B
{
public:
    void mul(Complex &c)
    {
        cout << "Multiplication of real and imag =" << c.real * c.imag << endl;
    }
};

int main()
{
    Complex c1(10, 20);
    sum(c1);
    B b;
    b.mul(c1);
    return 0;
}
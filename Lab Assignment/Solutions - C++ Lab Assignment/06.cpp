#include <iostream>
using namespace std;

class Complex
{
    float real, img;

public:
    void set(float, float);
    void disp();
    Complex sum(Complex);
};

void Complex::set(float r, float i)
{
    real = r;
    img = i;
}

void Complex::disp()
{
    cout << real << " + " << img << "i" << endl;
}

Complex Complex::sum(Complex c)
{
    Complex result;
    result.real = real + c.real;
    result.img = img + c.img;

    return result;
}

int main()
{
    Complex c1, c2, c3;

    c1.set(4, 5);
    c2.set(5, 6);
    c3 = c2.sum(c1);

    cout << "Complex number c1 is: ";
    c1.disp();
    cout << "Complex number c2 is: ";
    c2.disp();
    cout << "Complex number c3 is: ";
    c3.disp();
    return 0;
}
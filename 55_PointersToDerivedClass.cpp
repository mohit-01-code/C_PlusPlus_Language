#include <iostream>
using namespace std;
// Pointers to derived Class in C++

class complex_real
{
    int real = 5;

public:
    void display()
    {
        cout << "The real part of complex number is : " << real << endl;
    }
};

class complex_imaginary : public complex_real
{
    int imaginary = 19;

public:
    void display()
    {
        cout << "The imaginary part of complex number is : " << imaginary << endl;
    }
};

int main()
{
    complex_real *real_ptr; //Pointer of base class type
    complex_real r;
    complex_imaginary i;
    real_ptr = &i;       //Base class type of pointer pointing to derived class object
    real_ptr->display(); // Calls base class function

    complex_imaginary *imaginary_ptr;
    imaginary_ptr = &i;
    imaginary_ptr->display();
    return 0;
}
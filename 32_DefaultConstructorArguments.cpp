#include <iostream>
using namespace std;
// Default Construtor Arguments

class complex
{
    int real, comp;

public:
    complex(int a = 0, int b = 0) // '0' is default arguments
    {
        real = a;
        comp = b;
    }

    void display_complex(complex complex_number_1, complex complex_number_2, complex complex_number_3)
    {
        cout << "Complex 1 number is : " << complex_number_1.real << " + " << complex_number_1.comp << "i" << endl;
        cout << "Complex 3 number is : " << complex_number_2.real << " + " << complex_number_2.comp << "i" << endl;
        cout << "Complex 3 number is : " << complex_number_3.real << " + " << complex_number_3.comp << "i" << endl;
    }
};

int main()
{
    complex complex_number_1(5, 4), complex_number_2(12), complex_number_3;
    complex_number_1.display_complex(complex_number_1, complex_number_2, complex_number_3);
    return 0;
}
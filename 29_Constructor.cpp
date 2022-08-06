#include <iostream>
using namespace std;
// Constructor
class complex
{
    int c1, c2;

public:
    complex(void); //Declared Constructor
    void print_complex(void)
    {
        cout << "The complex number is : " << c1 << " + " << c2 << "i" << endl;
    }
};
complex::complex()
{ //It do not have any return type
    c1 = 5;
    c2 = 4;
}
int main()
{
    complex o1; //Automatically invoked when object is created
    o1.print_complex();
    return 0;
}
#include <iostream>
using namespace std;
//Friend function in OOP
class complex
{
    int c1, c2;
    friend void sumcomplex(complex);

public:
    void setcomplex(void);
};

void complex::setcomplex()
{
    cout << "Enter real parameter of complex number : " << endl;
    cin >> c1;
    cout << "Enter complex parameter of complex number : " << endl;
    cin >> c2;
}

void sumcomplex(complex o1)
{
    cout << "The complex number is : " << o1.c1 << " + " << o1.c2 << "i" << endl;
}
int main()
{
    complex o1;
    o1.setcomplex();
    sumcomplex(o1);
    return 0;
}
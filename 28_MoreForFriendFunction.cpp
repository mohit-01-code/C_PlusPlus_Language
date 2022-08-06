#include <iostream>
using namespace std;
// Reference of Objects
class complex
{
    int c1, c2;
    friend complex swap_complex(complex &);

public:
    void set_complex(void)
    {
        cout << "Enter the real parameter of complex number :" << endl;
        cin >> c1;
        cout << "Enter the complex parameter of complex number :" << endl;
        cin >> c2;
    }
    void print_Complex(complex o1)
    {
        cout << "Your complex number is : " << o1.c1 << " + " << o1.c2 << "i" << endl;
    }
};

complex swap_complex(complex &o1)
{
    int temp = o1.c1;
    o1.c1 = o1.c2;
    o1.c2 = temp;
    return o1;
}
int main()
{
    complex o1;
    o1.set_complex();
    o1.print_Complex(o1);
    cout << "After Swaping : " << endl;
    o1.print_Complex(swap_complex(o1));
    return 0;
}
#include <iostream>
using namespace std;
// Templates with multiple classes in C++
template <class T1, class T2>

class calculator
{
    T1 a;
    T2 b;

public:
    calculator(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;
        cout << "a / b = " << a / b << endl;
    }
};

int main()
{
    calculator<int, float> cal1(8, 4.4);
    cal1.display();
    return 0;
}
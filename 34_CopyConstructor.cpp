#include <iostream>
using namespace std;
// Copy Constructor in C++

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    number(number &obj)
    {
        cout << "The copy constructor called !!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is : " << a << endl;
    }
};

int main()
{
    number x, y, z(12), z1;
    x.display();
    y.display();
    z.display();
    z1 = number(z);
    z1.display();
    return 0;
}
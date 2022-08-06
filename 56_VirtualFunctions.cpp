#include <iostream>
using namespace std;
// Virtual Functions(Polymorphism) in C++

class base
{
    int data1 = 10;

public:
    virtual void display()
    {
        cout << "The data of base class is : " << data1 << endl;
    }
};

class derived : public base
{
    int data2 = 20;

public:
    void display()
    {
        cout << "The data of derived class is : " << data2 << endl;
    }
};

int main()
{
    base *bptr;
    base b;
    derived d;
    bptr = &d;
    bptr->display();

    return 0;
}
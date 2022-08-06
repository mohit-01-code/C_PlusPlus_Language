#include <iostream>
using namespace std;
// Construction in derived class in C++

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Constructer of base1 is called." << endl;
    }
    void showBase1()
    {
        cout << "The value of data 1 is : " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "Constructer of base2 is called." << endl;
    }
    void showBase2()
    {
        cout << "The value of data 2 is : " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1;

public:
    derived(int i, int j, int d) : base1(i), base2(j)
    {
        derived1 = d;
        cout << "Constructor of derived class is called." << endl;
    }
    void showDerived()
    {
        cout << "The value of derived value is : " << derived1 << endl;
    }
};
int main()
{
    derived d1(12, 13, 20);
    d1.showBase1();
    d1.showBase2();
    d1.showDerived();
    return 0;
}
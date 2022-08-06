#include <iostream>
using namespace std;
// Multiple Inheritance in C++

class base1
{
protected:
    int base_1;

public:
    void set_base1(int b1)
    {
        base_1 = b1;
    }
};

class base2
{
protected:
    int base_2;

public:
    void set_base2(int b2)
    {
        base_2 = b2;
    }
};

class derived : public base1, public base2
{ //Derived class is inherited from Base1 and base2 classes [(base1, base2)--->derived]
protected:
    int derived1;

public:
    friend void display(derived);
    void set_derived()
    {
        derived1 = base_1 + base_2;
    }
    void display()
    {
        set_derived();
        cout << "The data of base 1 is : " << base_1 << endl;
        cout << "The data of base 2 is : " << base_2 << endl;
        cout << "The data of derived class is : " << derived1 << endl;
    }
};

int main()
{
    derived data;
    data.set_base1(45);
    data.set_base2(5);
    data.display();
    return 0;
}
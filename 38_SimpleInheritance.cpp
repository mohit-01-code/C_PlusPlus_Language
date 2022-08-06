#include <iostream>
using namespace std;
// Single Inheritance in C++

class base
{
    int data1;

public:
    int data2;
    void set_data(int, int);
    int get_data1();
};

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void base::set_data(int a, int b)
{
    data1 = a;
    data2 = b;
}

int base::get_data1()
{
    return data1;
}

void derived::process()
{
    data3 = get_data1() + data2;
}

void derived::display()
{
    process();
    cout << "The value of data 1 is : " << get_data1() << endl;
    cout << "The value of data 2 is : " << data2 << endl;
    cout << "The value of data 3 is : " << data3 << endl;
}
int main()
{
    derived d1, d2;
    d1.set_data(10, 20);
    d1.display();
    d2.set_data(200, 100);
    d2.display();
    return 0;
}
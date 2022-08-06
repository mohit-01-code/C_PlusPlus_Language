#include <iostream>
using namespace std;
// Ambiguity Resolution in C++

class base1
{
    int data1 = 5;

public:
    void showdata()
    {
        cout << "The value of data 1 is : " << data1 << endl;
    }
};
class base2
{
    int data2 = 10;

public:
    void showdata()
    {
        cout << "The value of data 2 is : " << data2 << endl;
    }
};
class derived : public base1, public base2
{
public:
    void showdata()
    { // To resolve ambiguity
        base1::showdata();
    }
};

int main()
{
    derived d;
    d.showdata();
    return 0;
}
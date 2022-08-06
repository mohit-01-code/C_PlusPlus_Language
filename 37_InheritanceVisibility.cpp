#include <iostream>
using namespace std;
// Visibility in Inheritance in C++

class employee
{
public:
    int id;
    int salary;
    employee(int Eid)
    {
        id = Eid;
        salary = 4500;
    }
    employee() {}
    void display_e()
    {
        cout << "The Id of employee " << id << " having salary " << salary << endl;
    }
};

class programmer : employee
{
    int language;

public:
    programmer(int Pid)
    {
        id = Pid;
        salary = 5500;
        language = 10;
    }
    void display()
    {
        cout << "The Programmer of Id " << id << " having salary " << salary
             << " handles language " << language << endl;
    }
};

int main()
{
    employee harry(121), mohit(122);
    harry.display_e();
    mohit.display_e();

    programmer p1(123), p2(124);
    p1.display();
    p2.display();

    return 0;
}
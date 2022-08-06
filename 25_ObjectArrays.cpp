#include <iostream>
using namespace std;
//Arrays to objects and passing Objects as an Arguments
class complex
{
    int c1, c2;

public:
    void setcomplex(int a1, int a2)
    {
        c1 = a1;
        c2 = a2;
    }
    void sumcomplex(complex o1, complex o2)
    {
        c1 = o1.c1 + o2.c1;
        c2 = o1.c2 + o2.c2;
        cout << "The sum of complex number is : " << c1 << " + " << c2 << "i" << endl;
    }
};
class employee
{
    int id;

public:
    void setId(void)
    {
        cout << "Enter your employee ID : ";
        cin >> id;
    }
    void displayId(void)
    {
        cout << "The ID of this employee is : " << id << endl;
    }
};
int main()
{
    complex o1, o2, sum;
    o1.setcomplex(2, 5);
    o2.setcomplex(4, 6);
    sum.sumcomplex(o1, o2);
    employee google[5];
    for (int i = 0; i < 5; i++)
    {
        google[i].setId();
        google[i].displayId();
    }

    return 0;
}
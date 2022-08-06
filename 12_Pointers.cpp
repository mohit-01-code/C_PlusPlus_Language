#include <iostream>
using namespace std;
//Pointers and Addresses
int main()
{
    int a = 5;
    int *p = &a;
    cout << "The value of a is : " << a << endl;
    cout << "The address of a(&a) is : " << &a << endl;
    cout << "The address of a(p) is : " << p << endl;
    cout << "The value of a(*p) is : " << *p << endl;
    cout << "The address of pointer is : " << &p << endl;
    *p = 6; //We can also access and change the value of variable pointed by a pointer
    cout << "The value of a after changing it by pointer is : " << a << endl;

    //pointer to a pointer
    int **s = &p;
    cout << "The value a using **s(pointer to pointer) is : " << **s << endl;
    cout << "The address of a using(*s) pointer to pointer is : " << *s << endl;
    cout << "The address of pointer p using (s) is : " << s << endl;
    return 0;
}
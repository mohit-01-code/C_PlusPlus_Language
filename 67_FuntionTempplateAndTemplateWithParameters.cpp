#include <iostream>
using namespace std;
// Function Template and Template with Parameters in C++

template <class T1, class T2>
float add(T1 a, T2 b)
{
    float d;
    d = a + b;
    return d;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float sum = add(5.5, 4.5);
    cout << "The sum is : " << sum << endl;
    int x = 10, y = 15;
    swapp(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
#include <iostream>
using namespace std;
// Member Function Templates and Overloading Template Function

template <class T>
class data
{
    T data1;

public:
    data(T a)
    {
        data1 = a;
    }
    void display();
};
template <class T>
void data<T>::display()
{
    cout << "The value of data is " << data1 << endl;
}

int main()
{
    data<float> d(5.5);
    d.display();
    return 0;
}
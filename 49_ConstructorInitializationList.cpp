#include <iostream>
using namespace std;
// Constructor Initialization List in C++

class data
{
    int data1, data2;

public:
    // data(int a, int b):data1(a), data2(b){
    data(int a, int b) : data1(a), data2(b * data1)
    {
        cout << "The value of data 1 is : " << data1 << endl;
        cout << "The value of data 2 is : " << data2 << endl;
    }
};

int main()
{
    data d(4, 5);
    return 0;
}
#include <iostream>
using namespace std;
// This Pointer in C++

class data
{
    int data1;

public:
    void setdata(int data1)
    {
        // data1=data1;
        this->data1 = data1;
    }
    void getdata()
    {
        cout << "The value of data is : " << data1 << endl;
    }
};

int main()
{
    data d;
    d.setdata(5);
    d.getdata();
    return 0;
}
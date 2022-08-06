#include <iostream>
using namespace std;
// Templates in C+
template <class t>
class vector
{
    t *arr;
    t size;

public:
    vector(t s)
    {
        size = s;
        arr = new t[size];
    }
    void setVector(t x, t y, t z)
    {
        arr[0] = x;
        arr[1] = y;
        arr[2] = z;
    }
    void display()
    {
        cout << "(";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            if (i == (size - 1))
            {
                cout << ")";
            }
            else
            {
                cout << ", ";
            }
        }
    }
    t dotProduct(vector &v1, vector &v2)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += v1.arr[i] * v2.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3), v2(3);
    
    v1.setVector(1, 1, 1);
    v2.setVector(1, 1, 1);
    cout<<"The dot product of ";
    v1.display();
    cout<<" and ";
    v2.display();
    cout<<" is "<<v1.dotProduct(v1, v2)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
// Default Data Types in class templates in C++
template <class T1 = float, class T2 = float> //Default Data_types

class vector
{
    T1 x;
    T2 y;
    T2 z;

public:
    vector() {}
    vector(T1 x1, T2 y1, T2 z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    vector crossProduct(vector v1, vector v2, vector &v3)
    {
        v3.x = (v2.z * v1.y) - (v1.z * v2.y);
        v3.y = (v2.z * v1.x) - (v1.z * v2.x);
        v3.z = (v2.x * v1.y) - (v1.x * v2.y);
        return v3;
    }
    void display(vector v1, vector v2, vector v3)
    {
        cout << "The cross product of (" << v1.x << ", " << v1.y << ", " << v1.z << ") and (" << v2.x << ", " << v2.y << ", " << v2.z << ") is (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << endl;
    }
};

int main()
{
    vector<> v1(10.2, 0.4, 1), v2(40, 1.1, 0), v3; //Will use default data types
    v1.display(v1, v2, v1.crossProduct(v1, v2, v3));

    vector<int, int> v_1(12, 10, 4), v_2(5, 9, 3), v_3; //Will pass manual data types
    v_1.display(v_1, v_2, v_1.crossProduct(v_1, v_2, v_3));
    return 0;
}
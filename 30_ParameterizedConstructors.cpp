#include <iostream>
#include <math.h>
using namespace std;
// Parameterized Constructors

class point
{
    int x, y;
    friend void distance(point, point);

public:
    point(int a, int b) //It is Parameterized constructor Since it accept 2 Parameters
    {
        x = a;
        y = b;
    }
};

void distance(point p1, point p2)
{
    cout << "The Distance between p1(" << p1.x << ", " << p1.y << ") and p2(" << p2.x << ", " << p2.y << ") is : " << sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)) << endl;
}
int main()
{
    point p1(4, 5);         //Implicit Call
    point p2 = point(2, 5); //Explicit call
    distance(p1, p2);
    return 0;
}
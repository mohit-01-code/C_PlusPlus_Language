#include <iostream>
using namespace std;
// Constructor Overloading
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    point(int a)
    {
        x = a;
        y = 0;
    }
    point(void)
    {
        x = 0;
        y = 0;
    }
    void display_point(point p1, point p2, point p3)
    {
        cout << "Point 1 is p1(" << p1.x << ", " << p1.y << "), point 2 is p2(" << p2.x << ", " << p2.y << ") and point 3 is p3(" << p3.x << ", " << p3.y << ")." << endl;
    }
};
int main()
{
    point p1(4, 5), p2 = point(4), p3;
    p1.display_point(p1, p2, p3);
    return 0;
}
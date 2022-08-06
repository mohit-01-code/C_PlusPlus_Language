#include <iostream>
using namespace std;
//Function Overloading
float volume(float r, float h)
{ // Cylinder
    return 3.14 * r * r * h;
}

float volume(float x)
{ //cube
    return x * x * x;
}

float volume(float l, float b, float h)
{ //cuboid
    return l * b * h;
}
int main()
{
    cout << "The volume of cylinder where height is 5, radius is 3 is : " << volume(3, 5) << endl;
    cout << "The volume of cube where side is 5 is : " << volume(5) << endl;
    cout << "The volume of cuboid where height is 2, length is 2 and breadth is 4 is : " << volume(2, 4, 2) << endl;
    return 0;
}
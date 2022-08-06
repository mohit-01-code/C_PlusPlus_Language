#include <iostream>
#include <iomanip>
//Constants and precedence in C++
using namespace std;
int main()
{
    const float PI = 3.14; //PI is declared as constant variable
    // PI = 4.41; //This will give error Bcuz PI is declared as constant

    //Precedence
    int a = 10, b = 2;
    int c = ((a / b) * b) + (a / a) - b; //By operator's precendence, brackets are applied and solved
    cout << "The value of c is : " << c << endl;

    //Manipulation--->To well display output
    int x = 1234, y = 456, z = 2;
    cout << "The values without using setw is : " << x << endl;
    cout << "The values without using setw is : " << y << endl;
    cout << "The values without using setw is : " << z << endl
         << endl;
    cout << "The values without using setw is : " << setw(4) << x << endl;
    cout << "The values without using setw is : " << setw(4) << y << endl;
    cout << "The values without using setw is : " << setw(4) << z << endl;
    return 0;
}
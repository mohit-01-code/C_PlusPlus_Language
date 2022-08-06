#include <iostream>
using namespace std;
// Inline functions, defaults arguments and Constant arguments
// Constatn Argumets ---> It is used to not to change the argument in a function
inline int product(int a, int b)
{
    return a * b;
}

int percentage(float marks, int internal = 25)
{
    return ((marks / 100) * 70) + internal;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is : " << product(a, b) << endl
         << endl;

    float marks;
    cout << "Enter your marks : ";
    cin >> marks;
    cout << "Your marks including internal is : " << percentage(marks) << endl;
    cout << "For Rank Holders : Your marks including internal is : " << percentage(marks, 30) << endl;
    return 0;
}
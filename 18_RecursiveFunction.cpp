#include <iostream>
using namespace std;
// Recursive functions
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int fibbonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}
int main()
{
    int n;
    cout << "Enter the a number to get the factorial number : ";
    cin >> n;
    factorial(n);
    cout << "The factorial of " << n << " is : " << factorial(n) << endl
         << endl;
    int n1;
    cout << "Enter a number to get fibbonacci number : ";
    cin >> n1;
    fibbonacci(n1);
    cout << "The Fibbonacci number of " << n1 << " is : " << fibbonacci(n1) << endl;
    return 0;
}
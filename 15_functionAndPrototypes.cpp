#include <iostream>
using namespace std;
// Functions and Function Prototype
int max_num(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
void gm_greet(); //Function is declared

int main()
{
    int a, b;
    cout << "Enter two numbers to get maximum number : " << endl;
    cin >> a >> b;
    int max = max_num(a, b);
    cout << "The maximum number is : " << max << endl;
    gm_greet();
    gm_greet();
    gm_greet();
    return 0;
}

void gm_greet() //Function is defined here
{
    cout << "Hello User...GOOD MORNING" << endl;
}
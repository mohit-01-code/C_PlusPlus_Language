#include <iostream>
//Variables scope and data_types in C++
using namespace std;
int glob = 10;
void scope()
{
    cout << "\nThe value of glob in scope function " << glob << "\n";
}
int main()
{
    int loc = 5;
    int glob = 10;
    glob = 15;
    cout << "The value of loc is " << loc;
    cout << "\nThe value of glob in main" << glob;
    scope();
    return 0;
}
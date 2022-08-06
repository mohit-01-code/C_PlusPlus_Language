#include <iostream>
using namespace std;
// Destructors in C++
class number
{
public:
    number()
    {
        cout << "Your object is created and constructor is called." << endl;
    }
    ~number()
    {
        cout << "Your objects are destroyed and Destructor is called." << endl;
    }
};
int main()
{
    cout << "Main is executed." << endl;
    number n1;
    {
        cout << "Block is executed." << endl;
        number n2;
        cout << "Exiting from blobk." << endl;
    }
    cout << "Back to the main function" << endl;
    return 0;
}
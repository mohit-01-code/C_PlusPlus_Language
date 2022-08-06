#include <iostream>
using namespace std;
//Selection structure(if-else and switch statements) in C++
int main()
{
    int income;
    cout << "Enter your mothly income : ";
    cin >> income;
    if ((income > 0) && (income <= 4000))
    {
        cout << "\nYou are at BPL stage." << endl;
    }
    else if ((income > 4000) && (income <= 15000))
    {
        cout << "You are at poor stage" << endl;
    }
    else if ((income > 15000) && (income <= 30000))
    {
        cout << "You are at middle class stage." << endl;
    }
    else if ((income > 30000) && (income <= 100000))
    {
        cout << "You are at rich stage." << endl;
    }
    else if (income > 100000)
    {
        cout << "You are at very rich stage." << endl;
    }
    else
    {
        cout << "You are unemployed" << endl;
    }

    switch (income)
    {
    case 4000:
        cout << "You earns 4k monthly." << endl;
        break;
    case 15000:
        cout << "You earns15k monthly." << endl;
        break;
    case 30000:
        cout << "You earns 13k monthly." << endl;
        break;
    case 100000:
        cout << "You earns 100k monthly." << endl;
        break;
    default:
        cout << "You do not earns at the points." << endl;
        break;
    }
    return 0;
}
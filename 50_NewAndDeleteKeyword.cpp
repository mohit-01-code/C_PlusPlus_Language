#include <iostream>
using namespace std;
// New and Delete Operator in C++

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "The value of a is : " << *ptr << endl;
    int *p = new int(40);
    cout << "The value at address p is : " << *p << endl;
    int *arr = new int[5];
    //Allocates memory of 5 integers and gives
    //an address of 0 index. we can point to that address using pointer.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << "The value of array at index 0 is : " << *(arr) << endl;
    cout << "The value of array at index 1 is : " << *(arr + 1) << endl;
    cout << "The value of array at index 2 is : " << *(arr + 2) << endl;
    cout << "The value of array at index 3 is : " << *(arr + 3) << endl;
    cout << "The value of array at index 4 is : " << *(arr + 4) << endl;
    return 0;
}
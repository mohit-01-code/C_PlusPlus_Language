#include <iostream>
//Basic input/output and more in C++
using namespace std;

int main()
{
    int input1, input2;
    cout << "Give first input : "; //'<<' is called insertion operator
    cin >> input1;                 //'>>' is called extraction operator
    cout << "\nGive second input : ";
    cin >> input2;
    cout << "\nAddition of both inputs is : " << input1 + input2 << endl
         << endl;

    cout << "Size of (int) data_type : " << sizeof(int) << endl;
    cout << "Size of (short int) data_type : " << sizeof(short int) << endl;
    cout << "Size of (unsigned short int) data_type : " << sizeof(unsigned short int) << endl;
    cout << "Size of (unsigned int) data_type : " << sizeof(unsigned int) << endl;
    cout << "Size of (long int) data_type : " << sizeof(long int) << endl;
    cout << "Size of (unsigned long int) data_type : " << sizeof(unsigned long int) << endl;
    cout << "Size of (long long int) data_type : " << sizeof(long long int) << endl;
    cout << "Size of (unsigned long long int) data_type : " << sizeof(unsigned long long int) << endl;
    cout << "Size of (signed char) data_type : " << sizeof(signed char) << endl;
    cout << "Size of (unsigned char) data_type : " << sizeof(unsigned char) << endl;
    cout << "Size of (float) data_type : " << sizeof(float) << endl;
    cout << "Size of (double) data_type : " << sizeof(double) << endl;
    cout << "Size of (long double) data_type : " << sizeof(long double) << endl;
    cout << "Size of (wchar_t) data_type : " << sizeof(wchar_t) << endl;
}
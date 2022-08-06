#include <iostream>   //system header file
#include "6_header.h" //User_defined header file
//Header files and operators in C++
using namespace std;
int main()
{
    int operand_1, operand_2;
    cout << "Enter value for operand 1 : ";
    cin >> operand_1;
    cout << "\nEnter value for operand 2 : ";
    cin >> operand_2;

    //Airthmetic operators
    cout << "Using '+' operator, operand_1 + operand_2 = " << operand_1 + operand_2 << endl;
    cout << "Using '-' operator, operand_1 - operand_2 = " << operand_1 - operand_2 << endl;
    cout << "Using '*' operator, operand_1 * operand_2 = " << operand_1 * operand_2 << endl;
    cout << "Using '/' operator, operand_1 / operand_2 = " << operand_1 / operand_2 << endl
         << endl;

    //Assignment operator
    int assigned = operand_2 + 1;
    cout << "Assigned value of operand_2 by adding 1 is : " << assigned << endl;

    //Comparison operator
    cout << "\n\n              ouput 1 means its true, output 0 means its false\n\n";
    cout << "Comparison for 'operand_1 == operand_2' ? " << (operand_1 == operand_2) << endl;
    cout << "Comparison for 'operand_1 <= operand_2' ? " << (operand_1 <= operand_2) << endl;
    cout << "Comparison for 'operand_1 >= operand_2' ? " << (operand_1 >= operand_2) << endl;
    cout << "Comparison for 'operand_1 > operand_2' ? " << (operand_1 > operand_2) << endl;
    cout << "Comparison for 'operand_1 < operand_2' ? " << (operand_1 < operand_2) << endl;
    cout << "Comparison for 'operand_1 != operand_2' ? " << (operand_1 != operand_2) << endl
         << endl;

    //Logical operators
    cout << "Cheking for operand_1 is greater than operand_2 and operand_1 is greater than 10 ? : " << (operand_1 > operand_2 && operand_1 > 10) << endl;
    cout << "Cheking for operand_1 is greater than operand_2 or operand_1 is greater than 10 ? : " << (operand_1 > operand_2 || operand_1 > 10) << endl;
    cout << "not(!) answer for operand_1 is greater than operand_2? : " << !(operand_1 > operand_2) << endl
         << endl;
    return 0;
}
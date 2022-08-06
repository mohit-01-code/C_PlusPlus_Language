#include <iostream>
//Scope resolution, literals, reference variables, typecasting in C++
using namespace std;
int x = 10;
int main()
{

    //Built in data_type
    int x = 5;
    cout << "The value x locally is : " << x << endl;
    cout << "The value x globally is : " << ::x << endl
         << endl; //'::' is called scope resolution operator

    //Float, double and long literals
    float literal_1 = 12.44;
    long double literal_2 = 12.44;
    cout << "The size of 12.44 is : " << sizeof(12.44) << endl;
    cout << "The size of 12.44f is : " << sizeof(12.44f) << endl;
    cout << "The size of 12.44l is : " << sizeof(12.44l) << endl;
    cout << "The size of 12.F4F is : " << sizeof(12.44F) << endl;
    cout << "The size of 12.44L is : " << sizeof(12.44L) << endl
         << endl;

    //Reference variable
    //Ajay Nagar---> Carry---> Ajay---> CarryMinati
    int Ajay_Nagar = 10;
    cout << "The value of Ajay Nagar is : " << Ajay_Nagar << endl;
    int &Carry = Ajay_Nagar;
    cout << "The value of Ajay Nagar using name Carry : " << Carry << endl;
    int &Ajay = Ajay_Nagar;
    cout << "The value of Ajay Nagar  using name Ajay is : " << Ajay << endl;
    int &CarryMinati = Ajay_Nagar;
    cout << "The value of Ajay Nagar  using name CarryMinati is : " << CarryMinati << endl
         << endl;

    //Typecasting
    float typecast_1 = 14.33;
    float typecast_2 = 77.43;
    cout << "The 1st value without typecast is : " << typecast_1 << endl;
    cout << "The 1st value after typecasting is : " << (int)typecast_1 << endl;
    cout << "The 2nd value without typecast is : " << typecast_2 << endl;
    cout << "The 2nd value after typecasting is : " << int(typecast_2) << endl;
}
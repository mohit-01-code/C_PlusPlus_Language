#include <iostream>
#include <math.h>
using namespace std;
// Simple Calculator and Scientific Calculator
class simpleCalculator
{
protected:
    float a, b;

public:
    simpleCalculator()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }
};

class scientificCalc
{
protected:
    float sinX, cosX, secX, cosecX, tanX, cotX, rootX;

public:
    float angle;
    scientificCalc()
    {
        cout << "Enter the value of angle X : ";
        cin >> angle;
        sinX = sin(angle * (3.14 / 180));
        cosX = cos(angle * (3.14 / 180));
        secX = 1 / (cosX);
        cosecX = 1 / (sinX);
        tanX = tan(angle * (3.14 / 180));
        cotX = (cosX) / (sinX);
        rootX = sqrt(angle);
    }
};

class display : public simpleCalculator, public scientificCalc
{
public:
    void show_simple()
    {
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;
        cout << "a / b = " << a / b << endl;
    }
    void show_scintific()
    {
        cout << "Sin(" << angle << ") = " << sinX << endl;
        cout << "Cos(" << angle << ") = " << cosX << endl;
        cout << "Sec(" << angle << ") = " << secX << endl;
        cout << "Cosec(" << angle << ") = " << cosecX << endl;
        cout << "Tan(" << angle << ") = " << tanX << endl;
        cout << "Cot(" << angle << ") = " << cotX << endl;
        cout << "The square root of " << angle << " is : " << rootX << endl;
    }
};
int main()
{
    display cal;
    cal.show_simple();
    cal.show_scintific();
    return 0;
}
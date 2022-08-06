#include <iostream>
using namespace std;
// Dynamic Initialization of objects using Constructor in C++

class bank_deposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    friend void show(bank_deposite);

public:
    //Dynamically initializing constructor by constructor overloading
    bank_deposite() {}
    bank_deposite(int p, int y, float r);
    bank_deposite(int p, int y, int R);
};

bank_deposite::bank_deposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

bank_deposite::bank_deposite(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R) / 100;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void show(bank_deposite a1)
{
    cout << "The Final Amount for deposite of principal " << a1.principal << ", for " << a1.years << " years at Interest rate of " << a1.interestRate << " is : " << a1.returnValue << endl;
}
int main()
{
    int p, y, R;
    float r;
    bank_deposite a1, a2;
    cout << "Enter the Principal Amount for deposite : ";
    cin >> p;
    cout << "Enter the time period of years : ";
    cin >> y;
    cout << "Enter the rate of Interest Rate : ";
    cin >> r;
    a1 = bank_deposite(p, y, r);
    show(a1);

    cout << "Enter the Principal Amount for deposite : ";
    cin >> p;
    cout << "Enter the time period of years : ";
    cin >> y;
    cout << "Enter the percent of Interest Rate : ";
    cin >> R;
    a2 = bank_deposite(p, y, R);
    show(a1);
    return 0;
}
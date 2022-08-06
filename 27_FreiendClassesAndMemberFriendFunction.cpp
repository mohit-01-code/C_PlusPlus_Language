#include <iostream>
using namespace std;
//Friend Classes and Member Friend Function
class complex; //Forward declaration
class sumcomplex
{
public:
    void SumRealComplex(complex o1, complex o2);
    void SumComplexPart(complex o1, complex o2);
};

class complex
{
    int c1, c2;

public:
    // friend void sumcomplex::SumRealComplex(complex, complex); --->Member friend function
    // friend void sumcomplex::SumComplexPart(complex, complex);
    friend class sumcomplex; //Friend class
    void setcomplex(int a, int b)
    {
        c1 = a;
        c2 = b;
    }
};

void sumcomplex::SumRealComplex(complex o1, complex o2)
{
    cout << "The sum of Real Parameters is : " << o1.c1 + o2.c1 << endl;
}

void sumcomplex::SumComplexPart(complex o1, complex o2)
{
    cout << "The sum of Complex parameter is : " << o1.c2 + o2.c2 << endl;
}

int main()
{
    complex o1, o2;
    o1.setcomplex(4, 2);
    o2.setcomplex(7, 5);
    sumcomplex sum1, sum2;
    sum1.SumRealComplex(o1, o2);
    sum2.SumComplexPart(o1, o2);
    return 0;
}
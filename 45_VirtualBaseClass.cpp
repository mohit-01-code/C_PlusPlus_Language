#include <iostream>
using namespace std;
// Virtual base class in C++

class student
{
protected:
    int roll_no;

public:
    student(){};
    void rollNo(int r)
    {
        roll_no = r;
    }
};

class theory : virtual public student
{
protected:
    int physics, chemistry;

public:
    theory(){};
    void theory_mark(int c, int p)
    {
        physics = p;
        chemistry = c;
    }
};

class practicle : virtual public student
{
protected:
    int physicsP, chemistryP;

public:
    practicle(){};
    void practicle_mark(int c, int p)
    {
        physicsP = p;
        chemistryP = c;
    }
};

class result : public theory, public practicle
{
    float percentage;

public:
    void cal_result()
    {
        percentage = float(physicsP + physics + chemistryP + chemistry) / 2;
    }
    void display_result()
    {
        cal_result();
        cout << "Roll no " << roll_no << " result : " << endl; //Here without applying virtual roll no will be ambiguity
        cout << "Physics theory marks : " << physics << endl;
        cout << "Physics practicle marks : " << physicsP << endl;
        cout << "Chemistry thoery marks : " << chemistry << endl;
        cout << "Chemistry practicle marks : " << chemistryP << endl;
        cout << "Percentage : " << percentage << endl;
    }
};

int main()
{
    result mohit;
    mohit.rollNo(12);
    mohit.theory_mark(31, 40);
    mohit.practicle_mark(15, 15);
    mohit.display_result();
    return 0;
}
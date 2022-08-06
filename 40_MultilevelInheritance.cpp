#include <iostream>
using namespace std;
// Multilevel Inheritance in C++

class student //Base class
{
protected:
    int roll_no;

public:
    void set_roll_no(int a);
};

class exam : public student //exam is publicaly inherited from student class [student--->exam]
{
protected:
    int maths, physics, chemistry;

public:
    void set_marks(int m, int p, int c);
};

class result : public exam //result class is publicaly inherited from exam class [student--->exam--->result]
{
protected:
    float percentage;

public:
    void get_result();
    void display_result();
};

void student::set_roll_no(int a)
{
    roll_no = a;
}

void exam::set_marks(int m, int p, int c)
{
    maths = m;
    physics = p;
    chemistry = c;
}

void result::get_result()
{
    percentage = (maths + physics + chemistry) / 3;
}

void result::display_result()
{
    get_result();
    cout << "Your roll no is : " << roll_no << endl;
    cout << "Your maths marks is : " << maths << endl;
    cout << "Your physics marks is : " << physics << endl;
    cout << "Your chemistry marks is : " << chemistry << endl;
    cout << "Your result is : " << percentage << "%" << endl;
}
int main()
{
    result mohit;
    mohit.set_roll_no(12);
    mohit.set_marks(89, 35, 33);
    mohit.display_result();
    return 0;
}
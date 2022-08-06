#include <iostream>
using namespace std;
//OOPs ---> Objects and classes
class student
{
private:
    float marks; //students can't give their marks, its for teachers

public:
    int roll_no, sub_code;
    float percent(float);
};

float student ::percent(float marks)
{
    return (marks / 50) * 100;
}
int main()
{
    student mohit, harry;
    mohit.roll_no = 12;
    mohit.sub_code = 110021;

    harry.roll_no = 13;
    harry.sub_code = 110022;

    cout << "Mohit's details : " << endl;
    cout << "Roll No. : " << mohit.roll_no << endl;
    cout << "Subject Code : " << mohit.sub_code << endl;
    cout << "Percentage : " << mohit.percent(30) << endl;

    cout << "harry's details : " << endl;
    cout << "Roll No. : " << harry.roll_no << endl;
    cout << "Subject Code : " << harry.sub_code << endl;
    cout << "Percentage : " << harry.percent(49) << endl;

    return 0;
}
#include <iostream>
using namespace std;
//Static data members and Methods

class employee
{
    int id;
    static int count;

public:
    void getId(void)
    {
        cout << "Enter your ID : ";
        cin >> id;
        cout << "Your Id is : " << id << endl;
        count++;
    }
    static void Count(void) //static function
    {                       //It only except the static data only
        cout << "The value of count is : " << count << endl;
    }
};

int employee::count; //default initial value is 0
int main()
{
    employee mohit, harry, carry;
    mohit.getId();
    employee::Count(); //implement of static func. without object

    harry.getId();
    employee::Count();

    carry.getId();
    employee::Count();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
// Nesting of a function
class binary
{
    string s;
    void OnesComp(void);

public:
    void read(void);
    void check(void);
    void display(void);
};

void binary::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Numbers are not in Binary format" << endl;
            exit(0);
        }
    }
}

void binary::OnesComp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    OnesComp(); //Nested Function
    cout << "One's Complement is : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary num;
    num.read();
    num.check();
    // num.OnesComp();
    num.display();
    return 0;
}
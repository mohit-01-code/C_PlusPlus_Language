#include <iostream>
#include <map>
#include <string>
using namespace std;
// Maps in C++

int main()
{
    map<string, int> marks;
    map<string, int>::iterator itr = marks.begin();
    string name;
    int m;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the name of the student : ";
        cin >> name;
        cout << "Enter the marks of obtained by " << name << " : ";
        cin >> m;
        marks[name] = m;
    }
    marks.insert({{"Raghu", 56}, {"Rajiv", 90}});
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " = " << (*itr).second << endl;
    }

    return 0;
}
#include <iostream>
#include <list>
using namespace std;
// Linked list in C++

void display(list<int> &l)
{
    list<int>::iterator iter;
    iter = l.begin();
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list<int>::iterator iter1 = list1.begin();
    list1.push_back(32);
    list1.push_back(3);
    list1.push_back(45);
    list1.push_back(18);
    list1.push_back(11);
    display(list1);
    list1.remove(45);
    list1.sort();
    display(list1);

    list<int> list2(3);
    list<int>::iterator iter2 = list2.begin();
    *iter2 = 23;
    iter2++;
    *iter2 = 0;
    iter2++;
    *iter2 = 3;
    iter2++;
    display(list2);
    list2.merge(list1); //Merging list1 to list2
    display(list2);     //Displaying merged list
    list2.sort();       //Sorting merged list2
    display(list2);
    return 0;
}
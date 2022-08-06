#include <iostream>
#include <fstream>
using namespace std;
//File Read+Write in C++
int main()
{
    cout<<endl<<endl<<endl<<endl;
    ifstream read("61_Read+Write.txt");
    string str_r;
    read >> str_r;
    cout << str_r << " is going" << endl;

    ofstream write("61_Read+Write.txt");
    string str_w = "Harry let's go";
    write << str_w;

    read.close();
    write.close();
    return 0;
}
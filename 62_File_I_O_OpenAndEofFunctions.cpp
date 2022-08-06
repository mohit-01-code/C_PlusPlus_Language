#include <iostream>
#include <fstream>
using namespace std;
// File I_O --> open(), eof() in C++
int main()
{
    ifstream read;
    read.open("62_File.txt");
    string str_r;
    // read >> str_r;
    // getline(read, str_r);
    while (read.eof() == 0)
    {
        getline(read, str_r);
        cout << str_r << endl;
    }
    read.close();

    return 0;
}
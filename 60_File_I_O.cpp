#include <iostream>
#include <fstream>
using namespace std;
// File I_O in C++ -->Read and Write
int main()
{
    ifstream read("60_FileRead.txt");
    string str_r;
    // read>>str_r; //Reads to the white space online
    getline(read, str_r); //Reads the whole line
    cout << str_r << endl;

    ofstream write("60_FileWrite.txt");
    string str_w = "This is written from another file";
    write << str_w;
    return 0;
}
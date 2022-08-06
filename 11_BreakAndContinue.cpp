#include <iostream>
using namespace std;
//Break and Continue in C++
int main()
{
    int count_start, count_end, break_1;
    cout << "Enter number from where you want to start counting : ";
    cin >> count_start;
    cout << "\nEnter number where you want end counting : ";
    cin >> count_end;
    cout << "\nEnter the number where you want to put break and start for even counting : ";
    cin >> break_1;
    for (int i = count_start; i <= count_end; i++)
    {
        cout << count_start++ << "\t";
        if (i == break_1)
        {
            break;
        }
    }

    for (int i = break_1; break_1 < count_end; i++)
    {
        if (break_1 % 2 != 0)
        {
            continue;
        }
        break_1 = break_1 + 2;
        cout << break_1 << "\t";
    }
    cout << endl
         << endl;

    return 0;
}
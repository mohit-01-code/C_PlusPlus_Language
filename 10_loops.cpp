#include <iostream>
using namespace std;
//loops - For loop, while loop, do while loop in C++
int main()
{
    int count_start, count_end;
    cout << "Enter number from where you want to start counting : ";
    cin >> count_start;
    int count_start2 = count_start;
    cout << "\nEnter number where you want end counting : ";
    cin >> count_end;
    for (int i = count_start; i <= count_end; i++)
    {
        cout << count_start++ << "\t";
    }
    cout << endl
         << endl;

    //While loop
    int gap;
    cout << "Enter number to put gap in your counting : ";
    cin >> gap;
    while (count_start2 <= count_end)
    {
        cout << count_start2 << "\t";
        count_start2 = count_start2 + gap;
    }
    cout << endl
         << endl;

    //do while loop
    int rev_count_start, rev_count_end;
    cout << "Enter the number from where you want to start reverse counting : ";
    cin >> rev_count_start;
    cout << "\nEnter the number where you want stop reverse counting : ";
    cin >> rev_count_end;
    do
    {
        cout << rev_count_start << "\t";
        rev_count_start--;
    } while (rev_count_start >= rev_count_end);
    cout << endl
         << endl;

    //Quick Quiz
    cout << "The table of 6 using loop." << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "6 * " << i << " = " << 6 * i << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
//Arrays and Pointers
int main()
{
     int house_members[7] = {5, 9, 3, 12, 6, 3, 2};
     for (int i = 0; i < 7; i++)
     {
          cout << "There are " << house_members[i] << " members living in house no. " << i + 1 << endl;
     }
     cout << endl;

     //     cout << "There are " << house_members[0] << " members living in house no. 1." << endl;
     //     cout << "There are " << house_members[1] << " members living in house no. 2." << endl;
     //     cout << "There are " << house_members[2] << " members living in house no. 3." << endl;
     //     cout << "There are " << house_members[3] << " members living in house no. 4." << endl;
     //     cout << "There are " << house_members[4] << " members living in house no. 5." << endl;
     //     cout << "There are " << house_members[5] << " members living in house no. 6." << endl;
     //     cout << "There are " << house_members[6] << " members living in house no. 7." << endl

     house_members[3] = 13;
     house_members[6] = 1;
     cout << "Now there are " << house_members[3] << " members in house no. 4." << endl;
     cout << "Now there are " << house_members[6] << " members in house no. 7." << endl
          << endl;

     //Pointers to array
     int *p = house_members;
     for (int i = 0; i < 7; i++)
     {
          cout << "The address of house no. " << i + 1 << " is : " << (p + i) << endl;
     }
     cout << endl;

     //     cout << "The address of house no. 1 is : " << (p) << endl;
     //     cout << "The address of house no. 2 is : " << (p + 1) << endl;
     //     cout << "The address of house no. 3 is : " << (p + 2) << endl;
     //     cout << "The address of house no. 4 is : " << (p + 3) << endl;
     //     cout << "The address of house no. 5 is : " << (p + 4) << endl;
     //     cout << "The address of house no. 6 is : " << (p + 5) << endl;
     //     cout << "The address of house no. 7 is : " << (p + 6) << endl

     for (int i = 0; i < 7; i++)
     {
          cout << "There are " << *(p + i) << " members living in house no. " << i + 1 << endl;
     }

     //     cout << "There are " << *(p) << " members living in house no. 1." << endl;
     //     cout << "There are " << *(p + 1) << " members living in house no. 2." << endl;
     //     cout << "There are " << *(p + 2) << " members living in house no. 3." << endl;
     //     cout << "There are " << *(p + 3) << " members living in house no. 4." << endl;
     //     cout << "There are " << *(p + 4) << " members living in house no. 5." << endl;
     //     cout << "There are " << *(p + 5) << " members living in house no. 6." << endl;
     //     cout << "There are " << *(p + 6) << " members living in house no. 7." << endl
     //          << endl;

     *(p + 3) = 13;
     *(p + 6) = 1;
     cout << "Now there are " << *(p + 3) << " members in house no. 4." << endl;
     cout << "Now there are " << *(p + 6) << " members in house no. 7." << endl;

     return 0;
}
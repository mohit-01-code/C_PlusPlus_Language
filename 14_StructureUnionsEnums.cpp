#include <iostream>
using namespace std;
//Structure, Unions and Enums
struct sport_players
{
    int j_num;
    char char_code;
    float points;
    int age;
};
void structure();

union sport_players_1
{
    int j_num_1;
    char char_code_1;
    float points_1;
    int age_1;
};
void union_1();

int main()
{
    structure();
    union_1();
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << endl
         << "Output for enum" << endl;
    cout << "Breakfast is : " << breakfast << endl;
    cout << "lunch is : " << lunch << endl;
    cout << "dinner is : " << dinner << endl;
    return 0;
}

void structure()
{
    struct sport_players p[3];
    // p1.j_num = 12;
    // p1.char_code = 'r';
    // p1.points = 14.24;
    // p1.age = 19;
    for (int i = 0; i < 3; i++)
    {

        cout << "Enter player " << i + 1 << " details : " << endl;
        cout << "Jerssie Number : ";
        cin >> p[i].j_num;
        cout << "Character Code : ";
        cin >> p[i].char_code;
        cout << "Points : ";
        cin >> p[i].points;
        cout << "Age : ";
        cin >> p[i].age;
    }
    for (int j = 0; j < 3; j++)
    {
        cout << "\nPlayer " << j + 1 << " details : " << endl;
        cout << "Jerssie Number : " << p[j].j_num << endl;
        cout << "Character Code : " << p[j].char_code << endl;
        cout << "Points : " << p[j].points << endl;
        cout << "Age : " << p[j].age << endl
             << endl;
    }

    //     cout << "\nPlayer 1 details : " << endl;
    //     cout << "Jerssie Number : " << p1.j_num << endl;
    //     cout << "Character Code : " << p1.char_code << endl;
    //     cout << "Points : " << p1.points << endl;
    //     cout << "Age : " << p1.age << endl
    //          << endl;

    //     // cout << "Enter player 2 details : " << endl;
    //     // cout << "Jerssie Number : ";
    //     // cin >> p2.j_num;
    //     // cout << "Character Code : ";
    //     // cin >> p2.char_code;
    //     // cout << "Points : ";
    //     // cin >> p2.points;
    //     // cout << "Age : ";
    //     // cin >> p2.age;

    //     // cout << "\nEnter player 3 details : " << endl;
    //     // cout << "Jerssie Number : ";
    //     // cin >> p3.j_num;
    //     // cout << "Character Code : ";
    //     // cin >> p3.char_code;
    //     // cout << "Points : ";
    //     // cin >> p3.points;
    //     // cout << "Age : ";
    //     // cin >> p3.age;

    //     cout << "\nPlayer 2 details : " << endl
    //          << endl;
    //     cout << "Jerssie Number : " << p2.j_num << endl;
    //     cout << "Character Code : " << p2.char_code << endl;
    //     cout << "Points : " << p2.points << endl;
    //     cout << "Age : " << p2.age << endl;

    //     cout << "\nPlayer 3 details : " << endl
    //          << endl;
    //     cout << "Jerssie Number : " << p3.j_num << endl;
    //     cout << "Character Code : " << p3.char_code << endl;
    //     cout << "Points : " << p3.points << endl;
    //     cout << "Age : " << p3.age << endl
    //          << endl;
}

void union_1()
{ //In Union we can use one member at one time
    union sport_players_1 p1;
    cout << "\nPlayer 4 details using Union : " << endl;
    p1.j_num_1 = 12;
    cout << "Jerssie Number : " << p1.j_num_1 << endl;
    p1.char_code_1 = 'r';
    cout << "Character Code : " << p1.char_code_1 << endl;
    p1.points_1 = 14.24;
    cout << "Points : " << p1.points_1 << endl;
    p1.age_1 = 19;
    cout << "Age : " << p1.age_1 << endl
         << endl;
}
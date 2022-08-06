#include <iostream>
using namespace std;
// Call by value and Call By reference(Pointer and variable)
void wholesale(float p_1, float p_2, float p_3)
{
    cout << "\nThe wholesale prize of product 1 is : " << p_1 << endl;
    cout << "The wholesale prize of product 2 is : " << p_2 << endl;
    cout << "The wholesale prize of product 3 is : " << p_3 << endl;
}

void retail(float *p_1, float *p_2, float *p_3)
{
    *p_1 = 1.65 * (*p_1);
    *p_2 = 1.70 * (*p_2);
    *p_3 = 1.60 * (*p_3);
}

void gst(float &p_1, float &p_2, float &p_3)
{
    p_1 = p_1 + 25;
    p_2 = p_2 + 20;
    p_3 = p_3 + 30;
}
int main()
{
    float p1, p2, p3;
    cout << "The wholesale prize of product 1 is : ";
    cin >> p1;
    cout << "The wholesale prize of product 2 is : ";
    cin >> p2;
    cout << "The wholesale prize of product 3 is : ";
    cin >> p3;
    wholesale(p1, p2, p3); //Call by value
    retail(&p1, &p2, &p3); //Call by pointer reference
    cout << "\nThe retail prize of product 1 is : " << p1 << endl;
    cout << "The retail prize of product 2 is : " << p2 << endl;
    cout << "The retail prize of product 3 is : " << p3 << endl
         << endl;

    gst(p1, p2, p3); //Call by Variable reference
    cout << "\nThe prize of product 1 including GST is : " << p1 << endl;
    cout << "The prize of product 2 including GST is : " << p2 << endl;
    cout << "The prize of product 3 including GST is : " << p3 << endl;
    return 0;
}
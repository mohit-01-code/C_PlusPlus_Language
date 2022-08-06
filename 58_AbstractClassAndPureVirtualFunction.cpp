#include <iostream>
using namespace std;
// Abstract Base Class and Pure Virtual Function in C++

class tesla
{
protected:
    int model_No;
    float milage;

public:
    tesla(int n, float m)
    {
        model_No = n;
        milage = m;
    }
    // virtual void display() {}
    virtual void display() = 0; //Do Nothing Function ---> Pure virtual function
};

class modelX : public tesla
{
public:
    modelX(int n, float m) : tesla(n, m) {}
    void display()
    {
        cout << "Tesla Model X Details : " << endl;
        cout << "Model X model no. is " << model_No << endl;
        cout << "Milage of Model X is " << milage << " km/hr" << endl
             << endl;
    }
};
class modelY : public tesla
{
public:
    modelY(int n, float m) : tesla(n, m) {}
    void display()
    {
        cout << "Tesla Model Y Details : " << endl;
        cout << "Model Y model no. is " << model_No << endl;
        cout << "Milage of Model Y is " << milage << " km/hr" << endl
             << endl;
    }
};
class modelZ : public tesla
{
public:
    modelZ(int n, float m) : tesla(n, m) {}
    void display()
    {
        cout << "Tesla Model Z Details : " << endl;
        cout << "Model Z model no. is " << model_No << endl;
        cout << "Milage of Model Z is " << milage << " km/hr" << endl
             << endl;
    }
};

int main()
{
    modelX f7(12157, 12.23);
    modelY f8(22231, 15.01);
    modelZ f9(15121, 9.99);

    tesla *display[3];
    display[0] = &f7;
    display[1] = &f8;
    display[2] = &f9;

    display[0]->display();
    display[1]->display();
    display[2]->display();
    return 0;
}
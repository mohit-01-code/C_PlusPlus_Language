#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class livingbeing{
    public:
    string ty = "";
    livingbeing (string a){
        ty = a;
    }
};
class dog : public livingbeing{
    public:
    string li = "dog";
    void sound(){
        cout<<"Bhow bhow"<<endl;
    }
};
int main(){
    livingbeing myObj1("Animal");
    dog myObj2;
    myObj2.sound();
    cout<<myObj2.li<<endl;
    cout<<myObj1.ty<<endl;
    return 0;
}
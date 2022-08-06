#include <iostream>
// #include <cstring>
using namespace std;
// Virtual Function example in C++

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string t, float r)
    {
        title = t;
        rating = r;
    }
    // void display() {cout<<"Without virtual this function will execute"<<endl;}
    virtual void display() {}
};

class video : public CWH
{
    float vlength;

public:
    video(string t, float r, float l) : CWH(t, r)
    {
        vlength = l;
    }
    void display()
    {
        cout << "The title of this video is \"" << title << "\"" << endl;
        cout << "The rating for this video is " << rating << endl;
        cout << "The length of this video is " << vlength << endl
             << endl;
    }
};

class text : public CWH
{
    int words;

public:
    text(string t, float r, int w) : CWH(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title of this text is \"" << title << "\"" << endl;
        cout << "The rating for this text is " << rating << endl;
        cout << "The words in this text is " << words << endl;
    }
};

int main()
{
    string title = "Python Video Tutorial";
    float rating = 4.91;

    float length = 12.58;
    video pythonVideo(title, rating, length);
    // pythonVideo.display();

    title = "Python Text Tutorial";
    rating = 3.50;
    int words = 1200;
    text pythonText(title, rating, length);
    // pythonText.display();

    CWH *display[2];
    display[0] = &pythonVideo;
    display[1] = &pythonText;

    display[0]->display();
    display[1]->display();
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
// Vector in STL in C++

template <class T>
void display(vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
        // cout << vec[i] << " ";
    }
    cout << endl;
}

template <class T>
void setVector(vector<T> &vec)
{
    T element;
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the values of vector : ";
        cin >> element;
        vec.push_back(element);
    }
}
int main()
{
    vector<int> vec1;
    setVector(vec1);
    display(vec1);

    vector<float> vec2;
    setVector(vec2);
    display(vec2);

    vector<char> vec3;
    setVector(vec3);
    display(vec3);

    vector<int> vec4(5, 4); //5 times 4
    display(vec4);

    vector<int> vec5(vec4);
    vector<int>::iterator iter = vec5.begin(); //iter object pointing to 1 index of vec5
    vec5.insert(iter + 2, 4, 26);              //inserts 4 copies of 26 at 3(iter+2) index of vec5
    vec5.pop_back();                           //Removes 1 element from end of vec5
    vec5.pop_back();
    display(vec5);
    return 0;
}
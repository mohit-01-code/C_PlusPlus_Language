# include <iostream>
# include <functional>
# include <algorithm>
using namespace std;
//Functors(Function Object) in C++

int main(){
    int arr[7]={34, 2, 12, 7, 90, 67, 0};
    sort(arr, arr+5, greater<int>()); 
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
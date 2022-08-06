# include <iostream>
using namespace std;

int main(){
    float arr[2] = {0.2, 3.0};
    if(arr[0] * arr[1] == 0.6)
        printf("%d\n", arr[0]);
    else
        printf("%d\n", arr[1]);
    return 0;
}
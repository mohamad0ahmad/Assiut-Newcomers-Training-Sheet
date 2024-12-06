#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T = 0;
    cin >> T;
        long long *arr = new long long[46];
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i <= 45; i++)
        {
            arr[i] = arr[i-1]+arr[i-2];
        }

        for (int i = 0; i < T; i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}
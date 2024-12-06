#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    long long arr[N];
    if (N == 1)
    {
        cout << 0 << endl;
    }else if (N == 2)
    {
        cout << 1 << endl;
    }else{
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < N; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        cout << arr[N-1] <<endl;
    }
    
    
    return 0;
}


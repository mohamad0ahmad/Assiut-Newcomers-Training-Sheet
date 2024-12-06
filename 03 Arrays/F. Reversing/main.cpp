#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int *arr = new int[N];
    int *rev_arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        rev_arr[i] = arr[N-1-i];
    }
    for (int i = 0; i < N; i++)
    {
        cout<<rev_arr[i]<<" ";
    }
    return 0;
}
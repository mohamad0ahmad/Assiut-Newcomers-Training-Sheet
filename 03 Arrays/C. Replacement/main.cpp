#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            arr[i]= 1;
        }else if (arr[i] < 0)
        {
            arr[i]= 2;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
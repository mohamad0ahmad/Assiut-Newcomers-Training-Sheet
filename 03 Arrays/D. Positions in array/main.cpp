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
        if (arr[i] <= 10)
        {
            cout<<"A["<<i<<"] = "<< arr[i]<<endl;
        }
    }
    return 0;
}
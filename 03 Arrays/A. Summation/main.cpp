#include <iostream>
using namespace std;


int main (){
    int N = 0;
    cin>>N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    if (sum<0)
    {
        cout << (sum * -1)<<endl;
    }else{
        cout<<sum<<endl;
    }
    return 0;
}
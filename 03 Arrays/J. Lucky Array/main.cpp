#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int Min = 100000;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    int repeat = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == Min)
        {
            repeat++;
        }
    }
    if (repeat & 1)
    {
        cout<<"Lucky"<<endl;
    }else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}


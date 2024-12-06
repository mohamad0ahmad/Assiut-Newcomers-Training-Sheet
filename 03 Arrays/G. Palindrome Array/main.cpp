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

    bool pali = true;
    
    if (N == 1)
    {
        cout<<"YES"<<endl;
    }else if (N == 2)
    {
        if (arr[0] == arr[1])
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }else{
        int x = N/2;
        for (int i = 0; i < x; i++)
        {
            if (arr[i] != arr[N-1-i])
            {
                pali = false;
                break;
            }
        }
        if (pali)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
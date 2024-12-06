#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int arr1[N];
    int arr2[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> arr2[i];
    }
    int found = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = 0;
                found++;
                break;
            }
        }
    }
    if (found == N)
    {
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    bool flag = true;
    int operations = 0;
    
    for (int i = 0; i < N; i++)
    {
        if (arr[i] & 1)
        {
            flag = false;
        }
            
    }
        
     while (flag){
        operations++;
        for (int i = 0; i < N; i++)
        {
            arr[i] /=2;
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i] & 1)
            {
                flag = false;
            }
        }
     }
     cout << operations << endl;
    return 0;
}


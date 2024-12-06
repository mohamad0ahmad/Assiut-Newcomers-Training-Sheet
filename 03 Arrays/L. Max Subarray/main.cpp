#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> subArr;
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N = 0;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        
        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    subArr.push_back(arr[k]);
                }
                vector<int> ::iterator it = max_element(subArr.begin(),subArr.end());
                cout << *it <<" ";
                subArr.clear();
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}


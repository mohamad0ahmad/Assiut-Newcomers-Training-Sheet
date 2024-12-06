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
        int non =0;
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
                bool flag = true;
                int x = subArr.size();
                for (int i = 0; i < (x-1); i++)
                {
                    if (subArr.at(i+1) >= subArr.at(i))
                    {
                        continue;
                    }else{
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    non++;
                }
                subArr.clear();
                }
        }
        cout<<non<<endl;
    }
    return 0;
}


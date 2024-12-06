#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N = 0;
    cin >> N;
    if (N == 1)
    {
        cout << "NO" << endl;
    }else if (N == 2)
    {
        cout << "YES" << endl;
    }else{
        for (int i = sqrt(N); i >= 2; i--)
        {
            if (N % i == 0)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}

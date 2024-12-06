#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n);
int main(){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N = 0;
        cin >> N;
        isPrime(N) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
bool isPrime(int n){
    if (n == 1)
    {
        return false;
    }else if (n == 2)
    {
        return true;
    }else{
        for (int i = sqrt(n); i >= 2; i--)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

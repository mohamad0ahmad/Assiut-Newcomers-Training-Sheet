#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N = 0;
    cin >> N;
    if (log2(N)-(int)floor(log2(N)) == 0)
    {
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    
    return 0;
}
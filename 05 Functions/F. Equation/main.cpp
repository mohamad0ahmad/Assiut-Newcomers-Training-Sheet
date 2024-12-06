#include <bits/stdc++.h>
using namespace std;
long long equation(long long x, long long n);
int main(){
    long long X =0, N = 0;
    cin >> X >> N;
    cout <<equation(X, N)<<endl;
}
long long equation(long long x, long long n){
    long long sum = pow(x,0) - 1;
    for (long long i = 2; i <= n; i+=2)
    {
        sum += pow(x,i);
    }
    return sum;
}

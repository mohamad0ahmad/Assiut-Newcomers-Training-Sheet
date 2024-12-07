#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N = 0;
    cin >> N;
    long long x = 0;
    for(long long i = 1; i * i <= N; i++){
        if(N % i == 0){
            x += i;
            if(i * i != N){
                x += (N / i);
            }
        }
    }
    cout << x << endl;
    return 0;
}



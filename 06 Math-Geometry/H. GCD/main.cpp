#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long LCM(long long a, long long b) {
    return (a * b) / GCD(a, b);
}

int main() {
    long long A = 0, B = 0;
    cin >> A >> B;
    cout << GCD(A,B) << " "<< LCM(A,B) << endl;
    return 0;
}
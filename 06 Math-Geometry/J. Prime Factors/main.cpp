#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    bool first = true;
    
    int count = 0;
    while (N % 2 == 0) {
        N /= 2;
        count++;
    }
    if (count > 0) {
        cout << "(2^" << count << ")";
        first = false;
    }

    for (int i = 3; i * i <= N; i += 2) {
        count = 0;
        while (N % i == 0) {
            N /= i;
            count++;
        }
        if (count > 0) {
            if (!first) cout << "*";
            cout << "(" << i << "^" << count << ")";
            first = false;
        }
    }

    if (N > 1) {
        if (!first) cout << "*";
        cout << "(" << N << "^1)";
    }

    cout << endl;
    return 0;
}

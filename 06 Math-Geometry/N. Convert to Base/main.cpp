#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    if (T == 1) {
        string N;
        int X;
        cin >> N >> X;

        long long result = 0;
        long long multiplier = 1;

        for (int i = N.length() - 1; i >= 0; i--) {
            int digit = (N[i] >= 'A' && N[i] <= 'Z') ? N[i] - 'A' + 10 : N[i] - '0';
            result += digit * multiplier;
            multiplier *= X;
        }

        cout << result << endl;

    } else if (T == 2) {
        long long N;
        int X;
        cin >> N >> X;

        if (N == 0) {
            cout << "0" << endl;
            return 0;
        }

        string result = "";
        while (N > 0) {
            int remainder = N % X;
            result = (remainder <= 9 ? (char)(remainder + '0') : (char)(remainder - 10 + 'A')) + result;
            N /= X;
        }

        cout << result << endl;
    }

    return 0;
}

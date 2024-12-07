#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X = 0, A = 0, B = 0;
    cin >>  A >> B >> X;

    long long maxi = max(A,B);
    long long mini = min(A,B);

    if (mini%X != 0)
    {
        mini = mini + (X - mini%X);
    }
    if (maxi%X != 0)
    {
        maxi = maxi - (maxi%X);
    }
    long long n = (maxi - mini)/X +1; 
    long long Sum = n*(2*mini + (n-1)*X )/2;
    cout << Sum <<endl;
    return 0;
}


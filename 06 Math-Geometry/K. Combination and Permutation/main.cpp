#include <bits/stdc++.h>
using namespace std;
long long factorial(long long Num);
int main() {
    int X = 0,Y = 0;
    cin >> X >> Y;
    long long NCR = (factorial(X))/(factorial(Y)*factorial(X-Y));
    long long NPR = (factorial(X))/(factorial(X-Y));
    cout << NCR << " " << NPR;
    return 0;
}
long long factorial(long long Num){
    long long result = 1;
    while (Num != 0)
    {
        result *=Num;
        Num--;
    }
    return result;
}
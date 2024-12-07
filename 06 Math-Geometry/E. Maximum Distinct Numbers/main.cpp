#include <bits/stdc++.h>
using namespace std;
int main(){
    //1+2+⋯+k= (k(k+1))/2
    long long N = 0;
    cin >> N;

    long double a = 1, b = 1, c = -2*N;
    
    long double discriminant = b * b - 4 * a * c;
    
    long double root1 = (-b + sqrt(discriminant)) / (2 * a);
    long long x = floor(root1);
    cout << x << endl;
    return 0;
}

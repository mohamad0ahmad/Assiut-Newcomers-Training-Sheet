#include <bits/stdc++.h>
using namespace std;
int main(){
    long long A = 0, B = 0, Q = 0;
    cin >> A >> B >> Q;
    if (Q % 3 == 1)
    {
        cout << A << endl;
    }else if (Q % 3 == 2)
    {
        cout << B <<endl;
    }else{
        cout << (A^B) << endl;
    }
    return 0;
}

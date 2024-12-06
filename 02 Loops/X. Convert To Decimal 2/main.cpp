#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long long N = 0;
        cin >> N;
        int ones = 0;
        while (N != 0)
        {
            if (N%2 == 1)
            {
                ones++;
            }
            N /= 2;
        }
        cout<<(static_cast<int>(pow(2, ones))) - 1<<endl;
    }
    return 0;
}
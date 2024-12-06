#include <bits/stdc++.h>
using namespace std;
int main(){
    long long A = 0, B = 0;
    cin >> A >> B;
    long long countOdd = 0, countEven = 0;
    long long sumOdd = 0, sumEven = 0;
    long long minemum = min(B,A);
    long long maximum = max(A,B);
    if (minemum & 1)
    {
        if (maximum & 1)
        {
            countOdd = ((maximum-minemum)/2) + 1;
            countEven = (((maximum-1)-(minemum+1))/2) + 1;
            sumOdd = countOdd*(maximum+minemum)/2;
            sumEven = countEven*((maximum-1)+(minemum+1))/2;
        }else{
            countOdd = (((maximum-1)-minemum)/2) + 1;
            countEven = ((maximum-(minemum+1))/2) + 1;
            sumOdd = countOdd*((maximum-1)+minemum)/2;
            sumEven = countEven*(maximum+(minemum+1))/2;
        }
    }else{
        if (maximum & 1)
        {
            countOdd = ((maximum-(minemum+1))/2) + 1;
            countEven = (((maximum-1)-minemum)/2) + 1;
            sumOdd = countOdd*(maximum+(minemum+1))/2;
            sumEven = countEven*((maximum-1)+minemum)/2;
        }else{
            countOdd = (((maximum-1)-(minemum+1))/2) + 1;
            countEven = ((maximum-minemum)/2) + 1;
            sumOdd = countOdd*((maximum-1)+(minemum+1))/2;
            sumEven = countEven*(maximum+minemum)/2;
        }
    }
    long long sumAll = sumEven + sumOdd;
    cout << sumAll << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;
    return 0;
}

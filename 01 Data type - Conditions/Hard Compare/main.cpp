#include <iostream>
using namespace std;
#include <cmath>

int main (){
    long long A = 0, B = 0, C = 0, D = 0;
    cin>>A>>B>>C>>D;
    double leftSide = B * log(A);  
    double rightSide = D * log(C); 
    if (leftSide > rightSide) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
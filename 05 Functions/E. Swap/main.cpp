#include <bits/stdc++.h>
using namespace std;
void swapFunction(int* x, int* y);
int main(){
    int X =0, Y = 0;
    cin >> X >> Y;
    swapFunction(&X, &Y);
    cout << X <<" "<< Y << endl;
}

void swapFunction(int* x, int* y){
    int z = *x;
    *x = *y;
    *y = z;
}
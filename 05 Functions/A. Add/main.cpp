#include <bits/stdc++.h>
using namespace std;
int Add(int x, int y);
int main(){
    int X = 0, Y = 0;
    cin >> X;
    cin >> Y;
    int Z = Add(X,Y);
    cout << Z << endl;
    return 0;
}

int Add(int x, int y){
    return (x+y);
}
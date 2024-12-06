#include <bits/stdc++.h>
using namespace std;
void Print(int N);
int main(){
    int N = 0;
    cin >> N;
    Print(N);
}

void Print(int N){
    for (int i = 1; i < N; i++)
    {
        cout << i << " ";
    }
    cout << N;
}
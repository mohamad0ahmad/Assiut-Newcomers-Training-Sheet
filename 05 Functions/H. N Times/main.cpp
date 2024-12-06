#include <bits/stdc++.h>
using namespace std;
void print(int n, char c);
int main(){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n = 0;
        char c;
        cin >> n >> c;
        print(n, c);
    }
    
}
void print(int n, char c){
    for (int i = 0; i < n; i++)
    {
        cout<< c<<" ";
    }
    cout << endl;
}
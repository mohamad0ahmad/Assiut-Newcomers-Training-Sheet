#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string word = "hello";
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i++)
    {
        x = s.find(word[i], y);
        if (x >= y)
        {
            y = x+1;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length()-1-i])
        {
            cout << "NO" << endl;
            return 0;
        }else if ((s.length()-1-i) - i == 2 || (s.length()-1-i) - i == 1 || (s.length()-1-i) - i == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    return 0;
}
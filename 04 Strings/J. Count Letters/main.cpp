#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[26] ={0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            char x = i + 97;
            cout << x << " : " <<arr[i]<< endl;
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s1,s2; 
        cin >> s1;
        cin >> s2;
        int diff = s1.length() - s2.length();
        int x = 0;
        if (diff > 0)
        {
            x = s2.length();
        }else{
            x = s1.length();
        }
        
        diff = abs(diff);

        for (int i = 0; i < x; i++)
        {
            cout <<s1[i]<<s2[i];
        }
        if (x == s1.length())
        {
            for (int i = x; i < (x+diff); i++)
            {
                cout <<s2[i];
            }
        }else{
            for (int i = x; i < (x+diff); i++)
            {
                cout <<s1[i];
            }
        }
        cout << endl;
    }
    return 0;
}
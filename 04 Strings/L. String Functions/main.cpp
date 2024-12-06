#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 0, Q = 0;
    cin >> N;
    cin >> Q;
    string s;
    cin >> s;
    for (int i = 0; i < Q; i++)
    {
        string query;
        cin >> query;
        if (query == "pop_back")
        {
            s.pop_back();
        }else if (query == "front")
        {
            cout << s.front() << endl;
        }else if (query == "back")
        {
            cout << s.back()<< endl;
        }else if (query == "sort")
        {
            int l = 0, r = 0;
            cin >> l;
            cin >> r;
            sort(s.begin() + min(l ,r)-1,s.begin() + max(r,l) );
        }else if (query == "reverse")
        {
            int l = 0, r = 0;
            cin >> l;
            cin >> r;
            reverse(s.begin() + min(l ,r)-1,s.begin() + max(r,l) );
        }else if (query == "print")
        {
            int pos = 0;
            cin >> pos;
            cout << s.at(pos - 1) << endl;
        }else if (query == "substr")
        {
            int l = 0, r = 0;
            cin >> l;
            cin >> r;
            for (int i = min(l ,r)-1; i < max(r,l); i++)
            {
                cout << s.at(i);
            }
            cout << endl;
        }else if (query == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
    
    return 0;
}
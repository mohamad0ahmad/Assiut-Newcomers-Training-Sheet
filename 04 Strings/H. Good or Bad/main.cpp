#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;
        bool flag = true;
        if (s.length() < 3)
        {
            cout << "Bad" << endl;
            continue;
        }
        
        for (int i = 0; i < s.length()-2; i++)
        {
            if ((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'))
            {
                cout<<"Good"<< endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout<<"Bad"<<endl;
        }
        
    }
    return 0;
}
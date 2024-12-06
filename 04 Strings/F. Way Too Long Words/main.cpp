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
        if (s.length() > 10)
        {
            cout<<s[0]<<(s.length()-2)<<s[s.length()-1]<<endl;
        }else{
            cout << s << endl;
        }
        
    }
    
}
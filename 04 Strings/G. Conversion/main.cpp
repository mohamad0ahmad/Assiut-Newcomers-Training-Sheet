#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }else{
            s[i] -= 32;
        }
    }
    cout << s << endl;
    return 0;
}
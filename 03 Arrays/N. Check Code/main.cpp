#include <iostream>
using namespace std;

int main(){
    int A = 0 ,B = 0;
    cin >> A;
    cin >> B;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == A)
        {
            if (s[i] == '-')
            {
                continue; 
            }else{
                cout << "No" <<endl;
                return 0;
            }
        }
        if (s[i] - '0' >=0 && s[i] - '0' <= 9)
        {
            continue;
        }else{
            cout << "No" <<endl;
            return 0;
        }
        
    }
    
    
    cout<< "Yes" << endl;
    
    
    return 0;
}


#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int x = s1.compare(s2);
    if (x > 0)
    {
        cout<<s2<<endl;
    }else{
        cout<<s1<<endl;
    }
    
    return 0;
}
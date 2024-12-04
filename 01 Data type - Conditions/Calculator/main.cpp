#include <iostream>
using namespace std;
 
int main (){
    int A = 0, B = 0;
    char x;
    cin>>A;
    cin>>x;
    cin>>B;
    if(x == '+'){
        cout<<(long long)(A+B)<<endl;
    }else if(x == '-'){
        cout<<(long long)(A-B)<<endl;
    }else if(x == '*'){
        cout<<(long long)(A*B)<<endl;
    }else{
        cout<<(long long)(A/B)<<endl;
    }
}
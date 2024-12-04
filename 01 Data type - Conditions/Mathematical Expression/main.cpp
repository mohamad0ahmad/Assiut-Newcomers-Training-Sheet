#include <iostream>
using namespace std;

int main (){
    int A = 0, B = 0, C = 0;
    char s,q;
    cin>>A>>s>>B>>q>>C;
    if (s=='+')
    {
        if(A+B == C){
            cout<<"Yes"<<endl;
        }else{
            cout<<(A+B)<<endl;
        }
    }else if (s=='-')
    {
        if(A-B == C){
            cout<<"Yes"<<endl;
        }else{
            cout<<(A-B)<<endl;
        }
    }else{
        if(A*B == C){
            cout<<"Yes"<<endl;
        }else{
            cout<<(A*B)<<endl;
        }
    } 
}
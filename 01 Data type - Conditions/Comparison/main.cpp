#include <iostream>
using namespace std;

int main (){
    int A = 0, B = 0;
    char s;
    cin>>A>>s>>B;
    if (s=='>')
    {
        if (A>B)
        {
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
        
    }else if(s=='<'){
        if (A<B)
        {
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }else{
        if (A == B)
        {
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
}
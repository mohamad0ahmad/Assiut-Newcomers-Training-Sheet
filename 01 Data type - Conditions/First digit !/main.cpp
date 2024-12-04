#include <iostream>
using namespace std;
 
int main (){
    int A = 0;
    cin>>A;
    A /= 1000;
    if(A & 1){
        cout<<"ODD"<<endl;
    }else{
        cout<<"EVEN"<<endl;
    }
}
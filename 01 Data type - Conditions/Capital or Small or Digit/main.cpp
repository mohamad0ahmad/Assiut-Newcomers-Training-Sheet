#include <iostream>
using namespace std;
 
int main (){
    char x;
    cin>>x;
    if (x>=47 && x <= 57)
    {
        cout<<"IS DIGIT"<<endl;
    }else if(x>=65 && x <= 90){
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }else{
        cout<<"ALPHA\nIS SMALL"<<endl;
    }
     
}
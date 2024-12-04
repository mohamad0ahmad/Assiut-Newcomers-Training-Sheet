#include <iostream>
using namespace std;
 
int main (){
    char x;
    cin>>x;
    if (x>=65 && x <= 90)
    {
        cout<<(char)(x+' ')<<endl;
    }else{
       cout<<(char)(x-' ')<<endl;
    }
}
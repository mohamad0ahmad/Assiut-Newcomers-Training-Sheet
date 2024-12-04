#include <iostream>
using namespace std;
 
int main (){
    unsigned int A = 0 ,B = 0;
    cin>>A; 
    cin>>B;
    if (((A%B) == 0) || ((B%A) == 0))
    {
        cout<<"Multiples"<<endl;
    }else{
        cout<<"No Multiples";
    }
     
}
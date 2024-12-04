#include <iostream>
using namespace std;
#include <cmath> 
int main (){
    double n = 0;
    cin>>n;
    int x = n;
    if(fmod(n, x) == 0){
        cout<<"int "<<x;
    }else{
        cout<<"float "<<x<<" "<<(n-x);
    }
}
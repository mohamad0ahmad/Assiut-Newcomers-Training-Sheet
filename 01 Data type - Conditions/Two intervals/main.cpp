#include <iostream>
using namespace std;

int main (){
    long long l1 = 0, l2 = 0, r1 = 0, r2 = 0;
    cin>>l1>>r1>>l2>>r2;
    if(l2<=r1 && l2>=l1){
        if(r2>r1){
            cout<<l2<<" "<<r1;
        }else{
            cout<<l2<<" "<<r2;
        }
    }else if (l2<l1 && r2 >= l1)
    {
        if (r2<=r1)
        {
            cout<<l1<<" "<<r2;
        }else{
            cout<<l1<<" "<<r1;
        }
        
    }else{
        cout<<"-1";
    }
    
}
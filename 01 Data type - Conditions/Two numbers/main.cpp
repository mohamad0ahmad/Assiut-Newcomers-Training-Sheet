#include <iostream>
#include <math.h>
using namespace std;
 
int main (){
    float A = 0, B = 0;
    cin>>A;
    cin>>B;
    cout<<"floor "<<A<<" / "<<B<<" = "<<floor(A/B)<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil(A/B)<<endl;
    cout<<"round "<<A<<" / "<<B<<" = "<<round(A/B)<<endl;
}
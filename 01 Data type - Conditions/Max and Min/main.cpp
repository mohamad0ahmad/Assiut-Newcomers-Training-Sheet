#include <iostream>
using namespace std;
 
int main (){
    int A = 0, B = 0, C = 0, Min = INT_MAX, Max = INT_MIN;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A >= B && A>=C){
        Max = A;
    }else if(B >= A && B>=C){
        Max = B;
    }else{
        Max = C;
    }

    if(A <= B && A<=C){
        Min = A;
    }else if(B <= A && B<=C){
        Min = B;
    }else{
        Min = C;
    }
    cout<<Min<<" "<<Max<<endl;
}
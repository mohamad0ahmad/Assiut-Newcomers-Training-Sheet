#include <iostream>
using namespace std;

int main (){
    int N = 0;
    cin>>N;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < N; i++)
    {
        int X = 0;
        cin>>X;
        if(X&1){
            odd++;
        }else{
            even++;
        }
        if(X>0){
            positive++;
        }else if (X<0){
            negative++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
    return 0;
}
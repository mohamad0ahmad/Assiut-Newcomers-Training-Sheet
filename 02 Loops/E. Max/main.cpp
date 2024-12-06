#include <iostream>
using namespace std;

int main (){
    int N = 0;
    int Max = INT_MIN, Num = 0;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>Num;
        if(Num > Max){
            Max = Num;
        }
    }
    cout<<Max<<endl;
}
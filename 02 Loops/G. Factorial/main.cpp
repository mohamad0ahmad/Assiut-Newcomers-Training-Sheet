#include <iostream>
using namespace std;

int main (){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        long long Num = 0;
        cin >> Num;
        if(Num == 0 || Num == 1){
            cout<<"1"<<endl;
        }else{
            for(int j = (Num-1); j > 0; j--){
                Num *= j;
            }
            cout<<Num<<endl;
        }
    }
}
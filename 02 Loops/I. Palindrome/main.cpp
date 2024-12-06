#include <iostream>
using namespace std;

int main (){
    int Num = 0,RevNum = 0;
    cin>>Num;
    int sameNum = Num;
    while (Num != 0)
    {
        int reminder = Num%10;
        RevNum *= 10;
        RevNum += reminder;
        Num /= 10;
    }
    cout<<RevNum<<endl;
    if (RevNum == sameNum)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}


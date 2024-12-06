#include <iostream>
using namespace std;

bool isLucky(int N){
    while (N != 0)
    {
        int reminder = N % 10;
        if (reminder == 4 || reminder == 7)
        {
            N /= 10;
        }else{
            return false;
        }
    }
    return true;
}

int main (){
    int A = 0, B = 0;
    cin>>A;
    cin>>B;
    int min = (A>B)? B:A;
    int max = (A<B)? B:A;
    bool output = false;
    for (int i = min; i <= max; i++)
    {
        if (isLucky(i))
        {
            cout<<i<<" ";
            output = true;
        }
    }
    if (output == false)
    {
        cout<<"-1"<<endl;
    }
}
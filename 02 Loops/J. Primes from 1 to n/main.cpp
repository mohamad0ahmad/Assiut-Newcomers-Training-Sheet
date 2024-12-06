#include <iostream>
using namespace std;
 
bool isPrime(int N){
    if (N == 2 || N == 3 )
    {
        return true;
    }else{
        for (int i = 2; i <= (N/2); i++)
        {
            if(N%i == 0){
                return false;
            }
        }
        return true;
    }
}
 
int main (){
    int N = 0;
    cin>>N;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
 
int main (){
    long long N = 0, M = 0;
    cin>>N;
    cin>>M;
    N %= 10;
    M %= 10;
    cout<<(N+M)<<endl;
}
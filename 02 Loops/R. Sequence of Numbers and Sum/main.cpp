#include <iostream>
using namespace std;

int main(){
    int N = 1, M = 1;
    cin>>N;
    cin>>M;
    int sum = 0;
    while (N > 0 && M >0)
    {
        sum = 0;
        if (N > M)
        {
            for (int i = M; i <= N; i++)
            {
                cout<<i<<" ";
                sum += i;
            }
            
        }else{
            for (int i = N; i <= M; i++)
            {
                cout<<i<<" ";
                sum += i;
            }
        }
        cout<<"sum ="<<sum<<endl;
        cin>>N;
        cin>>M;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int T = 0;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        unsigned int N = 0;
        cin>>N;
        while ((N/10) != 0)
        {
            int reminder = N % 10;
            N /=10;
            cout<<reminder<<" ";
        }
        cout<<N<<endl;
    }
    return 0;
}
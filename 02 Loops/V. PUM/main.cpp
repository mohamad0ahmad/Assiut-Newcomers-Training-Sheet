#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    for (int i = 1; i <= (4*N); i++)
    {
        if (i%4 == 0)
        {
            cout<<"PUM"<<endl;
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main (){
    int A = 0, B = 0, GCD = 0;
    cin>>A>>B;
    for (int i = 1; i <= A; i++)
    {
        if (A%i == 0 && B%i == 0)
        {
            GCD = i;
        }
        
    }
    cout<<GCD<<endl;
}
#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int Number = 0,Sum = 0;
    cin>>Number;
    while (Number != 0)
    {
        int reminder = Number % 10;
        Sum += reminder;
        Number /= 10;
    }
    cout<<Sum<<endl;
    return 0;
}


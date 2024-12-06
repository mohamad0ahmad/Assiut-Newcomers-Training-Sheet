#include <iostream>
using namespace std;

int main (){
    int X = 0;
    cin >> X;
    while(X != 1999){
        cout<<"Wrong"<<endl;
        cin >> X;
    }
    cout<<"Correct"<<endl;
    return 0;
}
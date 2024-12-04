#include <iostream>
using namespace std;

int main (){
    long long A = 0, B = 0, C = 0, D = 0, result = 0;
    cin>>A>>B>>C>>D;
    result = (A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100;
    result %= 100;
    if (result==0)
    {
        cout<<"00"<<endl;
    }else if (result<10){
        cout <<"0"<<result << endl;
    }else{
        cout << result << endl;
    }   
}
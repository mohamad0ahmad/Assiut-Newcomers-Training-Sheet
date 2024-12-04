#include <iostream>
using namespace std;
#include <iomanip>

int main (){
    cout << fixed << setprecision(9);
    double pi =3.141592653;
    double r = 0;
    cin>>r;
    cout<<(r*r*pi)<<endl;
}
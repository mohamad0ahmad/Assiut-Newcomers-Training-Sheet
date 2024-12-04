#include <iostream>
using namespace std;
 
int main (){
    int A = 0, B = 0, C = 0;
    cin>>A;
    cin>>B;
    cin>>C;
    if (A <= B && A <= C) {
        if (B <= C) {
            cout << A << "\n" << B << "\n" << C << endl;
        } else {
            cout << A << "\n" << C << "\n" << B << endl;
        }
    } else if (B <= A && B <= C) {
        if (A <= C) {
            cout << B << "\n" << A << "\n" << C << endl;
        } else {
            cout << B << "\n" << C << "\n" << A << endl;
        }
    } else {
        if (A <= B) {
            cout << C << "\n" << A << "\n" << B << endl;
        } else {
            cout << C << "\n" << B << "\n" << A << endl;
        }
    }

    cout<<"\n"<< A << "\n" << B << "\n" << C << endl;
}
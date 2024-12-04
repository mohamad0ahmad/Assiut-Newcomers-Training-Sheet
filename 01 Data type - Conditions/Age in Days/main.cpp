#include <iostream>
using namespace std;
 
int main (){
    int age = 0;
    cin>>age;
    int years = 0, months = 0, days = 0;
    years = age/365;
    age %= 365;
    months = age/30;
    age %= 30;
    days = age;
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;
}
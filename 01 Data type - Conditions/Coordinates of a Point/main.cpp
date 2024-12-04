#include <iostream>
using namespace std;
 
int main (){
    double x = 0, y = 0;
    cin>>x;
    cin>>y;
    if (x>0)
    {
        if (y>0)
        {
            cout<<"Q1"<<endl;
        }else if(y<0){
            cout<<"Q4"<<endl;
        }else{
            cout<<"Eixo X"<<endl;
        }
        
    }else if(x<0){
        if (y>0)
        {
            cout<<"Q2"<<endl;
        }else if(y<0){
            cout<<"Q3"<<endl;
        }else{
            cout<<"Eixo X"<<endl;
        }
    }else{
        if (y == 0)
        {
            cout<<"Origem"<<endl;
        }else{
            cout<<"Eixo Y"<<endl;
        }
    }
    
}
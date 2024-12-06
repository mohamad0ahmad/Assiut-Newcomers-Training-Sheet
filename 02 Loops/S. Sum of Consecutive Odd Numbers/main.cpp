#include <iostream>
using namespace std;

int main(){
    int Tests = 0;
    cin>>Tests;
    for (int i = 0; i < Tests; i++)
    {
        int X = 0, Y = 0,sum = 0;
        cin>>X;
        cin>>Y;
        if (X<Y)
        {
            if (X&1)
            {
                X+=2;
                for (int j = X; j < Y; j+=2)
                {
                    sum +=j;
                }
                
            }else{
                X+=1;
                for (int j = X; j < Y; j+=2)
                {
                    sum +=j;
                }
            }
            
        }else{
            if (Y&1)
            {
                Y+=2;
                for (int j = Y; j < X; j+=2)
                {
                    sum +=j;
                }
                
            }else{
                Y+=1;
                for (int j = Y; j < X; j+=2)
                {
                    sum +=j;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
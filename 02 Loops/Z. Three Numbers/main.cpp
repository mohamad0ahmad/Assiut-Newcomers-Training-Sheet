#include <iostream>
using namespace std;

int main(){
    int K = 0, S = 0;
    cin >> K;
    cin >> S;
    int values = 0;
    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            int Z = S - (i + j);
            if (Z>=0 && Z<=K)
            {
                values++;
            }
        }
    }
    cout<<values<<endl;
    return 0;
}
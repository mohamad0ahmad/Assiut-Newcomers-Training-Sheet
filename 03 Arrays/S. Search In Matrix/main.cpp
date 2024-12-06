#include <iostream>
using namespace std;

int main(){
    int N = 0 ,M = 0 ,X = 0;
    cin >> N;
    cin >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin >> X;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == X)
            {
                cout << "will not take number"<<endl;
                return 0;
            }
            
        }
    }
    cout << "will take number"<<endl;
    return 0;
}


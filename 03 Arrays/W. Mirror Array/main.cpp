#include <iostream>
using namespace std;


int main(){
    int N = 0, M = 0;
    cin >> N;
    cin >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    int invertedArr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            invertedArr[i][abs(j-(M-1))]= arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << invertedArr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}

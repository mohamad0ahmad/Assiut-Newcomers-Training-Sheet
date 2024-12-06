#include <iostream>
using namespace std;

int main(){
    int N = 0 ;
    cin >> N;
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>arr[i][j];
        }
    }
    int primDiagonal = 0, secDiagonal = 0;
    for (int i = 0; i < N; i++)
    {
        primDiagonal += arr[i][i];
        secDiagonal += arr[i][(N-1)-i];
    }
    int absDiff = abs(primDiagonal-secDiagonal);
    cout << absDiff <<endl;
    return 0;
}
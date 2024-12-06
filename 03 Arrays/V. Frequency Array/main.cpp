#include <iostream>
using namespace std;


int main(){
    int N = 0 ,M = 0;
    cin >> N;
    cin >> M;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int freqArr[N+1] = {};
    for (int i = 0; i < N; i++)
    {
        freqArr[arr[i]] += 1;
    }
    for (int i = 1; i <= M; i++)
    {
        cout << freqArr[i] << endl;
    }
    return 0;
}

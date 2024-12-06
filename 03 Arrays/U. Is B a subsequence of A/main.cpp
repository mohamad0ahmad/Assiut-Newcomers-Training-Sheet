#include <iostream>
using namespace std;
int Search(int arr[] ,int N ,int Num ,int currentInd);
int main(){
    int N = 0 ,M = 0;
    cin >>N;
    cin >>M;
    int A[N];
    int B[M];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    int currentInd = 0 ,index = 0,substance = 0;
    for (int i = 0; i < M; i++)
    {
        index  = Search(A,N,B[i],currentInd);
        if (index == -1)
        {
            cout<<"NO"<<endl;
            return 0;
        }else{
            if (index > currentInd || currentInd == 0)
            {
                currentInd = index;
            }else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
int Search(int arr[] ,int N ,int Num ,int currentInd){
    for (int i = currentInd; i < N; i++)
    {
        if (arr[i] == Num)
        {
            return i;
        }
    }
    return -1;
}
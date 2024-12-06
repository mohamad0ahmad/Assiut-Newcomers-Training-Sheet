#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int Min = 100000 ,Max =-100000;
    int Minindex = 0 ,Maxindex = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
            Maxindex = i;
        }else if (arr[i] < Min)
        {
            Min = arr[i];
            Minindex = i;
        }
    }
    int X = 0;
    X = arr[Minindex];
    arr[Minindex] = arr[Maxindex];
    arr[Maxindex] = X;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


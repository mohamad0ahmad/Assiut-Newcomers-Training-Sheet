#include <bits/stdc++.h>
using namespace std;
int maxarray(int array[], int N);
int minarray(int array[], int N);
int main(){
    int N = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << minarray(arr,N)<<" "<<maxarray(arr,N)<<endl;
}
int maxarray(int arr[], int N){
    int max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minarray(int arr[], int N){
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
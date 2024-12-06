#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int lowest = INT_MAX;
    int lowest_index = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            lowest_index = i;
        }
    }
    cout<<lowest<<" "<<(lowest_index+1)<<endl;
    return 0;
}
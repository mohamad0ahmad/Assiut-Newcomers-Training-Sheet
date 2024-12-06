#include <iostream>
using namespace std;

void SelectionSort(int arr[],int N);
void swap(int &x,int &y);
int main(){
    int T = 0;
    cin>>T;for (int k = 0; k < T; k++)
    {
       int N = 0;
    cin >> N;
    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int smallest = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if ((arr[i]+arr[j]+j-i) < smallest)
            {
                smallest = (arr[i]+arr[j]+j-i);
            }
            
        }
    }
    cout<<smallest<<endl; 
    }
    
    return 0;
}


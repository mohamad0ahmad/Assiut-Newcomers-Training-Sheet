#include <iostream>
using namespace std;

void SelectionSort(int arr[],int N);
void swap(int &x,int &y);
int main(){
    int N = 0;
    cin >> N;
    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    SelectionSort(arr,N);
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

void SelectionSort(int arr[],int N){
    for (int i = 0; i < N; i++)
    {
        int MinIndex = i;
        for (int j = i+1; j < N; j++)
        {
            if (arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
            
        }
        swap(arr[MinIndex],arr[i]);
    }
    
}
void swap(int &x,int &y){
    int temp = x;
    x =y;
    y = temp;
}
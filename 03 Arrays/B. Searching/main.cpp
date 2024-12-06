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
    int X = 0;
    cin >> X;
    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (X == arr[i])
        {
            cout << i << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << -1 << endl;
    }
    return 0;
}
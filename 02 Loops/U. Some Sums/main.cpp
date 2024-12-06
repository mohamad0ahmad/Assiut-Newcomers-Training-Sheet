#include <iostream>
using namespace std;

int main(){
    int N = 0, A = 0, B = 0, Sum = 0;
    cin >> N;
    cin >> A;
    cin >> B;
    for (int i = 1; i <= N; i++)
    {
        int num = i;
        int digitSum = 0;
        while (num != 0)
        {
            digitSum += (num % 10);
            num /=10;
        }
        if (digitSum >= A && digitSum <= B)
        {
            Sum += i;
        }
    }
    cout<<Sum<<endl;
    return 0;
}
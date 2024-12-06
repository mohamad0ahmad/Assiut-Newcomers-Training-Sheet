#include <iostream>
using namespace std;

int arr[100]; 
int index;    

bool isOdd(int num) {
    return num % 2 == 1;
}

void convert(int num) {
    index = 0; 
    while (num != 0) {
        arr[index] = num % 2;
        num /= 2;
        index++;
    }
    index--; 
}

bool isBlindRome() {
    for (int i = 0; i <= index / 2; i++) {
        if (arr[i] != arr[index - i])
            return false;
    }
    return true;
}

int main() {
    int num;
    cin >> num;

    if (isOdd(num)) {
        convert(num);
        if (isBlindRome()) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }

    return 0;
}

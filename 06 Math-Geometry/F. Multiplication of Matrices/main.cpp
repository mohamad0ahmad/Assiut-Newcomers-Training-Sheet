#include <iostream>
using namespace std;

int main() {
    int x1, y1;
    cin >> x1 >> y1;

    int arr1[x1][y1];
    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y1; j++) {
            cin >> arr1[i][j];
        }
    }

    int x2, y2;
    cin >> x2 >> y2;

    int arr2[x2][y2];
    for (int i = 0; i < x2; i++) {
        for (int j = 0; j < y2; j++) {
            cin >> arr2[i][j];
        }
    }



    int res[x1][y2];
    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y2; j++) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y2; j++) {
            for (int k = 0; k < y1; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

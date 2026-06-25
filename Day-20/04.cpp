#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int a[10][10];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < c; ++j) {
        int colSum = 0;
        for (int i = 0; i < r; ++i) {
            colSum += a[i][j];
        }
        cout << colSum << " ";
    }
    cout << endl;

    return 0;
}
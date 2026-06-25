#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[100][100], b[100][100], diff[100][100];

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            cin >> a[i][j];

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            cin >> b[i][j];

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            diff[i][j] = a[i][j] - b[i][j];

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
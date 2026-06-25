#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10][10];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    bool isSymmetric = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }

    if (isSymmetric) {
        cout << "Symmetric" << endl;
    } else {
        cout << "Not Symmetric" << endl;
    }

    return 0;
}
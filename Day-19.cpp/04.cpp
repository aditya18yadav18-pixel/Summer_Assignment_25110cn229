#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100][100];
    int primary_sum = 0, secondary_sum = 0;

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];

    for(int i = 0; i < n; ++i) {
        primary_sum += a[i][i];
        secondary_sum += a[i][n - 1 - i];
    }

    cout << primary_sum << " " << secondary_sum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char a[3][3]; // Using char array for grid

    // Input the 3x3 grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Check the conditions
    if (a[0][0] == a[2][2] && a[0][1] == a[2][1] && a[0][2] == a[2][0] && a[1][0] == '.' && a[1][1] == '.' && a[1][2] == '.') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

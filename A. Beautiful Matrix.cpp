#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[5][5];

    // Input the matrix
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }

    // Output the absolute difference
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == j && a[i][j] == 1 && i != 4) {
                cout << "0" << endl;
            } else if(i != j && a[i][j] == 1 && i != 4) {
                cout << abs(i - j) << endl;
            } else if(i != j && a[i][j] == 1 && i == 4) {
                cout << abs(i - j) << endl;
            }
        }
    }

    return 0;
}

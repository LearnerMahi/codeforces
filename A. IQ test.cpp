#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int odd_count = 0, even_count = 0;
    int odd_index = -1, even_index = -1;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even_count++;
            even_index = i + 1;
        } else {
            odd_count++;
            odd_index = i + 1;
        }
    }

    if(odd_count == 1) {
        cout << odd_index << endl;
    } else if(even_count == 1) {
        cout << even_index << endl;
    }

    return 0;
}

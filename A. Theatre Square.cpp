#include<bits/stdc++.h>
using namespace std;

int main() {
    long long m, n, a;
    cin >> m >> n >> a;
    long long flagstones_needed_m = (m + a - 1) / a;
    long long flagstones_needed_n = (n + a - 1) / a;
    cout << flagstones_needed_m * flagstones_needed_n << endl;
    return 0;
}

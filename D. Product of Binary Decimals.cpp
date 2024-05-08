#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> z_algorithm(const string& s) {
    int n = s.length();
    vector<int> z(n, 0);
    int l = 0, r = 0;
    for (int i = 1; i < n; ++i) {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

int shortest_repeating_substring_length(const string& s) {
    int n = s.length();
    vector<int> z = z_algorithm(s);
    int min_length = n;
    for (int i = 1; i < n; ++i) {
        if (i + z[i] == n && n % i == 0) {
            min_length = min(min_length, i);
        }
    }
    return min_length;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortest_repeating_substring_length(s) << endl;
    }
    return 0;
}

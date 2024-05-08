#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string period;

        if (hour >= 12) {
            period = "PM";
            if (hour > 12)
                hour -= 12;
        } else {
            period = "AM";
            if (hour == 0)
                hour = 12;
        }

        printf("%02d:%02d %s\n", hour, minute, period.c_str());
    }

    return 0;
}

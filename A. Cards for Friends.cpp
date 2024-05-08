#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
           if(w%2!=0&&h%2!=0&&n>1){
            cout<<"NO"<<endl;
        }
        else if(w%2!=0&&h%2!=0&&n==1){
            cout<<"YES"<<endl;
        }

        else {
            int cnt = 1;
            int p = w * h;
            while ((p % 2 == 0) && p > 1) {
                p /= 2;
                cnt=cnt+2;
            }
            if (cnt >= n) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

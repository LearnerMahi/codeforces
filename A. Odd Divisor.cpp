#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
                cnt++;
            }
        }
        if(cnt>1&&cnt%2==0){
            cout<<"YES"<<endl;
        }
        else if(cnt%2!=0){
            cout<<"NO"<<endl;
        }
    }

}

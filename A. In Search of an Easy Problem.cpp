#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
        }
    }
    if(cnt>=1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}

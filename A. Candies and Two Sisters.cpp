#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a==1||a==2){
            cout<<"0"<<endl;
        }
        else{
                cout<<(a-1)/2<<endl;
        }
    }
}

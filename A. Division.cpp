
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        if(r>=1900&&r<=5000){
            cout<<"Division 1"<<endl;
        }
        else if(r>=1600&&r<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(r>=1400&&r<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(r<=1399){
            cout<<"Division 4"<<endl;
        }
    }
}

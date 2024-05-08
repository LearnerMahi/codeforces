#include<bits/stdc++.h>
using namespace std;
int sum;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++){
        sum=0;
    if(i==1){
        sum=sum+i;
    }
    sum=sum+2*i;
    }
    cout<<sum<<endl;
}

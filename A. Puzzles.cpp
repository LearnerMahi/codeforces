#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int max1=a[0];
    int min1=a[0];
    for(int i=0;i<n;i++){
        if (max1 < a[i])
            max1 = a[i];
        else if (min1 > a[i])
            min1 = a[i];
    }
    cout<<max1-min1<<endl;
    //cout<<max1<<"  "<<min1<<endl;
}

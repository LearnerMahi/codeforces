#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<1<<endl;

    }

 else{
        int c=0;
        while(a<=b){

            a=a*3;
            b=2*b;
            c++;
        }
          cout<<c<<endl;
    }


}

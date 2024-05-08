#include<bits/stdc++.h>
using namespace std;
int cntUniqueChar(string str){
    unordered_set<char>s;
    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    return s.size();
}
int main()
{
    string str;
    cin>>str;
    int m=cntUniqueChar(str);
    //cout<<m<<endl;
    if(m%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}

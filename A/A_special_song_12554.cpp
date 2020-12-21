#include <bits/stdc++.h>
using namespace std;
void ss(int &l,int &n,string *s){
    cout<<s[l]<<": Happy"<<endl;
    l=(l+1)%n;
    cout<<s[l]<<": birthday"<<endl;
    l=(l+1)%n;
    cout<<s[l]<<": to"<<endl;
    l=(l+1)%n;
    cout<<s[l]<<": you"<<endl;
    l=(l+1)%n;
}
void sss(int &l,int &n,string *s){
    cout<<s[l]<<": Happy"<<endl;
    l=(l+1)%n;
    cout<<s[l]<<": birthday"<<endl;
    l=(l+1)%n;
    cout<<s[l]<<": to"<<endl;
    l=(l+1)%n;
    cout<<s[l]<<": Rujia"<<endl;
    l=(l+1)%n;
}
int main(){
    
    int t,i=0;
    cin>>t;
    string s[t];
    int h=t;
    for(int i=0;i<t;i++) cin>>s[i];
    while(h>0){
        ss(i,t,s);
        ss(i,t,s);
        sss(i,t,s);
        ss(i,t,s);
        h-=16;
    }

    return 0;
}
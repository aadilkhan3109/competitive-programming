#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,w,a;
    cin>>t;
    while(t--){
        cin>>w;
        int u,d;
        bool res =true;
        cin>>u>>d;
        a = u-d;
        w--;    
        while(w--){
            cin>>u>>d;
            if(u-d!=a)res =false;
        }
        if(res)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        if(t)cout<<endl;
    }
}
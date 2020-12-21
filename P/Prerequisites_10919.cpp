#include <bits/stdc++.h>
using namespace std;
int main(){
    
    while(true){
        int k,m,c,r;
        string t;
        map<string,int> co;
        cin>>k;
        if(k==0)break;
        cin>>m;
        int x=m;
        for(int i=0;i<k;i++){
            cin>>t;
            co[t]=1;
        }
        for(int i=0;i<m;i++){
            cin>>c>>r;
            while(c--){
                cin>>t;
                if(co.find(t)!=co.end())r--;
            }
            if(r<=0)x--;
        }
        if(x<=0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
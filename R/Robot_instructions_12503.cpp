#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int r[n],res=0,tt;
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            if(a[0]=='S'){
                cin>>a>>tt;
                r[i]=r[tt-1];
                res+=r[i];
            }else{
                if(a[0]=='L'){
                    r[i]=-1;
                    res+=r[i];
                }else if(a[0]=='R'){
                    r[i]=1;
                    res+=r[i];
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
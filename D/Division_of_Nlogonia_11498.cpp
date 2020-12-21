#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n,m;
        cin>>n>>m;
        while(t--){
            int x,y;
            cin>>x>>y;
            if(x>n){
                if(y>m)cout<<"NE"<<endl;
                else if(y<m)cout<<"SE"<<endl;
                else cout<<"divisa"<<endl;
            }
            else if(x<n){
                if(y>m)cout<<"NO"<<endl;
                else if(y<m)cout<<"SO"<<endl;
                else cout<<"divisa"<<endl;
            }
            else cout<<"divisa"<<endl;
        }
        cin>>t;
    }
    return 0;
}
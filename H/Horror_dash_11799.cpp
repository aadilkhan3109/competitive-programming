#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    while(t--){
        int n,m=0,h;
        cin>>n;
        while(n--){
            cin>>h;
            if(h>m)m=h;
        }
        printf("Case %d: %d\n",c++,m);
    }
    return 0;
}
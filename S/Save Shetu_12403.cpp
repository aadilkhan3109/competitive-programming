#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,k=0,res=0;
    char s[10];
    cin>>t;
    while(t--){
        scanf("%s",s);
        if(s[0]=='d'){
            scanf("%d",&k);
            res+=k;
            }
        if(s[0]=='r')cout<<res<<endl;
    }
    return 0;
}
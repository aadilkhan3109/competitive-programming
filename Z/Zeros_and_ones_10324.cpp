#include <bits/stdc++.h>
using namespace std;
bool is(string s,int &a,int &b){
    if(a>b){
        a^=b;
        b^=a;
        a^=b;
    }
    while(a<b && s[a]==s[b]) a++;
    if (a==b)return true;
    else return false;
}
int main(){
    int c =1,n,a,b;
    while(true){
        string s;
        cin>>s;
        if(scanf("%d",&n)==EOF)break;
        printf("Case %d:\n",c++);
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(is(s,a,b)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
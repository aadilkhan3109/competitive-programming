#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t,c=1;
    cin>>t;
    while(t--){
        string s[10];
        int v[10];
        for(int i=0;i<10;i++){
            cin>>s[i];
            cin>>v[i];
        }
        int max=0;
        for(int s:v){
            if(s>max)max = s;
        }
        printf("Case #%d:\n",c++);
        for(int i =0;i<10;i++){
            if(v[i]==max) cout<<s[i]<<endl;
        }
    }
    return 0;
}
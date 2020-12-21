#include <bits/stdc++.h>
using namespace std;
int main(){
    
    while(true){
        int t,min=1e9,id=-1,ir=-1;
        string s;
        cin>>t;
        if(t==0)break;
        cin>>s;
        for(int i =0;i<s.length();i++){
            if(s[i]=='D')id=i;
            else if(s[i]=='R')ir=i;
            else if(s[i]=='Z'){
                min =0;
                break;
            }
            if(ir!=-1 && id!=-1 && abs(ir-id)<min)min = abs(ir-id);
        }
        cout<<min<<endl;
    }
}
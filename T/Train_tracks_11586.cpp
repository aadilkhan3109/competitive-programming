#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    scanf("%d\n",&t);
    while(t--){
        string s;
        int m=0,f=0;
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(s[i]=='M')m++;
            else if(s[i]=='F')f++;
        }
        if(m==1 && f==1)cout<<"NO LOOP"<<endl;
        else if(m==f)cout<<"LOOP"<<endl;
        else cout<<"NO LOOP"<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

void r(string &s){
    if(s.length()==1) return;
    int re =0;
    for(int i=0;i<s.length();i++){
        re += (s[i]-'0');
    }
    s=to_string(re);
    r(s);
}
int main(){
    string s;
    cin>>s;
    while(s[0] !='0'){
        r(s);
        cout<<s<<endl;
        cin>>s;
    }
    return 0;
}
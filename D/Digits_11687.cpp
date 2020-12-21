#include <bits/stdc++.h>
using namespace std;

int r(int l,string a, int b){
   string s = to_string(b);
   if(a == s) return l;
   return r(l+1,s,s.size());
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   while(cin>>s && s[0]!='E'){
      //cout<<s.size()<<"  "<<to_string(s.size()).size()<<endl;
      cout<<r(1,s,s.size())<<endl;
   }
}
#include <bits/stdc++.h>
using namespace std;

string gen(string l){
  string s="";
  for(int i=0;i<l.size();i++) if(l[i]!=' ') s+=l[i];
  sort(s.begin(),s.end());
  return s;
}

int main(){
  int t,nnn=0;
  cin>>t;
  string l;
  getline(cin,l);
  getline(cin,l);
  while(t--){
    if(nnn) cout<<endl;
    vector<string> li,res;
    while(getline(cin,l) && l != ""){
      li.push_back(l);
    }
    for(int i=0;i<li.size();i++){
      for(int j=i;j<li.size();j++){
        if(i!=j && (gen(li[i])==gen(li[j]))) 
          if(li[i]<li[j]) res.push_back(li[i]+" = "+li[j]);
          else res.push_back(li[j]+" = "+li[i]);
      }
    }
    sort(res.begin(),res.end());
    for(string x: res) cout<<x<<endl;
    nnn=1;
  }
}
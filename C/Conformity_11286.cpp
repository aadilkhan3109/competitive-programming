#include <bits/stdc++.h> 
using namespace std;
int main(){
  int t;
  while(cin>>t && t!=0){
    map<string,int> m;
    while(t--){
      int a[5];
      for(int i=0;i<5;i++) cin>>a[i];
      sort(a,a+5);
      string h="";
      for(int i=0;i<5;i++) h+=to_string(a[i]);
      if(m.find(h) != m.end()) m[h]++;
      else m[h]=1;
    }
    int mx=-1,res=0;
    for(auto x: m) 
      if(mx<x.second) mx = x.second;
    for(auto x: m)
      if(x.second==mx)res+=x.second;
    cout<<res<<endl;
  }
}
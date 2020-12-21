#include <bits/stdc++.h>
using namespace std;
int comp(string s,string p){
  for(int i =0;i<s.size();i++){
    if(s[i]!=p[i]) return i;
  }
  return -1;
}
int main(){
  int t,c=1;
  while(cin>>t && t!=0){
    string s[t];
    vector<string> res;
    for(int i=0;i<t;i++){
      cin>>s[i];
    }
    for(int i=0;i<t;i++){
      int l=i;
      while(i<t-1 && ((stoi(s[i+1])-stoi(s[i])==1))){
        i++;
      }
      if(i-l>0){
        int loc=comp(s[l],s[i]);
        string tm=s[l]+"-"+s[i].substr(loc,s[i].size());
        res.push_back(tm);
      }
      else res.push_back(s[l]);
    }
    cout<<"Case "<<c++<<":"<<endl;
    for(int i=0;i<res.size();i++){
      cout<<res[i]<<endl;
    }
    cout<<endl;
  }
  return 0;
}
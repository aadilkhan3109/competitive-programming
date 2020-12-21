#include <bits/stdc++.h>
using namespace std;

char lo(char a){
  if(a>='A' && a <= 'Z') return (a-'A')+'a';
  else return a;
}
string anag(string a){
  string s =a;
  for(int i =0;i<s.size();i++) s[i]=lo(s[i]);
  sort(s.begin(),s.end());
  return s;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string l;
  vector<string> wo;
  map<string,int> r;
  map<string,string> d;
  while(true){
    cin>>l;
    if(l=="#") break;
    wo.push_back(l);
  }

  for(string x:wo){
    string h = anag(x);
    if(r.find(h) != r.end()) r[h]++;
    else r[h] = 1;
    d[h]=x;
  }
  wo.clear();
  for(auto &x: r){
    if(x.second==1)
      wo.push_back(d[x.first]);
  }
  sort(wo.begin(),wo.end());
  for(auto &x:wo){
    cout<<x<<endl;
  }
  return 0;
}
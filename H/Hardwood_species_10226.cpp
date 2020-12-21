#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,f=0;
  string s;
  cin>>t;
  getline(cin,s);
  getline(cin,s);
  while(t--){
    if(f)cout<<endl;
    float h=0;
    map<string,int> m;
    while (getline(cin,s) && s!=""){
      h++;
      if(m.find(s) != m.end()) m[s]++;
      else m[s]=1;
    }
    for(auto x: m){
    // cout<<h<<" "<<x.second<<endl;
      printf("%s %.4f\n",x.first.c_str(),((float)x.second*100)/h);
    }
    f=1;
  }
}
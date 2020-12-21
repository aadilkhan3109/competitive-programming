#include <bits/stdc++.h>
using namespace std;
struct n{
  int ii, time=0,q[10]={0},solve=0,is=0,ac[10]={0};
};

bool com(n &a,n &b){
  if(a.solve > b.solve) return true;
  else if(a.solve == b.solve){
    if(a.time<b.time) return true;
    else if(a.time == b.time){
      if(a.ii<b.ii) return true;
      else return false;
    }else return false;
  }else return false;
}

int main(){
  int t,fl=0;
  cin>>t;
  string s;
  getline(cin,s);
  getline(cin,s);
  while(t--){
    if(fl) cout<<endl;
    n li[102];
    for(int i=0;i<102;i++)li[i].ii=i;
    while(getline(cin,s) && s!=""){
      stringstream ci(s);
      int a,b,c;
      char h;
      ci>>a>>b>>c>>h;
      li[a].is=1;
      if(h=='I'){
        li[a].q[b]++;
      }else if(h=='C' && !(li[a].ac[b])){
        li[a].solve++;
        li[a].time+=c;
        li[a].time+=(li[a].q[b]*20);
        li[a].ac[b]=1;
      }
    }
    sort(li,li+102,com);
    for(int i=0;i<102;i++){
      if(li[i].is)
      cout<<li[i].ii<<" "<<li[i].solve<<" "<<li[i].time<<endl;
    }
    fl=1;
  }
  return 0;
}
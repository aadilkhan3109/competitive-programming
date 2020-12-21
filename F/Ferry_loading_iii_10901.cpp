#include <bits/stdc++.h>
using namespace std;
struct car{
  int ari,turn;
  car(int a,int b){
    ari=a;
    turn = b;
  }
};

int main(){
  int c;
  cin>>c;
  while(c--){
    int n,t=0,m,l,isl=1;
    queue<car> le,ri;
    cin>>n>>l>>m;
    int pr[m];
    for(int i=0;i<m;i++){
      string s;
      int a;
      cin>>a>>s;
      if(s=="left") le.push(car(a,i));
      else ri.push(car(a,i));
    }
    while(!le.empty() || !ri.empty()){
      int x = 0xfffffff;
      if (!le.empty()) x = le.front().ari;
      if (!ri.empty()) x = min(x,ri.front().ari);

      t = max(t,x);

      if(isl){
        int x=n;
        while(x-- && !le.empty() && le.front().ari<=t){
          pr[le.front().turn] = t+l;
          le.pop();
        }
        t+=l;
        isl=0;
      }
      else {
        int x=n;
        while(x-- && !ri.empty() && ri.front().ari<=t){
          pr[ri.front().turn] = t+l;
          ri.pop();
        } 
        t+=l;
        isl=1;
      }
    }
    for(int i=0;i<m;i++) cout<<pr[i]<<endl;
    if(c) cout<<endl;
  }

  return 0;
}
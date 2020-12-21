#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0),cin.tie(0);
  int set;
  cin>>set;
  while(set--){
    int n,s,q,res=0,cu=0,car=0;
    cin>>n>>s>>q;
    vector<queue<int>> st(n);
    for(int i=0;i<n;i++){
      int qi,qqi;
      cin>>qi;
      car+=qi;
      while(qi--){
        cin>>qqi;
        st[i].push(qqi);
      }
    }
    stack<int> ca;
    while(car){
      while(ca.size()<s && !st[cu].empty()){
        ca.push(st[cu].front());
        st[cu].pop();
        res++;
      }
      (++cu)%=n;
      res+=2;
      while(!ca.empty()){
        if((ca.top()-1)==cu){
          res++;
          car--;
          ca.pop();
        }
        else if(st[cu].size() < q){
          st[cu].push(ca.top());
          ca.pop();
          res++;
        } 
        else break;
      }
    }
    cout<<res<<endl;
  }
}
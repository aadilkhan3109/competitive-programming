#include <bits/stdc++.h> 
using namespace std;
int main(){
  int n;
  while(cin>>n){
    stack<int> s;
    queue<int> q;
    priority_queue<int> p;
    bool fs=1,fq=1,fp=1;
    while(n--){
      int a,b;
      cin>>a>>b;
      if(a==1) {
        if(fs)s.push(b);
        if(fq)q.push(b);
        if(fp)p.push(b);
      }
      else if(a == 2){
        if(fs){
          if(s.empty() || b != s.top()) fs=0;
          else s.pop();
        }
        if(fq){
          if(q.empty() || b != q.front()) fq=0;
          else q.pop();
        }
        if(fp){
          if(p.empty() || b != p.top()) fp=0;
          else p.pop();
        }
      }
    }
    
    if(fs && !fq && !fp) cout<<"stack"<<endl;
    else if(!fs && fq && !fp) cout<<"queue"<<endl;
    else if(!fs && !fq && fp) cout<<"priority queue"<<endl;
    else if(!fs && !fq && !fp) cout<<"impossible"<<endl;
    else cout<<"not sure"<<endl;
  }
}
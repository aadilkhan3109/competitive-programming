#include <bits/stdc++.h>
using namespace std;

int main(){

  while(true){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a==0) break;
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    if(x > y) swap(x, y);
    int g=0,r=b;
    if(a>x){
      g++;
      if(c<y) r=c;
      else {
        g++;
      }
    }
    else {
      if(x>c) r=1;
      else if(x>b){
        if(c>y) r=b;
      }
      if(x<b){
        if(y<c) r = 53;
        else r=c;
      }
    }
    
    if(b>y) cout<<-1<<endl;
    else if(r == 53) cout<<-1<<endl;
    else if(a>y) cout<<-1<<endl;
    else if(g>1) cout<<-1<<endl;
    else{
      while(r==a || r==b || r==c || r==x || r==y) r++;
      if(r>52) cout<<-1<<endl;
      else cout<<r<<endl;
    }
  }

  return 0;
}
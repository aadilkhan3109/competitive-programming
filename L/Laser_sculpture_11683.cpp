#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
  while(true){
    int c,re=0,pr=0;
    cin>>pr;
    if(pr==0)break;
    cin>>c;
    while(c--){
      int x;
      cin>>x;
      if(pr>x){
        re+=(pr-x);
      }
      pr=x;
    }
    cout<<re<<endl;
  }
}
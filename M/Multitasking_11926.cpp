#include <bits/stdc++.h>
using namespace std;
bool v[1000011];
int main(){
  int n,m;
  while(cin>>n>>m &&(n!=0 ||  m!=0)){
    int a,b,h=1,l;
    for(int i=0;i<1000011;i++) v[i]=0;
    for(int j=0;j<n;j++){
      cin>>a>>b;
      if(h){
        for(int i =a;i<b;i++){
          if(v[i]){
            h=0;
            break;
          }else v[i]=1;
        }
      }
    }
    for(int j=0;j<m;j++){
      cin>>a>>b>>l;
      if(h){
        while(a<=1000000){
          for(int i=a;i<b && i<1000011;i++){
            if(v[i]){
              h=0;
              break;
            }else v[i]=1;
          }
          if(!h) break;
          a+=l,b+=l;
        }
      }
    }
    if(h)cout<<"NO CONFLICT"<<endl;
    else cout<<"CONFLICT"<<endl;
  }
  return 0;
}
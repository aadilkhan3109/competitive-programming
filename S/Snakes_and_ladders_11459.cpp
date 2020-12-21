#include <bits/stdc++.h>
using namespace std;

int ind(int *a,int b,int s){
  for(int i=0;i<s;i++){
    if(a[i]==b) return i;
  }
  return -1;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,flag=1;
    cin>>a>>b>>c;
    int head[b],tail[b],loc[a];    
    for(int i=0;i<a;i++) loc[i]=1;
    for(int i=0;i<b;i++) cin>>head[i]>>tail[i];
    for(int i=0;i<c;i++){
      int m;
      cin>>m;
      if(flag && loc[i%a]+m<=100) {
        loc[i%a]+=m;
        int in=ind(head,loc[i%a],b);
        if(in!=-1) loc[i%a]=tail[in];
        if(loc[i%a]==100) flag=0;
      }
    }
    for(int i=0;i<a;i++) cout<<"Position of player "<<i+1<<" is "<<loc[i]<<".\n";
    
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,m,a,b;
  while(cin>>t){
    int mi=0xfffffff;
    vector<int> v(t);
    for(int i=0;i<t;i++) cin>>v[i];
    sort(v.begin(),v.end());
    cin>>m;
    for(int i=0;i<t;i++)
      for(int j=i+1;j<t;j++){
        if(v[i]+v[j]==m) 
          if(abs(v[i]-v[j])<mi) 
            a=max(v[i],v[j]),b=min(v[i],v[j]),
            mi=abs(v[i]-v[j]);
      }
    cout<<"Peter should buy books whose prices are "<<b<<" and "<<a<<".\n\n";
  }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int r=-1,a[n];
    map<int,int> m;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++) {
      if(m.find(a[i]) != m.end()){
        int tt=m.size();
        if(r<tt) r=tt;
        i=m[a[i]];
        m.clear();
      }else m[a[i]]=i;
    }
    int tt=m.size();
    if(r<tt) r=tt;
    cout<<r<<endl;
  }
}
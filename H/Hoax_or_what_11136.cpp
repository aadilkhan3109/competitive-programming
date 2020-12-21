#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin>>n && n!=0){
    long long res=0;
    multiset<int> m;
    for(int i=0;i<n;i++){
      int k,t;
      cin>>k;
      for(int j=0;j<k; j++){
        cin>>t;
        m.insert(t);
      }
      int a=*m.begin(),b=*(--m.end());
      m.erase(m.begin());
      m.erase((--m.end()));
      res+=abs(a-b);
    }
    cout<<res<<endl;
  }
}
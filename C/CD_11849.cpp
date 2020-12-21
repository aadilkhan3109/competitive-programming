#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m && (n!=0 || m!=0)){
    int s,tot=0;
    set<int> ja;
    for(int i=0;i<n;i++) {
      cin>>s;
      ja.insert(s);
    }
    for(int i=0;i<m;i++){
      cin>>s;
      if(ja.find(s) != ja.end()) tot++;
    }
    cout<<tot<<endl;
  }
}
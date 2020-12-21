#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n && n!=0){
    priority_queue<int,vector<int>,greater<int>> a;
    int h;
    for(int i=0;i<n;i++){
      cin>>h;
      a.push(h);
    }
    h=0;
    while(a.size()!=1){
      int b=a.top();
      a.pop();
      b+=a.top();
      a.pop();
      a.push(b);
      h+=b;
    }
    cout<<h<<endl;
  }
}
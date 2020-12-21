#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s="";
  int t;
  cin>>t;
  getline(cin,s);
  while(t--){
    int res = 0;
    getline(cin,s);
    stack<int> stack;
    for(int i=0;i<s.size();i++){
      if(s[i]=='\\'){
        stack.push(i);
      }
      else if(s[i]=='/' && !stack.empty()){
        int p = stack.top();
        stack.pop();
        res+=(i-p);
      }
    }
    cout<<res<<endl;
  }
}
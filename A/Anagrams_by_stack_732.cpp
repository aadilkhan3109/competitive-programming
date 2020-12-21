#include <bits/stdc++.h>
using namespace std;
string a,b;
void find(int i,int j,stack<char> s,string res){
  if(j==b.size()){
    cout<<res<<endl;
    return;
  }
  if(i<a.size()){
    s.push(a[i]);
    find(i+1,j,s,res+" i");
    s.pop();
  }
  if(!s.empty() && s.top()==b[j]){
    s.pop();
    find(i,j+1,s,res+" o");
  }
}
int main(){
  while(getline(cin,a)){
    getline(cin,b);
    cout<<"["<<endl;
    if(a.size()==b.size()) find(1,0,stack<char>({a[0]}),"i");
    cout<<"]"<<endl;
  }
}
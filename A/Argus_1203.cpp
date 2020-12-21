#include <bits/stdc++.h> 
using namespace std;
struct reg{
  int id,in,i;
  reg(int a,int b){
    id=a,in=b;
  }
  bool operator<(reg a)const{
    if(in == a.in) return id > a.id;
    else return in > a.in;
  }
};

int main(){
  string s;
  int id,in,k;
  priority_queue<reg> m;
  while(cin>>s && s!="#"){
    cin>>id>>in;
    reg a(id,in);
    a.i=in;
    m.push(a);
  }
  cin>>k;
  while(k--){
    reg a = m.top();
    m.pop();
    cout<<a.id<<endl;
    a.in+=a.i;
    m.push(a);
  }
}
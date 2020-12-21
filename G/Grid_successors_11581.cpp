#include <bits/stdc++.h>
using namespace std;
string *m,*h;
bool is(){
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      if(m[i][j]=='1') return false;
  return true;
}
int f(int a){
  h=new string[3];
  if(is()) return a;
  for(int i=0;i<3;i++){
    string b="";
    for(int j=0;j<3;j++){
      int re=0;
      if(i>0) re+=(m[i-1][j]-'0');
      if(i<2) re+=(m[i+1][j]-'0');
      if(j>0) re+=(m[i][j-1]-'0');
      if(j<2) re+=(m[i][j+1]-'0');
      b+=((re%2)+'0');
    }
    h[i]=b;
  }
  m=h;
  return f(a+1);
}
int main(){
  int t;
  cin>>t;
  while(t--){
    m= new string[3];
    for(int i=0;i<3;i++) cin>>m[i];
    int c = f(0);
    cout<<c-1<<endl;
  }
}
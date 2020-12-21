#include <bits/stdc++.h>
using namespace std;
string *nn,*n,*tem;
bool fin(int a,int b,int c, int d){
  for(int i=a,k=0;i<c && k<d;i++,k++)
    for(int j=b,l=0;j<c && l<d;j++,l++)
      if(nn[i][j]!=n[k][l]) return false;
  return true;
}
int fi(int a,int b){
  int res=0;
  for(int i=0;i<=a-b;i++){
    for(int j=0;j<=a-b;j++){
      if(nn[i][j]==n[0][0])
        if(fin(i,j,a,b)) res++;
    }
  }
  return res;
}
void rot(int a){
  tem = new string[a];
  for(int i =0;i<a;i++){
    string t="";
    for(int j=0;j<a;j++)
      t+=nn[j][(a-i)-1];
    tem[i]=t;
  }
  nn = tem;
}
int main(){
  ios::sync_with_stdio(0),cin.tie(0);
  int a,b;
  while(cin>>a>>b && (a!=0 && b!=0)){
    nn = new string[a],n=new string[b];
    for(int i=0;i<a;i++) cin>>nn[i];
    for(int i=0;i<b;i++) cin>>n[i];

    cout<<fi(a,b)<<" ";
    rot(a);
    cout<<fi(a,b)<<" ";
    rot(a);
    cout<<fi(a,b)<<" ";
    rot(a);
    cout<<fi(a,b)<<"\n";
  }
}
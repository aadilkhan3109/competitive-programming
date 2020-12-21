#include <bits/stdc++.h>
using namespace std;

struct node{
  int k=0,q=0,j=0,i=0, t=0,xres=0;
  char n;
};

int calsuit(string *s,char tok ,node& node){
  int res=0;
  node.n = tok;
  for(int i=0;i<13;i++){
    if(s[i][1]==tok){
      if(s[i][0]=='A'){
        res+=4;
        node.i=1;
      }
      else if(s[i][0]=='K') {
        res+=3;
        node.k=1;
      }
      else if(s[i][0]=='Q') {
        res+=2;
        node.q=1;
      }
      else if(s[i][0]=='J') {
        res+=1;
        node.j=1;
      }
      node.t++;
    }
  }
  if(node.t==1 && node.k) res--;
  if(node.t<=2 && node.q) res--;
  if(node.t<=3 && node.j) res--;

  if(node.t == 2) node.xres+=1;
  else if(node.t == 1) node.xres+=2;
  else if(node.t == 0) node.xres+=2;

  if(node.t>=2 && node.k) node.i = true;
  if(node.t>=3 && node.q) node.i = true;

  return res;
}

node& no(node& a,node& b){
  if(a.t == b.t){
    if(a.n<b.n) return b;
    else return a;
  }
  else if(a.t>b.t) return a;
  else return b;
}

int main(){
  string l;
  while(getline(cin,l)){
    string s[13]; int j=0;
    node ns,nh,nd,nc;
    for(int i =0;i<l.size();i++){
      string tm="";
      while(i<l.size() && l[i]!=' '){
        tm+=l[i];
        i++;
      }
      s[j++]=tm;
      tm="";
    }
    int tres = calsuit(s,'S',ns)+calsuit(s,'H',nh)+calsuit(s,'D',nd)+calsuit(s,'C',nc);
    int xtres = ns.xres+nh.xres+nd.xres+nc.xres;
    if(tres+xtres<14) printf("PASS\n");
    else{
      if((tres>=16) && (ns.i && nh.i && nd.i && nc.i)){
        printf("BID NO-TRUMP\n");
      }
      else {
        printf("BID %c\n",no(no(ns,nh),no(nd,nc)).n);
      }
    }
  }
  return 0;
}
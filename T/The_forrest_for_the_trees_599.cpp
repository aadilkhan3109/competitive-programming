#include <bits/stdc++.h>
using namespace std;
class disj{
  private:
    char pa[256];
    int ra[256]={0};

  public:
    disj(){
      for(char i='A';i<='Z';i++)
        pa[i]=i;
    }

    char fn(char a){
      if(pa[a]==a) return pa[a];
      return fn(pa[a]);
    }

    void unn (char a,char b){
      char aa = fn(a);
      char bb = fn(b);
      if(aa == bb) return;
      if(ra[aa] < ra[bb]) pa[aa] = bb;
      else if(ra[aa] > ra[bb]) pa[bb]=aa;
      else {
        pa[bb] = aa;
        ra[aa]++;
      }
    }
    int rank(char a){ return ra[pa[a]];}
};

int main(){
  int t;
  string l;
  cin>>t;
  getline(cin,l);
  while(t--){
    disj d;
    while(getline(cin,l) && l[0]!='*')
      d.unn(l[1],l[3]);

    int tre=0,aco=0;
    set<char> se;
    getline(cin,l);
    for(int i=0;i<l.size();i+=2){
      se.insert(d.fn(l[i]));
    }
    for(auto x: se){
      if(d.rank(x)>0) tre++;
      else aco++;
    }
    printf("There are %d tree(s) and %d acorn(s).\n",tre,aco);
  }
  return 0;
}
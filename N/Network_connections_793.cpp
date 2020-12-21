#include <bits/stdc++.h>
using namespace std;
class disj{
  private:
    vector<int> pa,d;
  public:
    disj(int n){
      for(int i=0;i<=n;i++){
        pa.push_back(i);
        d.push_back(0);
      }  
    }
    int find(int a){
      if(pa[a]==a) return pa[a];
      return find(pa[a]);
    }
    void un(int a,int b){
      int aa=find(a);
      int bb=find(b);
      if(aa==bb) return;
      if(d[aa]>d[bb]) pa[bb]=aa;
      else if(d[bb]>d[aa]) pa[aa]=bb;
      else{
        pa[bb]=aa;
        d[aa]++;
      }
    }
};
int main(){
  int t,f=0;
  cin>>t;
  while(t--){
    if(f)cout<<endl;
    int qu,wr=0,ri=0;
    cin>>qu;
    disj dj(qu);
    string l;
    getline(cin,l);
    while(getline(cin,l) && l!=""){
      stringstream ss(l);
      char a;
      int b,c;
      ss>>a>>b>>c;
      if(a=='c'){
        dj.un(b,c);
      }else{
        if(dj.find(b) == dj.find(c)) ri++;
        else wr++;
      }
    }
    cout<<ri<<","<<wr<<endl;
    f=1;
  }
}
#include <bits/stdc++.h>
using namespace std;
class ds{
  private:
    vector<int> pa,ra;
  public:
    ds(int n){
      pa.assign(n,0),ra.assign(n,1);
      for(int i=0;i<n;i++) pa[i]=i;
    }
    int find(int a){ return (pa[a] == a) ? a: (pa[a]=find(pa[a]));}

    int un(int a,int b){
      int aa=find(a),bb=find(b);
      if(aa!=bb){
        if(ra[aa]>ra[bb]){
          pa[bb]=aa;
          ra[aa]+=ra[bb];
          return ra[aa];
        }
        pa[aa]=bb;
        ra[bb]+=ra[aa];
        return ra[bb];
      }
      return ra[aa];
    }
};
int main(){
  ios::sync_with_stdio(0),cin.tie(0);
  int t,f;
  cin>>t;
  while(t--){
    map<string,int> key;
    cin>>f;
    int id=0;
    ds ds(2*f);
    for(int i=0;i<f;i++){
      string a,b;
      cin>>a>>b;
      int x= key[a];
      if(x == 0) key[a]=++id,x=id;
      int y = key[b];
      if(y == 0) key[b]=++id,y=id;
      cout<<ds.un(x,y)<<endl;
    }
  }
}
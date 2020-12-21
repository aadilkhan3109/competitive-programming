#include <bits/stdc++.h>
using namespace std;
struct node{
  string name;
  int low ,high;
  node(string n,int l,int h){
    name = n;
    low = l;
    high = h; 
  }
};
int main(){
  int t,f=0;
  cin>>t;
  while(t--){
    if(f)cout<<endl;
    vector<node> com;
    int d,q;
    cin>>d;
    for(int i=0;i<d;i++){
      string name;
      int h,l;
      cin>>name>>l>>h;
      com.push_back(node(name,l,h));
    }
    cin>>q;
    for(int i=0;i<q;i++){
      cin>>d;
      int nu=0;
      string h="";
      for(int j=0;j<com.size();j++){
        if(com[j].low <=d && com[j].high>=d) {nu++;h=com[j].name;}
        if(nu>1) break;
      }
      if(nu>1 || nu ==0) cout<<"UNDETERMINED"<<endl;
      else cout<<h<<endl;
      f=1;
    }
  }
}
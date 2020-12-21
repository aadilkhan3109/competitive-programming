#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0),cin.tie(0);
  int n,f=0;
  cin>>n;
  while(n--){
    if(f)cout<<endl;
    int b,sg,sb,t;
    multiset<int, greater<int>> mg,mb;
    cin>>b>>sg>>sb;
    while(sg--){
      cin>>t;
      mg.insert(t);
    }
    while(sb--){
      cin>>t;
      mb.insert(t);
    }
    while(!mg.empty() && !mb.empty()){
      vector<int> vg,vb;
      for(int i=0;i<b &&(!mg.empty() && !mb.empty());i++){
        int a=*mg.begin(),b=*mb.begin();
        if(a==b){
          mb.erase(mb.begin());
          mg.erase(mg.begin());
        }else if(a>b){
          vg.push_back(a-b);
          mb.erase(mb.begin());
          mg.erase(mg.begin());
        }
        else{
          vb.push_back(b-a);
          mb.erase(mb.begin());
          mg.erase(mg.begin());
        }
      }
      for(int i=0;i<vg.size();i++) mg.insert(vg[i]);
      for(int i=0;i<vb.size();i++) mb.insert(vb[i]);
    }
    if(mg.empty() && mb.empty()) cout<<"green and blue died"<<endl;
    else if(mg.empty()){
      cout<<"blue wins"<<endl;
      for(auto x: mb) cout<<x<<endl;
    }else {
      cout<<"green wins"<<endl;
      for(auto x: mg) cout<<x<<endl;
    }
    f=1;
  }
}
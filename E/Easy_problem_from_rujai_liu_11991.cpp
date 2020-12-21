#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m){
    map<int,vector<int>> map;

    int a;
    for(int i=0;i<n;i++){
      cin>>a;
      if(map.find(a)!=map.end()) map[a].push_back(i);
      else {
        map.insert(pair<int,vector<int>>(a,vector<int>()));
        map[a].push_back(i);
      }
    }
    int nn,mm;
    for(int i=0;i<m;i++){
      cin>>nn>>mm;
      if(map.find(mm)!=map.end()){
        if(map[mm].size()>=nn){
          cout<<(map[mm][nn-1]+1)<<endl;
        }
        else cout<<0<<endl;
      }
    }
  }
}
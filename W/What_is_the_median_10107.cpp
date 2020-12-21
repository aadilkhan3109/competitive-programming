#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> m;
  int t;
  while(cin>>t){
    m.push_back(t);
    int s=m.size();
    nth_element(m.begin(),m.begin()+s/2,m.end());
    if(s%2==0){
      nth_element(m.begin(),m.begin()+(s/2-1),m.end());
      int x =(m[s/2]+m[s/2-1])/2;
      printf("%d\n",x);
    }else 
      printf("%d\n",m[s/2]);
  }
  return 0;
}